/*2020/12/18 0312020066 後藤健瑠 */
/*必須課題C12-2*/

#include <stdio.h>
#define R_NUM 3
#define C_NUM 5

int main(void)
{
	int i, j;
	int a[R_NUM][C_NUM] = { {1,3,5,7,9},{11,13,15,17,19},{21,23,25,27,29} };

	printf("元の行列\n");
	for (i = 0; i <= R_NUM - 1; i++) {
		for (j = 0; j <= C_NUM - 1; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

	printf("行列入れ替え結果\n");
	for (i = 0; i <= C_NUM - 1; i++) {
		for (j = 0; j <= R_NUM - 1; j++) {
			printf("%4d", a[j][i]);
		}
		printf("\n");
	}

	return 0;
}

/*
元の行列
   1   3   5   7   9
  11  13  15  17  19
  21  23  25  27  29
行列入れ替え結果
   1  11  21
   3  13  23
   5  15  25
   7  17  27
   9  19  29

C:\Users\MSLap\source\repos\B必須課題C12-2\Debug\B必須課題C12-2.exe (プロセス 11996) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/