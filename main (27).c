/*2020/08/11 0312020066 �㓡���� */
/*�K�{�ۑ�C4-2*/

#include<stdio.h>

int main(void)
{
	double x, y, z, min;
	printf("x����͂��Ă�������\n");
	scanf("%lf", &x);
	printf("y����͂��Ă�������\n");
	scanf("%lf", &y);
	printf("z����͂��Ă�������\n");
	scanf("%lf", &z);

	min = x;

	if (y < min) {
		min = y;
	}
	if (z < min) {
		min = z;
	}
	printf("�ŏ��l��%f�ł�\n", min);

	return 0;
}

/*x����͂��Ă�������
1.8
y����͂��Ă�������
2.4
z����͂��Ă�������
3.6
�ŏ��l��1.800000�ł�

C : \Users\MSLap\source\repos\�K�{�ۑ�C4 - 2\Debug\�K�{�ۑ�C4 - 2.exe(�v���Z�X 21440) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...*/