/*2020/12/11 0312020066 �㓡���� */
/*�K�{�ۑ�C11-1*/

#include <stdio.h>

#define NAME_LEN 64

struct student {
	char name[NAME_LEN];
	int height;
	double weight;
	long schols;
};

int main(void)
{
	struct student takao = { "Takao", 173, 86.2 };

	printf("���@���@���@%p\n", &takao.name);
	printf("�g�@���@���@%p\n", &takao.height);
	printf("�́@�d�@���@%p\n", &takao.weight);
	printf("���w���@���@%p\n", &takao.schols);

	return 0;
}

/*
���@���@���@0019FE18
�g�@���@���@0019FE58
�́@�d�@���@0019FE60
���w���@���@0019FE68

C:\Users\MSLap\source\repos\B�K�{�ۑ�C11-1\Debug\B�K�{�ۑ�C11-1.exe (�v���Z�X 6604) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/