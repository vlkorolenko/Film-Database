#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <utility> // для std::pair
#include <algorithm> // для std::find_if

class UserManager
{
private:
    std::vector<std::pair<std::string, std::string>> users; // <username, password>
    std::string filename = "users.txt";

public:
    UserManager() { loadUsersFromFile(); }

    void loadUsersFromFile();

    void saveUsersToFile();
  
    bool registerUser(const std::string& username, const std::string& password);

    bool loginUser(const std::string& username, const std::string& password); 

};

