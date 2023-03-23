//ChocolateCakeクラス：
//	Cakeクラスを継承し, Decorateインタフェースを実装
public class ChocolateCake extends Cake implements Decorate{
	//⑦飾り方を実装
	//インタフェースをオーバーライド
	public void decorate() {
		System.out.println("チョコレートで飾りました.");
	}

}

/*
本体のスポンジケーキ
チョコレートで飾りました.
本体のスポンジケーキ
イチゴで飾りました.
 */
