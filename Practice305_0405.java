//Practice305_0405:変数の値を表示
public class Practice305_0405 {
	//メインメソッド
	public static void main(String[] args) {

		int x = 10;								//変数xに10を代入

		System.out.println("Practice305_04");
		System.out.println(x++);				//xの後に加算しているので、値が10のままである。
		System.out.println(x++);				//前の文で出力の後に加算しているので、値が11になる。
		System.out.println(x);					//前の文で出力の後に加算しているので、値が12になる。
		System.out.println(++x);				//xの出力の前に加算されているので、値が13になる。
		System.out.println(++x);				//xの出力の前に加算されているので、値が14になる。

		System.out.println("");					//空行

		x = 10;									//変数xに10を代入
		int y = 5;								//変数yに5を代入
		System.out.println("Practice305_05");
		System.out.println(x > y);				//xの値よりyの値の方が小さいため、trueが出力される。
		System.out.println(x < y);				//xの値よりyの値の方が小さいため、falseが出力される。
		y = 10;									//yに10を代入
		System.out.println(x > y);				//ｘの値とyの値が等しいため、falseが出力される。
		System.out.println(x >= y);				//ｘの値とyの値が等しく、条件に=があるため、trueとなる。
		System.out.println(x == y);				//ｘの値とyの値が等しいため、trueが出力される。
		System.out.println(x != y);				//ｘの値とyの値が等しいため、falseが出力される。

	}
}

/*
Practice305_04
10
11
12
13
14

Practice305_05
true
false
false
true
true
false
 */