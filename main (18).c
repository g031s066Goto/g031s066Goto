/*2020/11/13 0312020066 後藤健瑠 */
/*必須課題C7-1*/

#include <stdio.h>
#define NUMBER 3

int min_of(int v[], int n) {
	int i;
	int min = v[0];

	for (i = 1; i < n; i++) {
		if (v[i] < min) {
			min = v[i];
		}
	}

	return min;
}

int main(void) {
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int min_e, min_m;

	printf("%d人の点数を入力してください\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d]英語：", i + 1);
		scanf("%d", &eng[i]);
		printf("   数学：");
		scanf("%d", &mat[i]);
	}
	min_e = min_of(eng, NUMBER);
	min_m = min_of(mat, NUMBER);

	printf("英語の最低点＝%d\n", min_e);
	printf("数学の最低点＝%d\n", min_m);

	return 0;
}

/*
3人の点数を入力してください
[1]英語：21
   数学：25
[2]英語：37
   数学：11
[3]英語：15
   数学：50
英語の最低点＝15
数学の最低点＝11

C:\Users\MSLap\source\repos\B必須課題C7-1\Debug\B必須課題C7-1.exe (プロセス 15532) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...

*/