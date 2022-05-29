#include "PhoneBook.hpp"

std::string Contact::getFirstName(void){
    return this->first_name;
}  
std::string Contact::getLastName(void){
    return this->last_name;
} 
std::string Contact::getNickName(void){
    return this->nickname;
} 
std::string Contact::getPhoneNumber(void){
    return this->phone_number;
} 
std::string Contact::getDarkestSecret(void){
    return this->darkest_secret;
} 

PhoneBook::PhoneBook(void){
    this->size = 0;
}

PhoneBook::~PhoneBook(void){
}
                   
void PhoneBook::add(Contact contact)
{
    this->size = (this->size >= 8) ? 8 : this->size + 1;
    this->contacts[this->size - 1] = contact;
}

void PhoneBook::search(int index){
    std::cout << "\033[0;31mFirst name\t :\033[0;37m " <<  contacts[index].getFirstName() << "\n";
    std::cout << "\033[0;31mLast name\t :\033[0;37m " <<  contacts[index].getLastName() << "\n";
    std::cout << "\033[0;31mNickname\t :\033[0;37m " <<  contacts[index].getNickName() << "\n";
    std::cout << "\033[0;31mPhone\t\t :\033[0;37m " <<  contacts[index].getPhoneNumber() << "\n";
    std::cout << "\033[0;31mDarkest secret\t :\033[0;37m " <<  contacts[index].getDarkestSecret() << "\n";
}

std::string   printField(std::string str){
    if(str.length() < 10)
        return (str);
    return(str.substr(0,9).append("."));
}

void    PhoneBook::printPhoneBook()
{
    int i;

    i = 0;
    std::cout << "\033[0;32m" <<  "---------------------------------------------" << "\033[0;37m" << "\n";
    std::cout << "\033[0;32m" << "|   index  |first name|last name | nickname |" << "\033[0;37m" << "\n";
    while(i < PhoneBook::size)
    {
        std::cout << "\033[0;32m" << "|" << "\033[0;37m" << std::setw(10) << i << "\033[0;32m" << "|" << "\033[0;37m";
        std::cout << std::setw(10);
        std::cout << printField(contacts[i].getFirstName()) << "\033[0;32m" << "|" << "\033[0;37m";
        std::cout << std::setw(10);
        std::cout << printField(contacts[i].getLastName()) << "\033[0;32m" << "|" << "\033[0;37m";
        std::cout << std::setw(10);
        std::cout << printField(contacts[i].getNickName()) << "\033[0;32m" << "|\n" << "\033[0;37m";
        i++;
    }
    std::cout << "\033[0;32m" << "---------------------------------------------" << "\033[0;37m" << "\n";
}

void        PhoneBook::exitPhoneBook()
{
    std::cout << "\033[0;36mTHE PROGRAM HAS EXIT\033[0;37m\n";
    exit(0);
}