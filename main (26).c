/*2020/08/20 0312020066 �㓡���� */
/*�K�{�ۑ�C5-1*/

#include <stdio.h>

int main(void)
{
	int i, x;

	printf("x����͂��Ă��������F");
	scanf("%d", &x);

	i = 2;

	while (i <= 2 * x) {
		printf("%d\n", i);
		i = i + 2;
	}

}

/*
x����͂��Ă��������F4
2
4
6
8

C:\Users\MSLap\source\repos\�K�{�ۑ�C5-1\Debug\�K�{�ۑ�C5-1.exe (�v���Z�X 6372) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/