//SoftC07Prac2クラス
public class SoftC07Prac2 {
	public static void main(String[] args) {

		int total = 0;	//totalの初期化
		Fruit fru1, fru2, fru3, fru4, fru5;	//インスタンス生成


		//フルーツに適当な数値を定義
		fru1 = new Fruit();
		fru2 = new Fruit();
		fru3 = new Fruit("りんご");
		fru4 = new Fruit(200);
		fru5 = new Fruit("ぶどう", 500);

		//totalに足していく
		total += fru1.buy(1);
		total += fru2.buy(1);
		total += fru3.buy(1);
		total += fru4.buy(1);
		total += fru5.buy(1);

		//合計を出力
		System.out.println("合計は"+ total + "円です.");
	}
}

/*
 合計は1500円です.
 */

