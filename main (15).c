/*2020/11/20 0312020066 後藤健瑠 */
/*必須課題C8-2*/

#include <stdio.h>

int main(void)
{
	int i;
	char s[3][128];

	printf("3つの文字列を入力してください。\n");

	for (i = 0; i < 3; i++) {
		printf("s[%d]：", i);
		scanf("%s", s[i]);
	}

	printf("文字列をつなげた結果＝");

	for (i = 0; i < 3; i++) {
		printf("%s", s[i]);
	}

	return 0;
}

/*
3つの文字列を入力してください。
s[0]：0312020066
s[1]：後藤
s[2]：健瑠
文字列をつなげた結果＝0312020066後藤健瑠
C:\Users\MSLap\source\repos\B必須課題C8-2\Debug\B必須課題C8-2.exe (プロセス 9664) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/