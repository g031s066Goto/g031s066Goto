/*2020/12/04 0312020066 �㓡���� */
/*�K�{�ۑ�C10-2*/

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

	printf("������P�F");
	scanf("%s", s1);
	printf("������Q�F");
	scanf("%s", s2);

	str_connect_a(con_a, s1, s2);
	str_connect_p(con_p, s1, s2);

	printf("�z��ł̘A��������%s", con_a);
	printf("�|�C���^�ł̘A��������%s", con_p);

	return 0;
}



/*
������P�F0312020066
������Q�F�㓡����
�z��ł̘A��������0312020066�㓡����
�|�C���^�ł̘A��������0312020066�㓡����


C:\Users\MSLap\source\repos\B�K�{�ۑ�C10-2\Debug\B�K�{�ۑ�C10-2.exe (�v���Z�X 16584) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/