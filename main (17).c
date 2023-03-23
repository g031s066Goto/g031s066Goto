/*2020/11/13 0312020066 �㓡���� */
/*���R�ۑ�F7-2*/

#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]) {
	int i, j, k;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			c[i][j] = 0;
			for (k = 0; k < 3; k++) {
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
}

int main(void) {
	int i, j;
	int mx[4][3] = { {1,3,5}, {6,8,4}, {9,1,5}, {7,6,4} };
	int my[3][4] = { {2,5,8,1}, {9,5,3,1}, {4,5,6,8} };
	int mz[4][4];

	mat_mul(mx, my, mz);

	printf("�s��̐ς̌v�Z�����܂���\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d", mz[i][j]);
		}
		printf("\n");
	}

	return 0;
}

/*
�s��̐ς̌v�Z�����܂���
  49  45  47  44
 100  90  96  46
  47  75 105  50
  84  85  98  45

C:\Users\MSLap\source\repos\B���R�ۑ�F7-2\Debug\B���R�ۑ�F7-2.exe (�v���Z�X 2944) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/