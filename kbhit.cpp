// C++ program to demonstrate use of kbhit()
#include <iostream>
#include <conio.h>

int main()
{
	while (!kbhit())
		cout<<"Press a key";

	return 0;
}
