// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: March 25, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#include "Shape.h"
#include <cstring>

using namespace std;

namespace sdds
{
	ostream& operator<<(ostream& Left, const Shape& Object)
	{
		Object.draw(Left);
		return Left;
	}

	istream& operator>>(istream& Left, Shape& Object)
	{
		Object.getSpecs(Left);
		return Left;
	}
}