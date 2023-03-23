/*2020/10/30 0312020066 後藤健瑠 */
/*自由課題F5-1*/

#include <stdio.h>

int main(void)
{
	int i, j, l;
	int tensu1[4][3][1] = { {91,63,78},{67,72,46},{89,34,53},{32,54,34} };
	int tensu2[4][3][1] = { {97,67,82},{73,43,46},{97,56,21},{85,46,35} };
	int sum[4][3][1];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			for (l = 0; l < 1; l++) {
				sum[i][j][l] = tensu1[i][j][l] + tensu2[i][j][l];
			}
		}
	}

	printf("1回目の点数\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			for (l = 0; l < 1; l++) {
				printf("%4d", tensu1[i][j][l]);
			}
		}
		printf("\n");
	}

	printf("2回目の点数\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			for (l = 0; l < 1; l++) {
				printf("%4d", tensu2[i][j][l]);
			}
		}
		printf("\n");
	}

	printf("合計点\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			for (l = 0; l < 1; l++) {
				printf("%4d", sum[i][j][l]);
			}
		}
		printf("\n");
	}

	return 0;
}

/*
1回目の点数
  91  63  78
  67  72  46
  89  34  53
  32  54  34
2回目の点数
  97  67  82
  73  43  46
  97  56  21
  85  46  35
合計点
 188 130 160
 140 115  92
 186  90  74
 117 100  69

C:\Users\MSLap\source\repos\B自由課題F5-1\Debug\B自由課題F5-1.exe (プロセス 14024) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...

*/