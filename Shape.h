// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: March 25, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_SHAPE_H
#define SDDS_SHAPE_H

#include <iostream>

namespace sdds
{
    class Shape
    {
    public:
        virtual ~Shape() {};

        virtual void draw(std::ostream&) const = 0;
        virtual void getSpecs(std::istream&) = 0;
    };

    std::istream& operator>>(std::istream& Left, Shape& Object);
    std::ostream& operator<<(std::ostream& Left, const Shape& Object);
}
#endif //!SDDS_SHAPE_H