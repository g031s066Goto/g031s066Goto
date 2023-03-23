/*2020/12/04 0312020066 後藤健瑠 */
/*必須課題C10-2*/

#include <stdio.h>
#include <string.h>

void str_connect_a(char con[], char str1[], char str2[]) {
	sprintf(con, "%s%s\n", str1, str2);
}

void str_connect_p(char *con, char *str1, char *str2) {
	sprintf(con, "%s%s\n", str1, str2);
}

int main(void)
{
	char s1[60];
	char s2[60];

	char con_a[128];
	char con_p[128];

	printf("文字列１：");
	scanf("%s", s1);
	printf("文字列２：");
	scanf("%s", s2);

	str_connect_a(con_a, s1, s2);
	str_connect_p(con_p, s1, s2);

	printf("配列での連結文字列＝%s", con_a);
	printf("ポインタでの連結文字列＝%s", con_p);

	return 0;
}



/*
文字列１：0312020066
文字列２：後藤健瑠
配列での連結文字列＝0312020066後藤健瑠
ポインタでの連結文字列＝0312020066後藤健瑠


C:\Users\MSLap\source\repos\B必須課題C10-2\Debug\B必須課題C10-2.exe (プロセス 16584) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/