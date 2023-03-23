/*2020/11/27 0312020066 Œã“¡Œ’—Ú */
/*©—R‰Û‘èF8-2*/

#include <stdio.h>

int main(void)
{
	char s[] = "abracatabra";
	char k[128];
	int count = 0;

	printf("ŒŸõ•¶š‚ğ“ü—Í:");
	scanf("%s", k);

	for (int i = 0; s[i] != '\0'; i++) {
		if (k[i] == s[i]) {
			count++;
		}
	}

	printf("%s‚ÌoŒ»‰ñ”=%d\n", k, count);

	return 0;
}



/*

*/

