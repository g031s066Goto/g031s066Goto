//SoftC05Prac2クラス:実行時の引数を利用
public class SoftC05Prac2 {
	//メインメソッド
	public static void main(String[] args) {

		//面積の計算のインスタンス
		CalcArea calcarea = new CalcArea();

		//演算結果の変数を定義, 引数を整数に変換し, 演算する.
		double ans1 = calcarea.circleArea(Integer.parseInt(args[0]));
		double ans2 = calcarea.triangleArea(Integer.parseInt(args[1]), Integer.parseInt(args[1]));
		double ans3 = calcarea.trapezoidArea(Integer.parseInt(args[2]), Integer.parseInt(args[2]), Integer.parseInt(args[2]));

		//結果表示
		System.out.println("円の面積：" + ans1);
		System.out.println("三角形の面積：" + ans2);
		System.out.println("台形の面積：" + ans3);
		System.out.println("３つの結果の合計：" + (ans1 + ans2 + ans3));

	}
}

/*
円の面積：314.0
三角形の面積：200.0
台形の面積：900.0
３つの結果の合計：1414.0
 */