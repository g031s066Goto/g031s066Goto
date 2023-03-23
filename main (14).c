/*2020/11/20 0312020066 後藤健瑠 */
/*必須課題C8-1*/

#include <stdio.h>

int main(void)
{
	char c[3];
	int i = 0;

	for (i = 0; i < 2; i++) {
		printf("1文字を入力：");
		scanf("%s", &c[i]);
		printf("16進数＝%x,10進数＝%d\n", c[i], c[i]);
	}

	return 0;
}

/*
1文字を入力：K
16進数=4b,10進数=75
1文字を入力：2
16進数=32,10進数=50

C:\Users\MSLap\source\repos\B必須課題C8-1\Debug\B必須課題C8-1.exe (プロセス 4364) は、コード 3 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/