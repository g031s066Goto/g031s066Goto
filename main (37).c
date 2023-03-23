/*2020/08/06 0312020066 後藤健瑠 */
/*自由課題F3-1*/

#include<stdio.h>

int main(void)
{
	int a, b, c, d;
	double	e, f, g;
	printf("あまりのある計算\n");
	printf("a:");
	scanf("%d", &a);
	printf("b:");
	scanf("%d", &b);
	c = a / b;
	d = a % b;
	printf("aをbで割ると%dあまり%dです.\n", c, d);
	printf("小数による計算\n");
	printf("e:");
	scanf("%lf", &e);
	printf("f:");
	scanf("%lf", &f);
	g = e / f;
	printf("eをfで割ると%lfです.", g);
}

/*
あまりのある計算
a:7
b:4
aをbで割ると1あまり3です.
小数による計算
e:7
f:4
eをfで割ると1.750000です.
C:\Users\MSLap\source\repos\自由課題F3\Debug\自由課題F3.exe (プロセス 23324) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/