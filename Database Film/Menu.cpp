#include "Menu.h"

string Menu::getCurrentDate()
{
    // Отримуємо поточний час
    auto now = std::chrono::system_clock::now();

    // Перетворюємо поточний час у часову точку
    std::time_t nowTime = std::chrono::system_clock::to_time_t(now);

    // Форматуємо час у рядок
    std::string currentDate = std::ctime(&nowTime);

    // Повертаємо рядок
    return currentDate;
}

void Menu::addFilm()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистити буфер введення

    // Додавання фільму
    Film newFilm;
    std::cout << "Enter film details:" << std::endl;
    std::cout << "Title: ";
    std::getline(std::cin, newFilm.title);
    std::cout << "Year: ";
    std::cin >> newFilm.year;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистити буфер введення
    std::cout << "Genre: ";
    std::getline(std::cin, newFilm.genre);
    std::cout << "Director: ";
    std::getline(std::cin, newFilm.director);
    newFilm.views = 0; // Початкове значення кількості переглядів
    addFilmToFile(newFilm);
    logAction("Added a film", username);
}

void Menu::addReview()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистити буфер введення

    // Додавання відгуку
    Review newReview;
    std::cout << "Enter review details:" << std::endl;
    std::cout << "Film: ";
    std::getline(std::cin, newReview.film);
    newReview.user = username;
    std::cout << "Rate: ";
    std::cin >> newReview.rate;
    while (newReview.rate < 0 or newReview.rate > 5)
    {
        std::cout << "The rate must be between 0 and 5!\nTry again: ";
        std::cin >> newReview.rate;
    }
    /*if (newReview.rate < 0 or newReview.rate > 5)
    {
        do
        {
            std::cout << "The rate must be between 0 and 5!\nTry again: ";
            std::cin >> newReview.rate;
        } while (newReview.rate < 0 or newReview.rate > 5);
    }*/
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистити буфер введення
    newReview.date = getCurrentDate();
    addReviewToFile(newReview);
    logAction("Left a review", username);
}

void Menu::addFilmToFile(const Film& film)
{
    std::ofstream file("films.txt", std::ios::app);
    if (file.is_open())
    {
        file << film.title << "," << film.year << "," << film.genre << "," << film.director << "," << film.views << std::endl;
        file.close();
        std::cout << "\nFilm added successfully." << std::endl;
    }
    else
    {
        std::cout << "\nUnable to open file." << std::endl;
    }
}

void Menu::addReviewToFile(const Review& review)
{
    std::ofstream file("reviews.txt", std::ios::app);
    if (file.is_open())
    {
        file << review.film << "," << review.user << "," << review.rate << "," << review.date;
        file.close();
        std::cout << "\nReview added successfully." << std::endl;
    }
    else
    {
        std::cout << "\nUnable to open file." << std::endl;
    }
}

void Menu::displayFilmList()
{
    // Перегляд списку фільмів
    std::ifstream file("films.txt");
    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            // Використовуйте стрічковий потік для розбиття рядка на поля
            std::istringstream iss(line);
            std::string title, genre, director;
            int year, views;

            // Розбиття рядка на поля за допомогою коми як роздільника
            std::getline(iss, title, ',');
            iss >> year; iss.ignore(); // Пропустити кому та прочитати рік
            std::getline(iss, genre, ',');
            std::getline(iss, director, ',');
            iss >> views; // Прочитати кількість переглядів

            // Вивід інформації про фільм у вказаному форматі
            std::cout << "Title: " << title << std::endl;
            std::cout << "Year: " << year << std::endl;
            std::cout << "Genre: " << genre << std::endl;
            std::cout << "Director: " << director << std::endl;
            std::cout << "Views: " << views << std::endl;
            std::cout << "-------------\n"; // Порожній рядок для розділення фільмів
        }
        file.close();
    }
    else
    {
        std::cout << "Unable to open file." << std::endl;
    }
}

void Menu::displayReviewList()
{
    // Перегляд списку фільмів
    std::ifstream file("reviews.txt");
    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            // Використовуйте стрічковий потік для розбиття рядка на поля
            std::istringstream iss(line);
            std::string film, user, date;
            double rate;

            // Розбиття рядка на поля за допомогою коми як роздільника
            std::getline(iss, film, ',');
            std::getline(iss, user, ',');
            iss >> rate; iss.ignore(); // Пропустити кому та прочитати рік
            std::getline(iss, date, ',');

            // Вивід інформації про фільм у вказаному форматі
            std::cout << "Film: " << film << std::endl;
            std::cout << "User: " << user << std::endl;
            std::cout << "Rate: " << rate << std::endl;
            std::cout << "Date: " << date << std::endl;
            std::cout << "-------------\n"; // Порожній рядок для розділення фільмів
        }
        file.close();
    }
    else
    {
        std::cout << "Unable to open file." << std::endl;
    }
}

void Menu::displayLogList()
{
    // Перегляд логів
    std::ifstream file("log.txt");
    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        std::cout << "Unable to open file." << std::endl;
    }
}

