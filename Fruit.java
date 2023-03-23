//Fruitクラス：nameとpriceを持つクラス
public class Fruit {
	String name;	//名前
	int price;	//値段

	//引数無しコンストラクタ：デフォルト値で初期化
	Fruit() {
		name = "すいか";
		price = 300;
	}

	//引数1つのコンストラクタ：
	//名前は引数の値, 値段はデフォルトで初期化
	Fruit(String name) {
		this.name = name;
		this.price = 200;
	}

	//引数1つのコンストラクタ：
	//名前はデフォルトで初期化, 値段は引数の値
	Fruit(int price) {
		this.name = "すいか";
		this.price = price;
	}

	//引数2つのコンストラクタ：両方を引数の値で初期化
	Fruit(String name, int price) {
		this.name = name;
		this.price = price;
	}

	//cnt個の値段を返却
	public int buy(int cnt) {
		return cnt * price;
	}
}

/*
 合計は1500円です.
 */