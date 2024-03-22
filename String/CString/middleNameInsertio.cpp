#include <iostream>
#include <cstring>

int main()
{
    const int maxLength = 100;
    char fullName[maxLength], middleName[maxLength];

    std::cout << "Enter first name and last name\n";
    std::cin.getline(fullName, maxLength);

    std::cout << "Enter middle name\n";
    std::cin.getline(middleName, maxLength);

    // Find the position to insert the middle name (after the first name)
    char *insertPos = std::strchr(fullName, ' ');
    if (insertPos != nullptr)
    {
        insertPos++; // Move to the character after the space

        // Calculate the size needed for the resulting string
        size_t resultLength = std::strlen(fullName) + std::strlen(middleName) + 2; // 2 for space and null terminator

        // Allocate memory for the result
        char *result = new char[resultLength];

        // Copy the first part of the full name
        std::strncpy(result, fullName, insertPos - fullName);
        result[insertPos - fullName] = '\0'; // Null-terminate the copied part

        // Concatenate the middle name
        std::strcat(result, middleName);
        std::strcat(result, " ");

        // Concatenate the last part of the full name
        std::strcat(result, insertPos);

        std::cout << "Full name with middle name: " << result << '\n';

        delete[] result;
    }
    else
    {
        std::cout << "Invalid full name format. Please enter first name and last name separated by space." << '\n';
    }
    return 0;
}
