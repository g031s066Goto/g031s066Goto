/*2020/11/05 0312020066 �㓡���� */
/*���R�ۑ�F6-1*/

#include <stdio.h>

double area(double x, double y)
{
	return x * y;
}

double volume(double s, double h)
{
	return s * h;
}

int main(void)
{
	double a, b, c;

	printf("���̒����F");
	scanf("%lf", &a);
	printf("�c�̒����F");
	scanf("%lf", &b);
	printf("�����F");
	scanf("%lf", &c);

	printf("�̐ρ�%.2f\n", volume(area(a,b), c));

	return 0;
}



/*
���̒����F3.1
�c�̒����F4.2
�����F5.0
�̐ρ�65.10

C:\Users\MSLap\source\repos\B���R�ۑ�F6-1\Debug\B���R�ۑ�F6-1.exe (�v���Z�X 18084) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...


*/