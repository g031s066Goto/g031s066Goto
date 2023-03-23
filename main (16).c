/*2020/11/13 0312020066 後藤健瑠 */
/*必須課題C7-2*/

#include <stdio.h>
#define NUMBER 8

void put_count(void) {
	static int  count = 1;

	printf("put_count:%d回目\n", count++);
}

int main(void) {
	int i;

	for (i = 1; i <= NUMBER; i++) {
		put_count();
	}

	return 0;
}

/*
put_count:1回目
put_count:2回目
put_count:3回目
put_count:4回目
put_count:5回目
put_count:6回目
put_count:7回目
put_count:8回目

C:\Users\MSLap\source\repos\B必須課題C7-2\Debug\B必須課題C7-2.exe (プロセス 4876) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...

*/