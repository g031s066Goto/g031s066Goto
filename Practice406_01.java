//Practice406_01クラス
public class Practice406_01 {
	public static void main(String[] args) {
		Mult m1 = new Mult(10);		//2つのインスタンス
		Mult m2 = new Mult(100);	//を生成

		System.out.println("10倍："+ m1.calc(5));
		m1.display();	//クラス変数とインスタンス変数を表示

		System.out.println("100倍："+ m2.calc(5));
		m2.display();	//クラス変数とインスタンス変数を表示
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