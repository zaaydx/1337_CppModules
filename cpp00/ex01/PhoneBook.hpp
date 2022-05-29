#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip> 
#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
    
    public:
        int size;
        PhoneBook(void);
        ~PhoneBook(void);
        void        add(Contact contact);
        void        search(int index);
        void        print(Contact contact);
        void        printPhoneBook();
        void        exitPhoneBook();
};

#endif