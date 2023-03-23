/*2020/12/04 0312020066 後藤健瑠 */
/*必須課題C10-1*/

#include <stdio.h>
#define n 5

int main(void)
{
	int array_int[n];
	double array_double[n];

	int *p_int = array_int;
	double *p_double = array_double;

	for (int i = 0; i <= n - 1; i++) {
		printf("P_int+%d = %p\n", i, &p_int[i]);
	}

	for (int i = 0; i <= n - 1; i++) {
		printf("P_double+%d = %p\n", i, &p_double[i]);
	}

	return 0;
}

/*
P_int+0 = 008FFDA0
P_int+1 = 008FFDA4
P_int+2 = 008FFDA8
P_int+3 = 008FFDAC
P_int+4 = 008FFDB0
P_double+0 = 008FFD70
P_double+1 = 008FFD78
P_double+2 = 008FFD80
P_double+3 = 008FFD88
P_double+4 = 008FFD90

C:\Users\MSLap\source\repos\B必須課題C10-1\Debug\B必須課題C10-1.exe (プロセス 9300) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/