// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: March 25, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_LBLSHAPE_H
#define SDDS_LBLSHAPE_H

#include "Shape.h"

#include <iostream>

namespace sdds
{
    class LblShape : public Shape
    {
        char* m_label = nullptr;

        protected:
            char* label() const;
        public:
            LblShape();
            LblShape(const char*);
            LblShape(const LblShape&) = delete;

            void operator=(const LblShape&) = delete;
            void getSpecs(std::istream&);

            virtual void draw(std::ostream&) const = 0;
            virtual ~LblShape();
    };
}
#endif //!SDDS_LBLSHAPE_H