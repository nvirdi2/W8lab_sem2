// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: March 25, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#include <cstring>
#include <iomanip>
#include <iostream>

#include "Rectangle.h"

using namespace std;

namespace sdds
{
    Rectangle::Rectangle()
    {
        m_height = 0;
        m_width = 0;
    }

    void Rectangle::getSpecs(std::istream& is)
    {
        LblShape::getSpecs(is);

        is >> m_width;
        is.ignore();

        is >> m_height;
        is.ignore(500, '\n');
    }

    void Rectangle::draw(std::ostream& os) const
    {
        if (m_height > 0 && m_width > 0)
        {
            os << '+';

            for (int x = 0; x < m_width - 2; x++)
            {
                os << '-';
            }

            os << '+' << endl;

            os << '|';
            os << left << setw(m_width - 2) << LblShape::label();
            os << '|' << endl;

            for (int x = 0; x < m_height - 3; x++)
            {
                os << '|';

                for (int j = 0; j < m_width - 2; j++)
                {
                    os << ' ';
                }

                os << '|' << endl;
            }

            os << '+';

            for (int x = 0; x < m_width - 2; x++)
            {
                os << '-';
            }

            os << '+';
        }
    }

    Rectangle::Rectangle(const char* label, int W, int H) :LblShape(label)
    {
        m_width = W;
        m_height = H;

        if (m_height < 3 || m_width < ((int)strlen(LblShape::label()) + 2))
        {
            m_width = 0;
            m_height = 0;
        }
    }
    
}