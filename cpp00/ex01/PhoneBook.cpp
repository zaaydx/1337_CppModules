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
    std::cout << "First Name:" <<  contacts[index].getFirstName() << "\n";
    std::cout << "Last Name:" <<  contacts[index].getLastName() << "\n";
    std::cout << "NickName:" <<  contacts[index].getNickName() << "\n";
    std::cout << "Phone Number:" <<  contacts[index].getPhoneNumber() << "\n";
    std::cout << "Darkest Secret:" <<  contacts[index].getDarkestSecret() << "\n";
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
    std::cout << "---------------------------------------------" << "\n";
    std::cout << "|index     |first name|last name |nickname  |" <<"\n";
    while(i < PhoneBook::size)
    {
        std::cout << "|" << i << std::setw(10)<<"|";
        std::cout << std::setw(10);
        std::cout << printField(contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10);
        std::cout << printField(contacts[i].getLastName()) << "|";
        std::cout << std::setw(10);
        std::cout << printField(contacts[i].getNickName()) << "|" << "\n";
        i++;
    }
}

void        PhoneBook::exitPhoneBook()
{
    std::cout << "the program has exit\n";
    exit(0);
}