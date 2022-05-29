#include "PhoneBook.hpp"

void    addContact(PhoneBook &phonebook){

    std::string  first_name;
    std::string  last_name;
    std::string  nickname;
    std::string  phone;
    std::string  darkest_secret;

    std::cout << "\033[0;34mFirst name\t:\033[0;37m " ;
    std::cin >> first_name;
    std::cout << "\033[0;34mLast name\t:\033[0;37m " ;
    std::cin >> last_name;
    std::cout << "\033[0;34mNickname\t:\033[0;37m " ;
    std::cin >> nickname;
    std::cout << "\033[0;34mPhone\t\t:\033[0;37m " ;
    std::cin >> phone;
    std::cout << "\033[0;34mDarkest secret\t:\033[0;37m " ;
    std::cin >> darkest_secret;
    Contact contact = 
    Contact(first_name,last_name, nickname, phone, darkest_secret);
    phonebook.add(contact);      
}

bool isNumber(char number[])
{
    int i = 0;

    if (number[0] == '-')
        i = 1;
    while (number[i])
    {
        if (!isdigit(number[i]))
            return false;
        i++;
    }
    return true;
}

int checkIndex(std::string index)
{
    int i;

    i = 0;
    while(index[i])
    {
        if (index[i] < '0' || index[i] > '9')
        return (0);
        i++;
    }
    return (1);
}


void    searchContact(PhoneBook &phonebook)
{
    std::string index;
    int n;

    if (phonebook.size > 0)
    {
        phonebook.printPhoneBook();
        std::cout << "\033[0;36mEnter the index of the contact you are searching for :\033[0;37m ";
        std::cin >> index;
        if (checkIndex(index))
        {
            n = std::stoi(index);
            if (n >= 0 && n < phonebook.size)
                phonebook.search(n);
            else    
                std::cout << "out of rang!" << std::endl;
        }
        else
            std::cout << "Invalid input"<<std::endl;
    }
    else
        std::cout << "No contact available yet!" << std::endl;
}

int main()
{
    PhoneBook phonebook = PhoneBook();
    std::string operation;

    std::cout << "\033[0;34mWelcome to your PhoneBook!\033[0;37m" << "\n";
    std::cout<< "Available operations are : "<< "\n";
    std::cout << "\033[0;31mADD ~ add :\033[0;37m to add a contact." << "\n";
    std::cout << "\033[0;31mSEARCH ~ search :\033[0;37m search for a contact." << "\n";
    std::cout << "\033[0;31mEXIT ~ exit :\033[0;37m to quit the program." <<"\n";
    while (1)
    {
        std::cout << "\033[0;32mWhat is your operation:\033[0;37m ";
        std::cin >> operation;
        if ((operation == "ADD") || (operation == "add"))
           addContact(phonebook);
        else if ((operation == "SEARCH") || (operation == "search"))
          searchContact(phonebook);
        else if((operation == "EXIT") || (operation == "exit"))
            phonebook.exitPhoneBook();
        else 
        {
            std::cout << "no matched command" << "\n";
            continue;
        }  
    }
    return (0);
}