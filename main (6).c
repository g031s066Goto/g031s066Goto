/*2020/11/13 0312020066 後藤健瑠 */
/*自由課題F7-1*/

#include <stdio.h>
#define NUMBER 5

void intary_rcpy(int v1[], const int v2[], int n) {
	int i;

	for (i = 0; i < n; i++) {
		v1[n - i - 1] = v2[i];
	}
}

int main(void) {
	int i;
	int x1[NUMBER];
	int x2[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("x1[%d]:", i);
		scanf("%d", &x1[i]);
	}

	printf("反転をコピーしました\n");

	intary_rcpy(x2, x1, NUMBER);

	for (i = 0; i < NUMBER; i++) {
		printf("x2[%d] = %d\n", i, x2[i]);
	}

	return 0;
}

/*
x1[0]:11
x1[1]:31
x1[2]:51
x1[3]:71
x1[4]:91
反転をコピーしました
x2[0] = 91
x2[1] = 71
x2[2] = 51
x2[3] = 31
x2[4] = 11

C:\Users\MSLap\source\repos\B自由課題F7-1\Debug\B自由課題F7-1.exe (プロセス 17960) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...

*/