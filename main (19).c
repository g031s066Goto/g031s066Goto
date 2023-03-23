/*2020/11/06 0312020066 後藤健瑠 */
/*自由課題F6-2*/

#include <stdio.h>

int ga;
int gb;

void swap(void)
{
	int t, x, y;

	t = ga;
	ga = gb;
	gb = t;
	x = ga;
	y = gb;
}

int main(void)
{
	int a, b;

	printf("二つの整数を入力してください。\n");
	printf("整数1：");
	scanf("%d", &ga);
	printf("整数2：");
	scanf("%d", &gb);

	a = ga;
	b = gb;

	swap();

	printf("swap関数内での整数1の値＝%d,整数2の値＝%d\n", ga, gb);
	printf("swap関数内での変数gaの値＝%d,変数gbの値＝%d\n", ga, gb);
	printf("main関数内での整数1の値＝%d,整数2の値＝%d\n", a, b);
	printf("main関数内での変数gaの値＝%d,変数gbの値＝%d\n", ga, gb);

	return 0;
}

/*
二つの整数を入力してください。
整数1：85
整数2：9
swap関数内での整数1の値＝9,整数2の値＝85
swap関数内での変数gaの値＝9,変数gbの値＝85
main関数内での整数1の値＝85,整数2の値＝9
main関数内での変数gaの値＝9,変数gbの値＝85

C:\Users\MSLap\source\repos\B自由課題F6-2\Debug\B自由課題F6-2.exe (プロセス 23324) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...


*/
