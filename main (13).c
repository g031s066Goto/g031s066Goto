/*2020/11/20 0312020066 Œã“¡Œ’—Ú */
/*©—R‰Û‘èF8-1*/

#include <stdio.h>

int main(void)
{
	char c;
	int i = 0;

	printf("Å‰‚Ì•¶š‚ğ“ü—ÍF");
	scanf("%c",&c);

	for (i = 0; i <= 4 ; i++) {
		printf("%c=%#02x=%d\n", c++, c, c);
	}

	return 0;
}