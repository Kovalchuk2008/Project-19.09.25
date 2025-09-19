#include <iostream>
#include "Product.h"
using namespace std;




int main()
{
	Product a("Laptop", "Electronics", 75000, 8.5);
	a.Print();

	Product b;
	b.Input();
	b.Print();
}