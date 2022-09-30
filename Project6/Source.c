#include<stdio.h>
#include<locale.h>
#include<math.h>
void main()
{
	setlocale(LC_ALL, "RU");
	double x, y, z, B;
	x = 16.55 * pow(10, -3);
	y = -2.75;
	z = 0.15;
	B = sqrt(10 * (pow(x, 1.0/ 3) + pow(x, y + 2))) * (fabs(x - y)- pow(asin(z), 2));
	printf("Ответ: %f", B);
}