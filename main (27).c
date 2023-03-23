/*2020/08/11 0312020066 後藤健瑠 */
/*必須課題C4-2*/

#include<stdio.h>

int main(void)
{
	double x, y, z, min;
	printf("xを入力してください\n");
	scanf("%lf", &x);
	printf("yを入力してください\n");
	scanf("%lf", &y);
	printf("zを入力してください\n");
	scanf("%lf", &z);

	min = x;

	if (y < min) {
		min = y;
	}
	if (z < min) {
		min = z;
	}
	printf("最小値は%fです\n", min);

	return 0;
}

/*xを入力してください
1.8
yを入力してください
2.4
zを入力してください
3.6
最小値は1.800000です

C : \Users\MSLap\source\repos\必須課題C4 - 2\Debug\必須課題C4 - 2.exe(プロセス 21440) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...*/