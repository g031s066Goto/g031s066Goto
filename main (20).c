/*2020/11/06 0312020066 �㓡���� */
/*�K�{�ۑ�C6-1*/

#include <stdio.h>

int min(int x, int y)
{
	int m;

	if (x < y) {
		m = x;
	}
	else {
		m = y;
	}

	return m;
}

int main(void)
{
	int a, b;

	printf("��̐�������͂��Ă��������B\n");
	printf("����1�F");
	scanf("%d", &a);
	printf("����2�F");
	scanf("%d", &b);

	printf("���������̒l��%d�ł��B\n", min(a, b));

	return 0;
}

/*
��̐�������͂��Ă��������B
����1�F85
����2�F9
���������̒l��9�ł��B

C:\Users\MSLap\source\repos\B�K�C�ۑ�C6-1\Debug\B�K�C�ۑ�C6-1.exe (�v���Z�X 15480) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/