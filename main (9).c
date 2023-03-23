/*2020/11/27 0312020066 後藤健瑠 */
/*自由課題F9-2*/

#include <stdio.h>

void decrement_date(int *y, int *m, int *d) {
	if (*m == 2 || *m == 4 || *m == 6 || *m == 9 || *m == 11) {
		if (*d == 1) {
			*d = 31;
			*m = *m - 1;
		}
		else
			*d = *d - 1;
	}
	else {
		if (*d == 1) {
			if (*m == 1) {
				*d = 31;
				*m = 12;
				*y = *y - 1;
			}
			else if (*m == 3) {
				*m = 2;

				if ((((*y % 4 == 0) && (*y % 100 != 0)) || (*y % 400 == 0)))
					*d = 29;
				else
					*d = 28;
			}
			else {
				*d = 30;
				*m = *m - 1;
			}
		}
		else
			*d = *d - 1;
	}
}

void increment_date(int *y, int *m, int *d) {
	if (*m == 2) {
		if (1 <= *d && *d <= 27)
			*d = *d + 1;

		if ((((*y % 4 == 0) && (*y % 100 != 0)) || (*y % 400 == 0))) {
			if (*d == 29) {
				*m = 3;
				*d = 1;
			}
			if (*d == 28)
				*d = 29;
		}
		if (*d == 28) {
			*m = 3;
			*d = 1;
		}
	}
	else if (*m == 4 || *m == 6 || *m == 9 || *m == 11) {
		if (*d == 30) {
			*d = 1;
			*m = *m + 1;
		}
		else
			*d = *d + 1;
	}
	else {
		if (*d == 31) {
			if (*m == 12) {
				*d = 1;
				*m = 1;
				*y = *y + 1;
			}
			else {
				*d = 1;
				*m = *m + 1;
			}
		}
		else
			*d = *d + 1;
	}
}

int main(void)
{
	int y, m, d;
	int s;

	printf("日付を入力してください.\n");
	printf("年："); 
	scanf("%d", &y);
	printf("月："); 
	scanf("%d", &m);
	printf("日："); 
	scanf("%d", &d);
	printf("\n");

	printf("%d年%d月%d日が入力されました.\n", y, m, d);
	printf("\n");

	printf("次の日に更新する場合は 1\n");
	printf("前の日に更新する場合は 0 を入力してください.\n");
	printf("\n");

	printf("1 or 0: ");
	scanf("%d", &s);
	printf("\n");

	if (s == 1) {
		increment_date(&y, &m, &d);
		printf("日付を%d年%d月%d日に更新しました.\n", y, m, d);
	}
	if (s == 0) {
		decrement_date(&y, &m, &d);
		printf("日付を%d年%d月%d日に更新しました.\n", y, m, d);
	}

	return 0;
}

/*
日付を入力してください.
年：2021
月：1
日：1

2021年1月1日が入力されました.

次の日に更新する場合は1
前の日に更新する場合は0を入力してください.

1 or 0:0

日付を2020年12月31日に更新しました.

C:\Users\MSLap\source\repos\B自由課題F9-2\Debug\B自由課題F9-2.exe (プロセス 12556) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/