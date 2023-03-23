//Practice506_02クラス:ArrayListクラス使用例 その2
import java.util.ArrayList;
public class Practice506_02 {
	public static void main(String[] args) {

		//ArrayListの作成
		ArrayList<Object> list=new ArrayList<>();
		list.add("文字列");	//文字列型の追加
		list.add(100);	//整数データの追加
		list.add(100.1);	//浮動小数点データの追加

		//0番目の要素をStringインスタンスで受け取る
		//ArrayListの型がObjectなので, Stringにキャストして代入
		//String strng = new String((String)list.get(0));
		String strng = (String)list.get(0);
		System.out.println("文字列インスタンス：" + strng);

		//1番目の要素をIntegerインスタンスで受け取る
		//Integer intgr = new Integer((Integer)list.get(1));
		Integer intgr = (Integer)list.get(1);
		System.out.println("Integerインスタンス：" + intgr);

		// 2番目の要素をDoubleインスタンスで受け取る
	    //Double dbl=new Double((Double)list.get(2));
		Double dbl=(Double)list.get(2);
		System.out.println("Doubleインスタンス：" + dbl);
	}

}

/*
文字列インスタンス：文字列
Integerインスタンス：100
Doubleインスタンス：100.1
 */
