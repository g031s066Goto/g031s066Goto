//⑧Practice411_02クラス：継承と実装の同時使用例
public class Practice411_02 {
	public static void main(String[] args) {
		ChocolateCake cake1 = new ChocolateCake();
		StrawberryCake cake2 = new StrawberryCake();

		//各ケーキの本体と飾り方を表示
		cake1.body();
		cake1.decorate();
		cake2.body();
		cake2.decorate();
	}
}

/*
本体のスポンジケーキ
チョコレートで飾りました.
本体のスポンジケーキ
イチゴで飾りました.
 */
