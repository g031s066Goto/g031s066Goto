/*2020/12/11 0312020066 �㓡���� */
/*�K�{�ۑ�C11-2*/

#include <stdio.h>

struct pTimeJob {
	int hourly_wage;
	double working_hours;
	double rest_hours;
};

void eval_pTimeJob(struct pTimeJob *cond) {
	if ((*cond).hourly_wage < 793) {
		printf("\n�Œ�������%d�~�Ⴂ�ł����A", 793 - (*cond).hourly_wage);
	}
	else {
		printf("\n�Œ�������%d�~�����A", (*cond).hourly_wage - 793);
	}
	printf("������%g�~�ł�.", (int)(*cond).hourly_wage * ((*cond).working_hours - (*cond).rest_hours));
}

int main(void)
{
	struct pTimeJob T = { 0, 0, 0 };

	printf("�����i�~�j�́H�F");
	scanf("%d", &T.hourly_wage);
	printf("�J�����ԁihours�j�́H�F");
	scanf("%lf", &T.working_hours);
	printf("�x�e���ԁihours�j�́H�F");
	scanf("%lf", &T.rest_hours);

	eval_pTimeJob(&T);

	return 0;
}

/*
�����i�~�j�́H�F1000
�J�����ԁihours�j�́H�F12.5
�x�e���ԁihours�j�́H�F0.5

�Œ�������207�~�����A������12000�~�ł�.
C:\Users\MSLap\source\repos\B�K�{�ۑ�C11-2\Debug\B�K�{�ۑ�C11-2.exe (�v���Z�X 14304) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/