#include "Menu.h"

void Menu::addFilm()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // �������� ����� ��������

    // ��������� ������
    Film newFilm;
    std::cout << "Enter film details:" << std::endl;
    std::cout << "Title: ";
    std::getline(std::cin, newFilm.title);
    std::cout << "Year: ";
    std::cin >> newFilm.year;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // �������� ����� ��������
    std::cout << "Genre: ";
    std::getline(std::cin, newFilm.genre);
    std::cout << "Director: ";
    std::getline(std::cin, newFilm.director);
    newFilm.views = 0; // ��������� �������� ������� ���������
    addFilmToFile(newFilm);
}

void Menu::addFilmToFile(const Film& film)
{
    std::ofstream file("films.txt", std::ios::app);
    if (file.is_open())
    {
        file << film.title << "," << film.year << "," << film.genre << "," << film.director << "," << film.views << std::endl;
        file.close();
        std::cout << "Film added successfully." << std::endl;
    }
    else
    {
        std::cout << "Unable to open file." << std::endl;
    }
}

void Menu::displayFilmList()
{
    // �������� ������ ������
    std::ifstream file("films.txt");
    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            // �������������� ��������� ���� ��� �������� ����� �� ����
            std::istringstream iss(line);
            std::string title, genre, director;
            int year, views;

            // �������� ����� �� ���� �� ��������� ���� �� ����������
            std::getline(iss, title, ',');
            iss >> year; iss.ignore(); // ���������� ���� �� ��������� ��
            std::getline(iss, genre, ',');
            std::getline(iss, director, ',');
            iss >> views; // ��������� ������� ���������

            // ���� ���������� ��� ����� � ��������� ������
            std::cout << "Title: " << title << std::endl;
            std::cout << "Year: " << year << std::endl;
            std::cout << "Genre: " << genre << std::endl;
            std::cout << "Director: " << director << std::endl;
            std::cout << "Views: " << views << std::endl;
            std::cout << "-------------\n"; // ������� ����� ��� ��������� ������
        }
        file.close();
    }
    else
    {
        std::cout << "Unable to open file." << std::endl;
    }
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
        std::cout << "5. Actors\n";
        std::cout << "6. Exit\n";
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
            //cout << "soon\n";
            addFilm();
            break;
        case 3:
            deleteFilm();
            break;
        case 4:
            baseFilm.printAllReviewsInfo();
            break;
        case 5:
            baseFilm.printAllActorsInfo();
            break;
        case 6:
            cout << "Exiting...\n";
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

void Menu::deleteFilm()
{
    std::string titleToDelete;
    std::cout << "Enter the title of the film to delete: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // �������� ����� ��������
    std::getline(std::cin, titleToDelete);

    // ³������ ���������� ���� ��� �������
    std::ifstream inputFile("films.txt");
    if (!inputFile.is_open())
    {
        std::cout << "Unable to open file." << std::endl;
        return;
    }

    // ³������ ���������� ���� ��� ������
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
            continue; // ���������� ����� ������, ���� ������� ��������
        }
        tempFile << line << std::endl; // �������� ����� ������ � ���������� ����
    }

    inputFile.close();
    tempFile.close();

    // �������� ����������� ���� �� ������������� ���������� ����
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
}
