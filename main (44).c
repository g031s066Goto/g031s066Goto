/*2020/10/30 0312020066 �㓡���� */
/*�K�{�ۑ�C5-2*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int kuku[9][9];

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			kuku[i][j] = (i+1) * (j+1);
		}
	}

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			printf("%3d", kuku[i][j]);
		}
		printf("\n");
	}

	return 0;
}

/*
  1  2  3  4  5  6  7  8  9
  2  4  6  8 10 12 14 16 18
  3  6  9 12 15 18 21 24 27
  4  8 12 16 20 24 28 32 36
  5 10 15 20 25 30 35 40 45
  6 12 18 24 30 36 42 48 54
  7 14 21 28 35 42 49 56 63
  8 16 24 32 40 48 56 64 72
  9 18 27 36 45 54 63 72 81

C:\Users\MSLap\source\repos\B�K�{�ۑ�C5-2\Debug\B�K�{�ۑ�C5-2.exe (�v���Z�X 3280) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/