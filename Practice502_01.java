package package1;
//①package1\package2にあるAdditionクラスを参照
import package1.package2.Addition;

//Practice502_01クラス：インポートの例
public class Practice502_01 {
	public static void main(String[] args) {
		int val1 = 10, val2 = 20;
		int result;
		//②③クラス名だけインスタンス生成
		Addition inst = new Addition();;
		//メソッドを呼び出して計算し, 結果を表示
		result = inst.calc(val1,  val2);
		System.out.println("答えは"+ result);

	}

}

/*
答えは30
 */
