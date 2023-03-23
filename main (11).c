/*2020/11/27 0312020066 後藤健瑠 */
/*必須課題C9-1*/

#include <stdio.h>
#define n 5

int main(void)
{
	int array_int[n];
	double array_double[n];

	for (int i = 0; i <= n - 1; i++) {
		printf("array_int[%d] = %p\n", i, &array_int[i]);
	}

	for (int  i = 0; i <= n - 1; i++) {
		printf("array_double[%d] = %p\n", i, &array_double[i]);
	}

	return 0;
}

/*
array_int[0] = 0076FB48
array_int[1] = 0076FB4C
array_int[2] = 0076FB50
array_int[3] = 0076FB54
array_int[4] = 0076FB58
array_double[0] = 0076FB18
array_double[1] = 0076FB20
array_double[2] = 0076FB28
array_double[3] = 0076FB30
array_double[4] = 0076FB38

C:\Users\MSLap\source\repos\B必須課題C9-1\Debug\B必須課題C9-1.exe (プロセス 13356) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...

*/