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
        void GetContact(int Index) const;
        void SetContact(void);
        void GetInfo() const;
        std::string FormatString(const std::string& str);

    private :
        std::string _PhoneNumber;
        std::string _DarkestSecret ;
        std::string _Nickname;
        std::string _LastName;
        std::string _FirstName;
};

#endif
