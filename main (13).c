/*2020/11/20 0312020066 後藤健瑠 */
/*自由課題F8-1*/

#include <stdio.h>

int main(void)
{
	char c;
	int i = 0;

	printf("最初の文字を入力：");
	scanf("%c",&c);

	for (i = 0; i <= 4 ; i++) {
		printf("%c=%#02x=%d\n", c++, c, c);
	}

	return 0;
}