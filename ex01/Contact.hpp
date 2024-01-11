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
    std::string PhoneNumber;
    std::string DarkestSecret ;
    std::string Nickname;
    std::string LastName;
    std::string FirstName;
    std::string Nickname_r;
    std::string LastName_r;
    std::string FirstName_r;
};

#endif 