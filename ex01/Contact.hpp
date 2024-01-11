#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <cstring>
#include <iomanip>

class  Contact
{

    public :
        Contact();
        ~Contact();
        Contact(const Contact&);
        void GetContact(void) const;
        void SetContact(void);
        void GetInfo() const;
        std::string FormatString(const std::string& str);
        int   Index;
    
    private :
        std::string _PhoneNumber;
        std::string _DarkestSecret ;
        std::string _Nickname;
        std::string _LastName;
        std::string _FirstName;
        std::string _Nickname_r;
        std::string _LastName_r;
        std::string _FirstName_r;
};

#endif 