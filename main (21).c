/*2020/11/06 0312020066 �㓡���� */
/*�K�{�ۑ�C6-2*/

#include <stdio.h>

int ga;
int gb;

void swap(void)
{
	int a;

	a = ga;
	ga = gb;
	gb = a;
}

int main(void)
{
	printf("��̐�������͂��Ă��������B\n");
	printf("����1�F");
	scanf("%d", &ga);
	printf("����2�F");
	scanf("%d", &gb);
	swap();
	printf("������̐���1�̒l��%d,����2�̒l��%d", ga,gb);

	return 0;
}

/*
��̐�������͂��Ă��������B
����1�F85
����2�F9
������̐���1�̒l��9,����2�̒l��85
C:\Users\MSLap\source\repos\B�K�{�ۑ�C6-2\Debug\B�K�{�ۑ�C6-2.exe (�v���Z�X 6364) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/
