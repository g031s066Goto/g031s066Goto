/*2020/11/06 0312020066 後藤健瑠 */
/*必須課題C6-1*/

#include <stdio.h>

int min(int x, int y)
{
	int m;

	if (x < y) {
		m = x;
	}
	else {
		m = y;
	}

	return m;
}

int main(void)
{
	int a, b;

	printf("二つの整数を入力してください。\n");
	printf("整数1：");
	scanf("%d", &a);
	printf("整数2：");
	scanf("%d", &b);

	printf("小さい方の値は%dです。\n", min(a, b));

	return 0;
}

/*
二つの整数を入力してください。
整数1：85
整数2：9
小さい方の値は9です。

C:\Users\MSLap\source\repos\B必修課題C6-1\Debug\B必修課題C6-1.exe (プロセス 15480) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...

*/