#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <cstring>

class  Contact
{

    public :
    Contact();
    ~Contact();
    Contact(const Contact&);
    void GetContact(void) const;
    void SetContact(void);
    void GetInfo();
    std::string FormatString(const std::string& str);
 
    int   Index;
    
    private :
    std::string  PhoneNumber;
    std::string DarkestSecret ;
    std::string Nickname;
    std::string LastName;
    std::string FirstName;

};

#endif 