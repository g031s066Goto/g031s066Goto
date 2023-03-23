//Mainクラス:引数/戻り値の利用
public class Main {
	//メインメソッド
	public static void main(String[] args) {

		//配列の定義
		int[] data = { 30, 72, 45, 20, 30, 30, 38, 50, 119, 37, 48, 47, 67,
						75, 30, 20, 47, 30, 70, 33, 40, 20, 30, 46, 30, 40 };

		//演算結果の変数
		double ans1, ans2, ans3, ans6;
		int ans4, ans5;

		//演算のインスタンス
		Calculation calculation = new Calculation();

		//演算値と演算種の引数付でメソッドを呼び出し, 結果を受け取る
		ans1 = calculation.Average(data);
		ans2 = calculation.Distributed(data);
		ans3 = calculation.StandardDeviation(data);
		ans4 = calculation.Max(data);
		ans5 = calculation.Min(data);
		ans6 = calculation.Median(data);

		//結果表示
		System.out.println("平均値：" + ans1);
		System.out.println("偏差：" + ans2);
		System.out.println("標準偏差：" + ans3);
		System.out.println("最大値：" + ans4);
		System.out.println("最小値：" + ans5);
		System.out.println("中央値：" + ans6);


	}
}

/*
平均値：44.0
偏差：461.0769230769231
標準偏差：21.472701811298062
最大値：119
最小値：20
中央値：39.0
 */