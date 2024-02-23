// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: March 25, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include "LblShape.h"
#include <cstring>
#include <string>
using namespace std;

namespace sdds
{
    char* LblShape::label() const
    {
        return m_label;
    }

    LblShape::~LblShape()
    {
        delete[] m_label;
    }

    LblShape::LblShape()
    {
        if (m_label != nullptr)
        {
            m_label = nullptr;
        }
    }

    LblShape::LblShape(const char* label)
    {
        int lenght;

        lenght = strlen(label);
        m_label = new char[lenght + 1];
        strcpy(m_label, label);

        m_label[lenght] = '\0';
    }

    void LblShape::getSpecs(std::istream& istr)
    {
        string x;

        getline(istr, x, ',');
        int lenght;
        lenght = x.length();

        if (m_label != nullptr)
        {
            delete[] m_label;
        }

        m_label = new char[lenght + 1];
        strcpy(m_label, x.c_str());
        m_label[lenght] = '\0';
    }
}