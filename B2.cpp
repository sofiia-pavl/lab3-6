#include "B2.h"

B2::B2()
{
	b2 = 0;
}

B2::B2(int a)
{
	b2 = a;
}

void B2::showB2()
{
	cout << "class B2:" << endl;
	cout << "showB2()" << endl
		<< "B2::b2 = " << b2 << endl << endl;

}