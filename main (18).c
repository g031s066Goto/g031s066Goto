/*2020/11/13 0312020066 �㓡���� */
/*�K�{�ۑ�C7-1*/

#include <stdio.h>
#define NUMBER 3

int min_of(int v[], int n) {
	int i;
	int min = v[0];

	for (i = 1; i < n; i++) {
		if (v[i] < min) {
			min = v[i];
		}
	}

	return min;
}

int main(void) {
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int min_e, min_m;

	printf("%d�l�̓_������͂��Ă�������\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d]�p��F", i + 1);
		scanf("%d", &eng[i]);
		printf("   ���w�F");
		scanf("%d", &mat[i]);
	}
	min_e = min_of(eng, NUMBER);
	min_m = min_of(mat, NUMBER);

	printf("�p��̍Œ�_��%d\n", min_e);
	printf("���w�̍Œ�_��%d\n", min_m);

	return 0;
}

/*
3�l�̓_������͂��Ă�������
[1]�p��F21
   ���w�F25
[2]�p��F37
   ���w�F11
[3]�p��F15
   ���w�F50
�p��̍Œ�_��15
���w�̍Œ�_��11

C:\Users\MSLap\source\repos\B�K�{�ۑ�C7-1\Debug\B�K�{�ۑ�C7-1.exe (�v���Z�X 15532) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/