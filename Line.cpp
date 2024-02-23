// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: March 25, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#include <cstring>

#include "Line.h"

using namespace std;

namespace sdds
{
    Line::Line()
    {
        m_length = 0;
    }

    Line::Line(const char* label, int length) :LblShape(label)
    {
        m_length = length;
    }

    void Line::getSpecs(std::istream& is)
    {
        LblShape::getSpecs(is);
        is >> m_length;
        is.ignore(500, '\n');
    }

    void Line::draw(std::ostream& os) const
    {
        if (m_length > 0 && LblShape::label() != nullptr)
        {
            os << LblShape::label() << endl;
            for (int x = 0; x < m_length; x++)
                os << "=";
        }
    }
}