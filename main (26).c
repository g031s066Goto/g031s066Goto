/*2020/08/20 0312020066 後藤健瑠 */
/*必須課題C5-1*/

#include <stdio.h>

int main(void)
{
	int i, x;

	printf("xを入力してください：");
	scanf("%d", &x);

	i = 2;

	while (i <= 2 * x) {
		printf("%d\n", i);
		i = i + 2;
	}

}

/*
xを入力してください：4
2
4
6
8

C:\Users\MSLap\source\repos\必須課題C5-1\Debug\必須課題C5-1.exe (プロセス 6372) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/