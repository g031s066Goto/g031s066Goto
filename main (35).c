/*2020/08/20 0312020066 後藤健瑠 */
/*自由課題F5-1*/

#include <stdio.h>

int main(void)
{
	int limit, n, sum;

	printf("limitを入力してください：");
	scanf("%d", &limit);

	sum = 0;

	while (sum <= limit) {
		printf("nを入力してください：");
		scanf("%d", &n);
		sum = sum + n;
		printf("sumは%d\n", sum);
	}
	printf("sumがlimitの%dを超えたので終了", limit);

}

/*
limitを入力してください：8
nを入力してください：1
sumは1
nを入力してください：2
sumは3
nを入力してください：3
sumは6
nを入力してください：4
sumは10
sumがlimitの8を超えたので終了
C:\Users\MSLap\source\repos\自由課題F5-1\Debug\自由課題F5-1.exe (プロセス 9108) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/