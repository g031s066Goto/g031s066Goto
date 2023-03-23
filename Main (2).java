//main:変数の値を表示
public class Main {
	//メインメソッド
	public static void main(String[] args) {

		int sum = 0;													//合計sumを定義

		for(int i = 1; i <= 40; i++) {									//変数iを定義, iが1から40までの間
			if((i % 3 == 0) || ((String.valueOf(i).contains("3")))){	//3の倍数または3が付く数字だった場合
				System.out.println(i);									//iを出力
				sum += i;												//sumにiを足す
			}
		}
		System.out.println("合計：" + sum);								//合計sumを出力
	}
}

/*
3
6
9
12
13
15
18
21
23
24
27
30
31
32
33
34
35
36
37
38
39
516
 */