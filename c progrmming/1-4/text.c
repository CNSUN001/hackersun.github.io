//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdio.h>
//当fahr=0，20.....,300时，分别打印华氏与摄氏温度对照表
//int main()
//{
//	int fahr, celsius;
//	int lower, upper, step;
//	lower = 0; //温度表的下限
//	upper = 300; //温度表的上限
//	step = 20; //步长
//	fahr = lower;
//	while (fahr <= upper) {
//		celsius = 5 * (fahr-32)/ 9;
//		printf("%d\t%d\n", fahr, celsius);
//		fahr = fahr + step;
//
//	}
//
//	return 0;
//}
//
//
//#include <stdio.h>
///* print FahrenheitCelsius
//table
//for fahr = 0, 20, ..., 300; floatingpoint
//version */
//int main()
//{
//	float fahr, celsius;
//	float lower, upper, step;
//	lower = 0; /* lower limit of temperatuire scale */
//	upper = 300; /* upper limit */
//	step = 20; /* step size */
//	fahr = lower;
//	while (fahr <= upper) {
//		celsius = (5.0 / 9.0) * (fahr-32.0);
//		printf("%3.0f %6.1f\n", fahr, celsius);
//		fahr = fahr + step;
//	}
//
//	return 0;
//􀡳􃛑􀋖
//
//
//
//int main()
//{
//	int fahr;
//	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
//		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr-32));
//
//
//	return 0;
//
//}       


#include <stdio.h>
#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */
/* print FahrenheitCelsius
table */
main()
{
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr-32));
}