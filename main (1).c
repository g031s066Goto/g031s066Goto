/*2020/12/18 0312020066 �㓡���� */
/*�K�{�ۑ�C12-2*/

#include <stdio.h>
#define R_NUM 3
#define C_NUM 5

int main(void)
{
	int i, j;
	int a[R_NUM][C_NUM] = { {1,3,5,7,9},{11,13,15,17,19},{21,23,25,27,29} };

	printf("���̍s��\n");
	for (i = 0; i <= R_NUM - 1; i++) {
		for (j = 0; j <= C_NUM - 1; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

	printf("�s�����ւ�����\n");
	for (i = 0; i <= C_NUM - 1; i++) {
		for (j = 0; j <= R_NUM - 1; j++) {
			printf("%4d", a[j][i]);
		}
		printf("\n");
	}

	return 0;
}

/*
���̍s��
   1   3   5   7   9
  11  13  15  17  19
  21  23  25  27  29
�s�����ւ�����
   1  11  21
   3  13  23
   5  15  25
   7  17  27
   9  19  29

C:\Users\MSLap\source\repos\B�K�{�ۑ�C12-2\Debug\B�K�{�ۑ�C12-2.exe (�v���Z�X 11996) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/