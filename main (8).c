/*2020/11/27 0312020066 �㓡���� */
/*���R�ۑ�F8-2*/

#include <stdio.h>

int main(void)
{
	char s[] = "abracatabra";
	char k[128];
	int count = 0;

	printf("�������������:");
	scanf("%s", k);

	for (int i = 0; s[i] != '\0'; i++) {
		if (k[i] == s[i]) {
			count++;
		}
	}

	printf("%s�̏o����=%d\n", k, count);

	return 0;
}



/*

*/

