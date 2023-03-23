//CalcAreaクラス:面積の計算
public class CalcArea {
	//円の面積を計算し, 結果を返す
	public double circleArea(int radius) {
		double ans1 = radius * radius * 3.14;
		return ans1;
	}
	//三角形の面積を計算し, 結果を返す
	public double triangleArea(int bottom, int height) {
		double ans2 = bottom * height / 2;
		return ans2;
	}
	//台形の面積を計算し, 結果を返す
	public double trapezoidArea(int upper, int lower, int height) {
		double ans3 = (upper + lower) * height / 2;
		return ans3;
	}
}

/*
円の面積：314.0
三角形の面積：200.0
台形の面積：900.0
３つの結果の合計：1414.0
 */