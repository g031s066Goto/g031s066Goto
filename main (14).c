/*2020/11/20 0312020066 �㓡���� */
/*�K�{�ۑ�C8-1*/

#include <stdio.h>

int main(void)
{
	char c[3];
	int i = 0;

	for (i = 0; i < 2; i++) {
		printf("1��������́F");
		scanf("%s", &c[i]);
		printf("16�i����%x,10�i����%d\n", c[i], c[i]);
	}

	return 0;
}

/*
1��������́FK
16�i��=4b,10�i��=75
1��������́F2
16�i��=32,10�i��=50

C:\Users\MSLap\source\repos\B�K�{�ۑ�C8-1\Debug\B�K�{�ۑ�C8-1.exe (�v���Z�X 4364) �́A�R�[�h 3 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/