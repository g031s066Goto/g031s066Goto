/*2020/11/06 0312020066 後藤健瑠 */
/*必須課題C6-2*/

#include <stdio.h>

int ga;
int gb;

void swap(void)
{
	int a;

	a = ga;
	ga = gb;
	gb = a;
}

int main(void)
{
	printf("二つの整数を入力してください。\n");
	printf("整数1：");
	scanf("%d", &ga);
	printf("整数2：");
	scanf("%d", &gb);
	swap();
	printf("交換後の整数1の値＝%d,整数2の値＝%d", ga,gb);

	return 0;
}

/*
二つの整数を入力してください。
整数1：85
整数2：9
交換後の整数1の値＝9,整数2の値＝85
C:\Users\MSLap\source\repos\B必須課題C6-2\Debug\B必須課題C6-2.exe (プロセス 6364) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...

*/
