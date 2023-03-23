/*2020/12/18 0312020066 後藤健瑠 */
/*必須課題C12-1*/

#include <stdio.h>

struct data {
	char name[8];
	int value;
};

struct data d[3];

int main(void)
{
	int i;
	int sum = 0;
	FILE *fp;
	
	fp = fopen("12input.txt", "r");
	if (fp == NULL) {
		printf("ファイルを開くことが出来ませんでした.\n");
	}

	for (i = 0; i < 3; i++) {
		fscanf(fp, "%s", d[i].name);
		fscanf(fp, "%d", &d[i].value);
		printf("%s %d\n", d[i].name, d[i].value);
		sum += d[i].value;
	}

	printf("合計＝%d\n同様の結果をファイルに出力しました.", sum);

	fp = fopen("12output.txt", "w");
	for (i = 0; i < 3; i++) {
		fprintf(fp, "%s %d\n", d[i].name, d[i].value);
	}
	fprintf(fp, "合計＝%d\n同様の結果をファイルに出力しました.\n",  sum);
	fclose(fp);
	
	return 0;
}

/*
two 2
four 4
six 6
合計＝12
同様の結果をファイルに出力しました.
C:\Users\MSLap\source\repos\B必須課題C12-1\Debug\B必須課題C12-1.exe (プロセス 24448) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/