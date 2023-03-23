//Practice403_01クラス:複数クラスの利用例
public class Practice403_01 {
	//③メインメソッド
	public static void main(String[] args) {
		//④他のクラスとして定義したMessageの
		//インスタンスを宣言
		Message instA;
		//⑤インスタンス生成
		instA = new Message();
		//⑥instAのdisplayHello()メソッドを呼び出し
		instA.displayHello();
	}
}

/*
こんにちは！
 */