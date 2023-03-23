//①かけ算を行うクラス
public class Mult {
	int multiple, i_times = 0;	//②インスタンス変数
	static int c_times = 0;	//②クラス変数

	//③コンストラクト
	Mult(int num){
		multiple = num;	//multipleに引数(mul)を代入
		//メッセージ表示
		System.out.println(multiple + "倍するインスタンス");
	}
	//④かけ算を行うメソッド
	public int calc(int value) {
		c_times++;	//クラス変数をインクリメント
		i_times++;	//インスタンス変数をインクリメント
		return value * multiple;
	}
	//⑤クラス変数とインスタンス変数を表示
	public void display() {
		System.out.println(multiple + "倍するインスタンス");
		System.out.println("インスタンス変数：" + i_times);
		System.out.println("クラス変数：" + c_times);
	}
}

/*
10倍するインスタンス
100倍するインスタンス
10倍：50
10倍するインスタンス
インスタンス変数：1
クラス変数：1
100倍：500
100倍するインスタンス
インスタンス変数：1
クラス変数：2
 */