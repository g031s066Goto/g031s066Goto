//Studentクラス:Runnableインタフェースを実装
public class Student implements Runnable{
	//numberとnameを private で管理
	private int number;
	private String name;

	//コンストラクタでnumberとnameを設定
	Student(int number, String name) {
		this.number = number;
		this.name = name;
	}

	//各変数を参照するゲッターメソッドを作成
	public int getnumber() {
		return this.number;
	}
	public String getname() {
		return this.name;
	}

	//run()メソッド:
	//各ゲッターメソッドを呼び出すことで学籍番号と名前を表示，100 ミリ秒停止を 20 回繰り返す
	public void run() {
		for(int i = 0; i < 20; i++) {
			int a = getnumber();
			String b = getname();
			System.out.println(a + b);
			try {
			  Thread.sleep(100); // 100ミリ秒停止
			} catch(InterruptedException e) {
			  // 例外時のスタック情報を表示
			  e.printStackTrace();
		    }
		}
	}
}

/*
101：いとう
103：かとう
102：えとう
103：かとう
101：いとう
102：えとう
103：かとう
101：いとう
102：えとう
102：えとう
103：かとう
101：いとう
102：えとう
103：かとう
101：いとう
102：えとう
101：いとう
103：かとう
102：えとう
103：かとう
101：いとう
103：かとう
101：いとう
102：えとう
102：えとう
103：かとう
101：いとう
103：かとう
101：いとう
102：えとう
101：いとう
102：えとう
103：かとう
103：かとう
102：えとう
101：いとう
101：いとう
103：かとう
102：えとう
103：かとう
102：えとう
101：いとう
103：かとう
101：いとう
102：えとう
102：えとう
101：いとう
103：かとう
102：えとう
101：いとう
103：かとう
101：いとう
102：えとう
103：かとう
102：えとう
101：いとう
103：かとう
101：いとう
102：えとう
103：かとう
 */
