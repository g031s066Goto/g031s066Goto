/*2020/11/13 0312020066 �㓡���� */
/*�K�{�ۑ�C7-2*/

#include <stdio.h>
#define NUMBER 8

void put_count(void) {
	static int  count = 1;

	printf("put_count:%d���\n", count++);
}

int main(void) {
	int i;

	for (i = 1; i <= NUMBER; i++) {
		put_count();
	}

	return 0;
}

/*
put_count:1���
put_count:2���
put_count:3���
put_count:4���
put_count:5���
put_count:6���
put_count:7���
put_count:8���

C:\Users\MSLap\source\repos\B�K�{�ۑ�C7-2\Debug\B�K�{�ۑ�C7-2.exe (�v���Z�X 4876) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/