/*2020/10/30 0312020066 �㓡���� */
/*�K�{�ۑ�C5-1*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int array[2][3];

	for (i = 0; i < 2 ; i++) {
		for (j = 0; j < 3; j++) {
			printf("array[%d][%d]:? ", i, j);
			scanf("%d", &array[i][j]);
		}
	}

	printf("������ʂ��o�͂��܂�\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("array[%d][%d]: = %2d ", i, j, array[i][j]);
		}
		printf("\n");
	}

	return 0;
}

/*
array[0][0]:? 5
array[0][1]:? 10
array[0][2]:? 15
array[1][0]:? 20
array[1][1]:? 25
array[1][2]:? 30
������ʂ��o�͂��܂�
array[0][0]: =  5 array[0][1]: = 10 array[0][2]: = 15
array[1][0]: = 20 array[1][1]: = 25 array[1][2]: = 30

C:\Users\MSLap\source\repos\B�K�{�ۑ�C5-1\Debug\B�K�{�ۑ�C5-1.exe (�v���Z�X 20804) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...


*/