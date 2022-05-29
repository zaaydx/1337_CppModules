#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, 
    std::string nickname, std::string phone,  std::string secret){
        Contact::first_name = first_name;
        Contact::last_name = last_name;
        Contact::nickname = nickname;
        Contact::phone_number = phone;
        Contact::darkest_secret = secret;
    return;
}