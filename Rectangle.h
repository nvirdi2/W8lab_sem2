// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: March 25, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_RECTANGLE_H
#define SDDS_RECTANGLE_H

#include "LblShape.h"

#include <iostream>

namespace sdds
{
    class Rectangle : public LblShape
    {
        int m_width;
        int m_height;
    public:
        Rectangle();
        ~Rectangle() {};

        void getSpecs(std::istream&);
        void draw(std::ostream&) const;

        Rectangle(const char*, int, int);
    };
}
#endif //!SDDS_RECTANGLE_H