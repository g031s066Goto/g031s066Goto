/*2020/08/06 0312020066 �㓡���� */
/*���R�ۑ�F3-1*/

#include<stdio.h>

int main(void)
{
	int a, b, c, d;
	double	e, f, g;
	printf("���܂�̂���v�Z\n");
	printf("a:");
	scanf("%d", &a);
	printf("b:");
	scanf("%d", &b);
	c = a / b;
	d = a % b;
	printf("a��b�Ŋ����%d���܂�%d�ł�.\n", c, d);
	printf("�����ɂ��v�Z\n");
	printf("e:");
	scanf("%lf", &e);
	printf("f:");
	scanf("%lf", &f);
	g = e / f;
	printf("e��f�Ŋ����%lf�ł�.", g);
}

/*
���܂�̂���v�Z
a:7
b:4
a��b�Ŋ����1���܂�3�ł�.
�����ɂ��v�Z
e:7
f:4
e��f�Ŋ����1.750000�ł�.
C:\Users\MSLap\source\repos\���R�ۑ�F3\Debug\���R�ۑ�F3.exe (�v���Z�X 23324) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/