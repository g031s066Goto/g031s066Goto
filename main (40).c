/*2020/11/05 0312020066 後藤健瑠 */
/*自由課題F6-1*/

#include <stdio.h>

double area(double x, double y)
{
	return x * y;
}

double volume(double s, double h)
{
	return s * h;
}

int main(void)
{
	double a, b, c;

	printf("横の長さ：");
	scanf("%lf", &a);
	printf("縦の長さ：");
	scanf("%lf", &b);
	printf("高さ：");
	scanf("%lf", &c);

	printf("体積＝%.2f\n", volume(area(a,b), c));

	return 0;
}



/*
横の長さ：3.1
縦の長さ：4.2
高さ：5.0
体積＝65.10

C:\Users\MSLap\source\repos\B自由課題F6-1\Debug\B自由課題F6-1.exe (プロセス 18084) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...


*/