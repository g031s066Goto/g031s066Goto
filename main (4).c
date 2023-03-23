/*2020/12/11 0312020066 後藤健瑠 */
/*必須課題C11-1*/

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

	printf("氏　名　＝　%p\n", &takao.name);
	printf("身　長　＝　%p\n", &takao.height);
	printf("体　重　＝　%p\n", &takao.weight);
	printf("奨学金　＝　%p\n", &takao.schols);

	return 0;
}

/*
氏　名　＝　0019FE18
身　長　＝　0019FE58
体　重　＝　0019FE60
奨学金　＝　0019FE68

C:\Users\MSLap\source\repos\B必須課題C11-1\Debug\B必須課題C11-1.exe (プロセス 6604) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/