#include "Customer.h"
#include <stdlib.h>     /* srand, rand */

Customer::Customer()
{
	name = "Customer";
	int randouNum = rand() % 10 + 1;
	char integer_string;
	strcat(name, sprintf(integer_string, "%d", randomNum));
	creditCardNumber = rand() % 9999999999999999 + 1;
}
