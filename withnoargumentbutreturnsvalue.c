// C code for function with no arguments
// but have return value
#include <math.h>
#include <stdio.h>

int sum();
int main()
{
	int num;
	num = sum();
	printf("\nSum of two given values = %d", num);
	return 0;
}

int sum()
{
	int a = 50, b = 80, sum;
	sum = sqrt(a) + sqrt(b);
	return sum;
}
