//SoftC09Prac2クラス
public class SoftC09Prac2 {
	public static void main(String[] args) {
		//三つの Student インスタンスを生成
		Student instA = new Student(101, "：いとう");
		Student instB = new Student(102, "：えとう");
		Student instC = new Student(103, "：かとう");

		//各 Student インスタンスから三つの Thread インスタンスを生成
		Thread threadA = new Thread(instA);
		Thread threadB = new Thread(instB);
		Thread threadC = new Thread(instC);

		//各 Thread インスタンスの start()メソッドを実行
		threadA.start();
		threadB.start();
		threadC.start();
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
