#include "UserManager.h"

void UserManager::loadUsersFromFile()
{
    std::ifstream file(filename);
    if (file.is_open())
    {
        std::string username, password;
        while (file >> username >> password)
        {
            users.emplace_back(username, password);
        }
        file.close();
    }
}

void UserManager::saveUsersToFile()
{
    std::ofstream file(filename);
    if (file.is_open())
    {
        for (const auto& user : users)
        {
            file << user.first << " " << user.second << std::endl;
        }
        file.close();
    }
}

bool UserManager::registerUser(const std::string& username, const std::string& password)
{
    auto it = std::find_if(users.begin(), users.end(), [&](const auto& user){ return user.first == username;});

    if (it != users.end())
    {
        std::cout << "User with this username already exists." << std::endl;
        return false;
    }

    users.emplace_back(username, password);
    std::cout << "User registered successfully." << std::endl;
    saveUsersToFile();
    return true;
}

bool UserManager::loginUser(const std::string& username, const std::string& password)
{
    auto it = std::find_if(users.begin(), users.end(), [&](const auto& user) 
        { return user.first == username && user.second == password; });

    if (it != users.end())
    {
        std::cout << "Login successful. Welcome, " << username << "!" << std::endl;
        return true;
    }
    std::cout << "Invalid username or password." << std::endl;
    return false;
}
