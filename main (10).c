/*2020/11/27 0312020066 �㓡���� */
/*���R�ۑ�F9-1*/

#include <stdio.h>

void adjust_point(int* n) {
	if (*n < 0) {
		*n = 0;
		printf("�l���X�V���܂���.\n");
	}
}

int main(void)
{
	int n;

	printf("�����l����͂��Ă�������.");
	scanf("%d", &n);

	adjust_point(&n);

	printf("%d", n);

	return 0;
}

/*
�����l����͂��Ă�������.-100
�l���X�V���܂���.
0
C:\Users\MSLap\source\repos\B���R�ۑ�F9-1\Debug\B���R�ۑ�F9-1.exe (�v���Z�X 9256) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/

/*�����l����͂��Ă�������.0
0
C:\Users\MSLap\source\repos\B���R�ۑ�F9-1\Debug\B���R�ۑ�F9-1.exe (�v���Z�X 16392) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/

/*
�����l����͂��Ă�������.150
150
C:\Users\MSLap\source\repos\B���R�ۑ�F9-1\Debug\B���R�ۑ�F9-1.exe (�v���Z�X 12384) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/