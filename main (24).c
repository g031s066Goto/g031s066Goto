/*2020/09/07 0312020066 �㓡���� */
/*�K�{�ۑ�C6-1*/

#include <stdio.h>
double triangle(double a, double b)
{
	double c;

	c = a * b / 2;

	return c;
}

int main(void)
{
	double x, y, s;

	printf("���x����͂��Ă��������F");
	scanf("%lf", &x);

	printf("����y����͂��Ă��������F");
	scanf("%lf", &y);

	s = triangle(x, y);

	printf("�O�p�`�̖ʐς�,%f�ł�.\n", s);

	return 0;
}


/*
���x����͂��Ă��������F3
����y����͂��Ă��������F4
�O�p�`�̖ʐς�,6.000000�ł�.

C:\Users\MSLap\source\repos\�K�{�ۑ�C6-1\Debug\�K�{�ۑ�C6-1.exe (�v���Z�X 23984) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/
