/*2020/08/20 0312020066 �㓡���� */
/*���R�ۑ�F5-1*/

#include <stdio.h>

int main(void)
{
	int limit, n, sum;

	printf("limit����͂��Ă��������F");
	scanf("%d", &limit);

	sum = 0;

	while (sum <= limit) {
		printf("n����͂��Ă��������F");
		scanf("%d", &n);
		sum = sum + n;
		printf("sum��%d\n", sum);
	}
	printf("sum��limit��%d�𒴂����̂ŏI��", limit);

}

/*
limit����͂��Ă��������F8
n����͂��Ă��������F1
sum��1
n����͂��Ă��������F2
sum��3
n����͂��Ă��������F3
sum��6
n����͂��Ă��������F4
sum��10
sum��limit��8�𒴂����̂ŏI��
C:\Users\MSLap\source\repos\���R�ۑ�F5-1\Debug\���R�ۑ�F5-1.exe (�v���Z�X 9108) �́A�R�[�h 0 �ŏI�����܂����B
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/