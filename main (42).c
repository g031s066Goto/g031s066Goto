/*2020/10/30 0312020066 後藤健瑠 */
/*必須課題C5-1*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int array[2][3];

	for (i = 0; i < 2 ; i++) {
		for (j = 0; j < 3; j++) {
			printf("array[%d][%d]:? ", i, j);
			scanf("%d", &array[i][j]);
		}
	}

	printf("代入結果を出力します\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("array[%d][%d]: = %2d ", i, j, array[i][j]);
		}
		printf("\n");
	}

	return 0;
}

/*
array[0][0]:? 5
array[0][1]:? 10
array[0][2]:? 15
array[1][0]:? 20
array[1][1]:? 25
array[1][2]:? 30
代入結果を出力します
array[0][0]: =  5 array[0][1]: = 10 array[0][2]: = 15
array[1][0]: = 20 array[1][1]: = 25 array[1][2]: = 30

C:\Users\MSLap\source\repos\B必須課題C5-1\Debug\B必須課題C5-1.exe (プロセス 20804) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...


*/