//④StrawberryCakeクラス：
//	Cakeクラスを継承し, Decorateインタフェースを実装
public class StrawberryCake extends Cake implements Decorate{
	//⑤飾り方を実装
	public void decorate() {
		System.out.println("イチゴで飾りました.");
	}
}

/*
本体のスポンジケーキ
チョコレートで飾りました.
本体のスポンジケーキ
イチゴで飾りました.
 */