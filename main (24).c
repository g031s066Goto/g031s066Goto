/*2020/09/07 0312020066 後藤健瑠 */
/*必須課題C6-1*/

#include <stdio.h>
double triangle(double a, double b)
{
	double c;

	c = a * b / 2;

	return c;
}

int main(void)
{
	double x, y, s;

	printf("底辺xを入力してください：");
	scanf("%lf", &x);

	printf("高さyを入力してください：");
	scanf("%lf", &y);

	s = triangle(x, y);

	printf("三角形の面積は,%fです.\n", s);

	return 0;
}


/*
底辺xを入力してください：3
高さyを入力してください：4
三角形の面積は,6.000000です.

C:\Users\MSLap\source\repos\必須課題C6-1\Debug\必須課題C6-1.exe (プロセス 23984) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/
