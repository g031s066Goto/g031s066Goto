//mainクラス:変数の値を表示
public class Main {
	//メインメソッド
	public static void main(String[] args) {

		System.out.println("演習2");
		double dval = 1.1;					//double型変数を定義し、値を代入
		int ival = 2; 						//int型変数を定義し、値を代入
		String str = "こんにちは";			//文字列に値を定義
		int strlen = str.length();			//文字列strの長さを求める
		System.out.println(dval);			//dvalを出力
		System.out.println(ival);			//ivalを出力
		System.out.println(str);			//strを出力
		System.out.println(strlen);			//strlenを出力

		System.out.println("");				//空行

		System.out.println("演習3");
		double[] arry = new double[5];	//double型配列変数を宣言、要素数5を確保
		arry[0] = 40.0;						//0番目の要素に40.0を代入
		arry[1] = 20.0;						//1番目の要素に20.0を代入
		arry[2] = arry[0] - arry[1];		//2番目の要素にarry[0]とarry[1]の減算を代入
		arry[3] = arry[0] * arry[1];		//3番目の要素にarry[0]とarry[1]の乗算を代入
		arry[4] = arry[0] / arry[1];		//4番目の要素にarry[0]とarry[1]の除算を代入
		System.out.println(arry[0]);		//0番目の値を出力
		System.out.println(arry[1]);		//1番目の値を出力
		System.out.println(arry[2]);		//2番目の値を出力
		System.out.println(arry[3]);		//3番目の値を出力
		System.out.println(arry[4]);		//4番目の値を出力
	}
}

/*
演習2
1.1
2
こんにちは
5

演習3
40.0
20.0
20.0
800.0
2.0
 */