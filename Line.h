// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: March 25, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_LINE_H
#define SDDS_LINE_H

#include "LblShape.h"

#include <iostream>

namespace sdds
{
    class Line : public LblShape
    {
        int m_length;
    protected:
        char* label();
    public:
        Line();
        ~Line() {};

        void getSpecs(std::istream&);
        void draw(std::ostream&) const;
        
        Line(const char*, int);
    };
}
#endif //!SDDS_LINE_H