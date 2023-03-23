//SoftC07Prac3クラス
public class SoftC07Prac3 {
	public static void main(String[] args) {
		//Dictionary, Crow, Sparrowインスタンスを生成
		Dictionary dioctionary = new Dictionary();
		Crow crow = new Crow();
		Sparrow sparrow = new Sparrow();

		//Crow インスタンスを引数に、Dictionary インスタンスの showBirdFeature()を呼び出す
		dioctionary.showBirdFeauture(crow);
		//Sparrow インスタンスを引数に、Dictionary インスタンスの showBirdFeature()を呼び出す
		dioctionary.showBirdFeauture(sparrow);
	}
}

/*
鳥の名前を表示します。
カラス科カラス
特徴や習性を表示します。
全身が黒く、黒い鳥の代表とされる。カーカーと鳴く。至る所で見ることができる。
食性について表示します。
ゴミから生ゴミをついばむのが得意です。ゴミ集積所を荒らすので、ゴミは時間に注意して捨てましょう。

鳥の名前を表示します。
スズメ目スズメ科スズメ
特徴や習性を表示します。
頭部が赤茶色、背中は褐色で縦に黒斑があり、翼に2本の白帯がある。チュンチュンと鳴く。ユーラシア大陸の広い範囲に分布する。
食性について表示します。
植物の種子や虫を食べる。パンくずを与えると食べにくるときがある。
 */
