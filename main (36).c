/*2020/08/11 0312020066 後藤健瑠 */
/*自由課題F4-1*/

#include<stdio.h>

int main(void)
{
	int t;
	printf("点数を入力してください\n");
	scanf("%d", &t);
	if (t > 89) {
		printf("評価はSです.\n");
	}
	else if (t > 79) {
		printf("評価はAです.\n");
	}
	else if (t > 69) {
		printf("評価はBです.\n");
	}
	else if (t > 59) {
		printf("評価はCです.\n");
	}
	else {
		printf("評価はDです.\n");
	}
}

/*
点数を入力してください
91
評価はSです.

C:\Users\MSLap\source\repos\自由課題F4\Debug\自由課題F4.exe (プロセス 24908) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/

/*
点数を入力してください
68
評価はCです.

C:\Users\MSLap\source\repos\自由課題F4\Debug\自由課題F4.exe (プロセス 22716) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/