/*2020/11/06 0312020066 �㓡���� */
/*���R�ۑ�F6-2*/

#include <stdio.h>

int ga;
int gb;

void swap(void)
{
	int t, x, y;

	t = ga;
	ga = gb;
	gb = t;
	x = ga;
	y = gb;
}

int main(void)
{
	int a, b;

	printf("��̐�������͂��Ă��������B\n");
	printf("����1�F");
	scanf("%d", &ga);
	printf("����2�F");
	scanf("%d", &gb);

	a = ga;
	b = gb;

	swap();

	printf("swap�֐����ł̐���1�̒l��%d,����2�̒l��%d\n", ga, gb);
	printf("swap�֐����ł̕ϐ�ga�̒l��%d,�ϐ�gb�̒l��%d\n", ga, gb);
	printf("main�֐����ł̐���1�̒l��%d,����2�̒l��%d\n", a, b);
	printf("main�֐����ł̕ϐ�ga�̒l��%d,�ϐ�gb�̒l��%d\n", ga, gb);

	return 0;
}

/*
��̐�������͂��Ă��������B
����1�F85
����2�F9
swap�֐����ł̐���1�̒l��9,����2�̒l��85
swap�֐����ł̕ϐ�ga�̒l��9,�ϐ�gb�̒l��85
main�֐����ł̐���1�̒l��85,����2�̒l��9
main�֐����ł̕ϐ�ga�̒l��9,�ϐ�gb�̒l��85

C:\Users\MSLap\source\repos\B���R�ۑ�F6-2\Debug\B���R�ۑ�F6-2.exe (�v���Z�X 23324) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...


*/
