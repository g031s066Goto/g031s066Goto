/*2020/12/11 0312020066 後藤健瑠 */
/*必須課題C11-2*/

#include <stdio.h>

struct pTimeJob {
	int hourly_wage;
	double working_hours;
	double rest_hours;
};

void eval_pTimeJob(struct pTimeJob *cond) {
	if ((*cond).hourly_wage < 793) {
		printf("\n最低賃金より%d円低いですが、", 793 - (*cond).hourly_wage);
	}
	else {
		printf("\n最低賃金より%d円高く、", (*cond).hourly_wage - 793);
	}
	printf("日給は%g円です.", (int)(*cond).hourly_wage * ((*cond).working_hours - (*cond).rest_hours));
}

int main(void)
{
	struct pTimeJob T = { 0, 0, 0 };

	printf("時給（円）は？：");
	scanf("%d", &T.hourly_wage);
	printf("労働時間（hours）は？：");
	scanf("%lf", &T.working_hours);
	printf("休憩時間（hours）は？：");
	scanf("%lf", &T.rest_hours);

	eval_pTimeJob(&T);

	return 0;
}

/*
時給（円）は？：1000
労働時間（hours）は？：12.5
休憩時間（hours）は？：0.5

最低賃金より207円高く、日給は12000円です.
C:\Users\MSLap\source\repos\B必須課題C11-2\Debug\B必須課題C11-2.exe (プロセス 14304) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/