/*2020/12/18 0312020066 後藤健瑠 */
/*必須課題C12-3*/

#include <stdio.h>

int global_s;

int add_return(int x, int y)
{
	return x + y;
}

void add_void(int x, int y, int *z)
{
	*z = x + y;
}

void add_global(int x, int y)
{
	global_s = x + y;
}

int main(void)
{
	int a, b;
	int local_s = 0;
	int void_s = 0;

	printf("整数a:");
	scanf("%d", &a);
	printf("整数b:");
	scanf("%d", &b);

	add_void(a, b, &void_s);
	add_global(a, b);
	local_s = global_s;

	printf("add_returnでの和＝%d\n", add_return(a, b));
	printf("add_voidでの和＝%d\n", void_s);
	printf("add_globalでの和＝%d\n", local_s);

	return 0;
}

/*
整数a:3
整数b:4
add_returnでの和＝7
add_voidでの和＝7
add_globalでの和＝7

C:\Users\MSLap\source\repos\B必須課題C12-3\Debug\B必須課題C12-3.exe (プロセス 10084) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/
