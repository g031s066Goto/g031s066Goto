/*2020/12/18 0312020066 �㓡���� */
/*�K�{�ۑ�C12-3*/

#include <stdio.h>

int global_s;

int add_return(int x, int y)
{
	return x + y;
}

void add_void(int x, int y, int *z)
{
	*z = x + y;
}

void add_global(int x, int y)
{
	global_s = x + y;
}

int main(void)
{
	int a, b;
	int local_s = 0;
	int void_s = 0;

	printf("����a:");
	scanf("%d", &a);
	printf("����b:");
	scanf("%d", &b);

	add_void(a, b, &void_s);
	add_global(a, b);
	local_s = global_s;

	printf("add_return�ł̘a��%d\n", add_return(a, b));
	printf("add_void�ł̘a��%d\n", void_s);
	printf("add_global�ł̘a��%d\n", local_s);

	return 0;
}

/*
����a:3
����b:4
add_return�ł̘a��7
add_void�ł̘a��7
add_global�ł̘a��7

C:\Users\MSLap\source\repos\B�K�{�ۑ�C12-3\Debug\B�K�{�ۑ�C12-3.exe (�v���Z�X 10084) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/