void Menu::logAction(const std::string& action, const std::string& username)
{
    auto currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    std::string timeString = std::ctime(&currentTime);      // Форматування поточного часу   

    timeString.pop_back();                                  // Видалення символу нового рядка з кінця рядка  

    std::ofstream logfile("log.txt", std::ios::app);

    // Запис дії у файл
    if (logfile.is_open())
    {
        logfile << timeString << "\tUsername: " << username << "\tAction: " << action << std::endl;
        logfile.close();
    }
    else
    {
        std::cerr << "Error: Unable to open log file!" << std::endl;
    }
}

void Menu::deleteFilm()
{
    std::string titleToDelete;
    std::cout << "Enter the title of the film to delete: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистити буфер введення
    std::getline(std::cin, titleToDelete);

    // Відкрити тимчасовий файл для читання
    std::ifstream inputFile("films.txt");
    if (!inputFile.is_open())
    {
        std::cout << "Unable to open file." << std::endl;
        return;
    }

    // Відкрити тимчасовий файл для запису
    std::ofstream tempFile("temp.txt");
    if (!tempFile.is_open())
    {
        std::cout << "Unable to create temporary file." << std::endl;
        inputFile.close();
        return;
    }

    std::string line;
    bool found = false;
    while (std::getline(inputFile, line))
    {
        std::istringstream iss(line);
        std::string title;
        std::getline(iss, title, ',');
        if (title == titleToDelete)
        {
            found = true;
            continue; // Пропустити запис фільму, який потрібно видалити
        }
        tempFile << line << std::endl; // Записати решту записів у тимчасовий файл
    }

    inputFile.close();
    tempFile.close();

    // Видалити оригінальний файл та перейменувати тимчасовий файл
    if (found)
    {
        if (std::remove("films.txt") != 0)
        {
            std::cout << "Error deleting file." << std::endl;
            return;
        }
        if (std::rename("temp.txt", "films.txt") != 0)
        {
            std::cout << "Error renaming file." << std::endl;
            return;
        }
        std::cout << "Film deleted successfully." << std::endl;
    }
    else
    {
        std::cout << "Film not found." << std::endl;
    }
    logAction("Deleted a film", username);
}

int Menu::open()
{
    bool menuIsOpen = true;

    while (menuIsOpen)
    {
        std::cout << "\n*MENU*\n";
        std::cout << "1. Movie list\n";
        std::cout << "2. Add movie\n";
        std::cout << "3. Remove movie\n";
        std::cout << "4. Reviews\n";
        std::cout << "5. Add review\n";
        std::cout << "6. Actors\n";
        std::cout << "7. Logs\n";
        std::cout << "8. Exit\n";
        std::cout << "Choose option: ";
        int option;
        std::cin >> option;
        while (option < 1 || option > 8)
        {
            std::cout << "Incorrect option. \nTry again: ";
            std::cin >> option;
        }
        switch (option)
        {
        case 1:
            cout << endl;
            displayFilmList();
            break;
        case 2:
            addFilm();
            break;
        case 3:
            deleteFilm();
            break;
        case 4:
            displayReviewList();
            break;
        case 5:
            addReview();
            break;
        case 6:
            cout << "Soon...\n";
            break;
        case 7:
            cout << endl;
            displayLogList();
            break;
        case 8:
            cout << "Exiting...\n";
            logAction("Logged out", username);
            return 0;
        }
        int variant = 0;
        do {
            cout << "\n1. Back to menu";
            cout << "\n2. Exit\n";
            cout << "Choose option: ";
            cin >> variant;
            while (variant < 1 || variant > 2)
            {
                std::cout << "Incorrect option. \nTry again: ";
                std::cin >> variant;
            }
            if (variant == 2)
            {
                cout << "Exiting...\n";
                logAction("Logged out", username);
                return 0;
            }
            else
            {
                system("cls");
                break;
            }
        } while (variant != 1);
    }
}

int Menu::userMenu()
{
    bool menuIsOpen = true;

    while (menuIsOpen)
    {
        std::cout << "\n*MENU*\n";
        std::cout << "1. Movie list\n";
        std::cout << "2. Reviews\n";
        std::cout << "3. Add review\n";
        std::cout << "4. Actors\n";
        std::cout << "5. Exit\n";
        std::cout << "Choose option: ";
        int option;
        std::cin >> option;
        while (option < 1 || option > 5)
        {
            std::cout << "Incorrect option. \nTry again: ";
            std::cin >> option;
        }
        switch (option)
        {
        case 1:
            cout << endl;
            displayFilmList();
            break;
        case 2:
            displayReviewList();
            break;
        case 3:
            addReview();
            break;
        case 4:
            baseFilm.printAllActorsInfo();
            break;
        case 5:
            cout << "Exiting...\n";
            logAction("Logged out", username);
            return 0;   
        }
        int variant = 0;
        do {
            cout << "\n1. Back to menu";
            cout << "\n2. Exit\n";
            cout << "Choose option: ";
            cin >> variant;
            while (variant < 1 || variant > 2)
            {
                std::cout << "Incorrect option. \nTry again: ";
                std::cin >> variant;
            }
            if (variant == 2)
            {
                cout << "Exiting...\n";
                logAction("Logged out", username);
                return 0;
            }
            else
            {
                system("cls");
                break;
            }
        } while (variant != 1);
    }
}