//SoftC08Prac2クラス
public class SoftC08Prac2 {
	public static void main(String[] args) {

		//インスタンス
		Employee inst = new Employee(1001, "営業部", "あいだ", 100);

		//ゲッターメソッドを呼び出し, 各変数の値を取得し、表示する
		System.out.println("変更前");
		int a = inst.getemplNo();
		String b = inst.getdepart();
		String c = inst.getname();
		int  d = inst.getsalary();
		System.out.println(a);
		System.out.println(b);
		System.out.println(c);
		System.out.println(d);

		//いくつかの変数をセッターメソッドで変更
		System.out.println("");
		System.out.println("変更後");
		inst.setemplNo(1002);
		inst.setdepart("開発部");
		inst.setname("いしかわ");
		inst.setsalary(200);

		//変更後の値をゲッターメソッドで取得し、表示する
		int e = inst.getemplNo();
		String f = inst.getdepart();
		String g = inst.getname();
		int  h = inst.getsalary();
		System.out.println(e);
		System.out.println(f);
		System.out.println(g);
		System.out.println(h);

	}
}

/*
変更前
1001
営業部
あいだ
100

変更後
1002
開発部
いしかわ
200
 */
