/*2020/11/27 0312020066 後藤健瑠 */
/*必須課題C9-2*/

#include <stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int a = 10;
	int b = 100;
	swap(&a, &b);
	printf("a = %d b = %d \n", a, b);

	return 0;
}

/*
a = 100 b = 10

C:\Users\MSLap\source\repos\B必須課題C9-2\Debug\B必須課題C9-2.exe (プロセス 12312) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...

*/