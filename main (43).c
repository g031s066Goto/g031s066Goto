/*2020/10/30 0312020066 �㓡���� */
/*���R�ۑ�F5-2*/

#include <stdio.h>

int main(void)
{
	int i, j, l;
	int array1[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} };
	int array2[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int answer[4][4];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			answer[i][j] = 0;
			for (l = 0; l < 3; l++) {
				answer[i][j] = answer[i][j] + array1[i][l] * array2[l][j];
			}
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d", answer[i][j]);
		}
		printf("\n");
	}

	return 0;
}

/*
  38  44  50  56
  83  98 113 128
 128 152 176 200
 173 206 239 272

C:\Users\MSLap\source\repos\B���R�ۑ�F5-2\Debug\B���R�ۑ�F5-2.exe (�v���Z�X 13444) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/