/*2020/11/27 0312020066 後藤健瑠 */
/*自由課題F8-2*/

#include <stdio.h>

int main(void)
{
	char s[] = "abracatabra";
	char k[128];
	int count = 0;

	printf("検索文字を入力:");
	scanf("%s", k);

	for (int i = 0; s[i] != '\0'; i++) {
		if (k[i] == s[i]) {
			count++;
		}
	}

	printf("%sの出現回数=%d\n", k, count);

	return 0;
}



/*

*/

