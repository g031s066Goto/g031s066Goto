/*2020/09/07 0312020066 後藤健瑠 */
/*必須課題C6-2*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	srand((unsigned int)time(NULL));
	i = 1 + (int)(100.0 * rand() / (RAND_MAX + 1.0));

	if (i >= 1 && i <= 12) {
		printf("大吉(%d)", i);
	}
	else if (i >= 13 && i <= 71) {
		printf("中吉(%d)", i);
	}
	else if (i >= 72 && i <= 97) {
		printf("小吉(%d)", i);
	}
	else if (i >= 98 && i <= 100) {
		printf("凶(%d)", i);
	}
	return 0;
}
/*
中吉(22)
C:\Users\MSLap\source\repos\必須課題C6-2\Debug\必須課題C6-2.exe (プロセス 3744) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/

/*
小吉(80)
C:\Users\MSLap\source\repos\必須課題C6-2\x64\Debug\必須課題C6-2.exe (プロセス 24572) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/