/*2020/07/30 0312020066 �㓡���� */
/*�K�{�ۑ�C2-2*/

#include<stdio.h>

int main(void)
{
	int x, y, z;
	printf("x����͂��Ă�������");
	scanf("%d", &x);
	printf("y����͂��Ă�������");
	scanf("%d", &y);
	printf("�ύX�O\tx=%d", x);
	printf("y=%d\n", y);
	z = x;
	x = y;
	y = z;
	printf("�ύX��\tx=%d", x);
	printf("y=%d", y);
}

/*
x����͂��Ă�������2
y����͂��Ă�������3
�ύX�O  x=2y=3
�ύX��  x=3y=2
C:\Users\MSLap\source\repos\�K�{�ۑ�C2-2\Debug\�K�{�ۑ�C2-2.exe (�v���Z�X 19280) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/

/*
x����͂��Ă�������4
y����͂��Ă�������1
�ύX�O  x=4y=1
�ύX��  x=1y=4
C:\Users\MSLap\source\repos\�K�{�ۑ�C2-2\Debug\�K�{�ۑ�C2-2.exe (�v���Z�X 14512) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/