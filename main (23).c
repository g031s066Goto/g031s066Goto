/*2020/09/07 0312020066 �㓡���� */
/*�K�{�ۑ�C6-2*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	srand((unsigned int)time(NULL));
	i = 1 + (int)(100.0 * rand() / (RAND_MAX + 1.0));

	if (i >= 1 && i <= 12) {
		printf("��g(%d)", i);
	}
	else if (i >= 13 && i <= 71) {
		printf("���g(%d)", i);
	}
	else if (i >= 72 && i <= 97) {
		printf("���g(%d)", i);
	}
	else if (i >= 98 && i <= 100) {
		printf("��(%d)", i);
	}
	return 0;
}
/*
���g(22)
C:\Users\MSLap\source\repos\�K�{�ۑ�C6-2\Debug\�K�{�ۑ�C6-2.exe (�v���Z�X 3744) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/

/*
���g(80)
C:\Users\MSLap\source\repos\�K�{�ۑ�C6-2\x64\Debug\�K�{�ۑ�C6-2.exe (�v���Z�X 24572) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/