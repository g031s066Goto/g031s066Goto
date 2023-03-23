/*2020/11/27 0312020066 後藤健瑠 */
/*自由課題F9-1*/

#include <stdio.h>

void adjust_point(int* n) {
	if (*n < 0) {
		*n = 0;
		printf("値を更新しました.\n");
	}
}

int main(void)
{
	int n;

	printf("整数値を入力してください.");
	scanf("%d", &n);

	adjust_point(&n);

	printf("%d", n);

	return 0;
}

/*
整数値を入力してください.-100
値を更新しました.
0
C:\Users\MSLap\source\repos\B自由課題F9-1\Debug\B自由課題F9-1.exe (プロセス 9256) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/

/*整数値を入力してください.0
0
C:\Users\MSLap\source\repos\B自由課題F9-1\Debug\B自由課題F9-1.exe (プロセス 16392) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/

/*
整数値を入力してください.150
150
C:\Users\MSLap\source\repos\B自由課題F9-1\Debug\B自由課題F9-1.exe (プロセス 12384) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/