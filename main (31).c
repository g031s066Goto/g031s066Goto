/*2020/07/30 0312020066 後藤健瑠 */
/*必須課題C2-2*/

#include<stdio.h>

int main(void)
{
	int x, y, z;
	printf("xを入力してください");
	scanf("%d", &x);
	printf("yを入力してください");
	scanf("%d", &y);
	printf("変更前\tx=%d", x);
	printf("y=%d\n", y);
	z = x;
	x = y;
	y = z;
	printf("変更後\tx=%d", x);
	printf("y=%d", y);
}

/*
xを入力してください2
yを入力してください3
変更前  x=2y=3
変更後  x=3y=2
C:\Users\MSLap\source\repos\必須課題C2-2\Debug\必須課題C2-2.exe (プロセス 19280) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/

/*
xを入力してください4
yを入力してください1
変更前  x=4y=1
変更後  x=1y=4
C:\Users\MSLap\source\repos\必須課題C2-2\Debug\必須課題C2-2.exe (プロセス 14512) は、コード 0 で終了しました。
このウィンドウを閉じるには、任意のキーを押してください...
*/