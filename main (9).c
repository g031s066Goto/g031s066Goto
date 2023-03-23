/*2020/11/27 0312020066 �㓡���� */
/*���R�ۑ�F9-2*/

#include <stdio.h>

void decrement_date(int *y, int *m, int *d) {
	if (*m == 2 || *m == 4 || *m == 6 || *m == 9 || *m == 11) {
		if (*d == 1) {
			*d = 31;
			*m = *m - 1;
		}
		else
			*d = *d - 1;
	}
	else {
		if (*d == 1) {
			if (*m == 1) {
				*d = 31;
				*m = 12;
				*y = *y - 1;
			}
			else if (*m == 3) {
				*m = 2;

				if ((((*y % 4 == 0) && (*y % 100 != 0)) || (*y % 400 == 0)))
					*d = 29;
				else
					*d = 28;
			}
			else {
				*d = 30;
				*m = *m - 1;
			}
		}
		else
			*d = *d - 1;
	}
}

void increment_date(int *y, int *m, int *d) {
	if (*m == 2) {
		if (1 <= *d && *d <= 27)
			*d = *d + 1;

		if ((((*y % 4 == 0) && (*y % 100 != 0)) || (*y % 400 == 0))) {
			if (*d == 29) {
				*m = 3;
				*d = 1;
			}
			if (*d == 28)
				*d = 29;
		}
		if (*d == 28) {
			*m = 3;
			*d = 1;
		}
	}
	else if (*m == 4 || *m == 6 || *m == 9 || *m == 11) {
		if (*d == 30) {
			*d = 1;
			*m = *m + 1;
		}
		else
			*d = *d + 1;
	}
	else {
		if (*d == 31) {
			if (*m == 12) {
				*d = 1;
				*m = 1;
				*y = *y + 1;
			}
			else {
				*d = 1;
				*m = *m + 1;
			}
		}
		else
			*d = *d + 1;
	}
}

int main(void)
{
	int y, m, d;
	int s;

	printf("���t����͂��Ă�������.\n");
	printf("�N�F"); 
	scanf("%d", &y);
	printf("���F"); 
	scanf("%d", &m);
	printf("���F"); 
	scanf("%d", &d);
	printf("\n");

	printf("%d�N%d��%d�������͂���܂���.\n", y, m, d);
	printf("\n");

	printf("���̓��ɍX�V����ꍇ�� 1\n");
	printf("�O�̓��ɍX�V����ꍇ�� 0 ����͂��Ă�������.\n");
	printf("\n");

	printf("1 or 0: ");
	scanf("%d", &s);
	printf("\n");

	if (s == 1) {
		increment_date(&y, &m, &d);
		printf("���t��%d�N%d��%d���ɍX�V���܂���.\n", y, m, d);
	}
	if (s == 0) {
		decrement_date(&y, &m, &d);
		printf("���t��%d�N%d��%d���ɍX�V���܂���.\n", y, m, d);
	}

	return 0;
}

/*
���t����͂��Ă�������.
�N�F2021
���F1
���F1

2021�N1��1�������͂���܂���.

���̓��ɍX�V����ꍇ��1
�O�̓��ɍX�V����ꍇ��0����͂��Ă�������.

1 or 0:0

���t��2020�N12��31���ɍX�V���܂���.

C:\Users\MSLap\source\repos\B���R�ۑ�F9-2\Debug\B���R�ۑ�F9-2.exe (�v���Z�X 12556) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/