//Dictionaryクラス
public class Dictionary {
	//void showBirdFeature(Bird bird)メソッドを定義
	public void showBirdFeauture(Bird bird) {
		//インスタンス定義
		Bird harbird = new Bird();

		System.out.println("");
		//birdの名前、特徴、食性を表示するメソッドを順に呼び出す
		harbird.showName();
		bird.showName();
		harbird.about();
		bird.about();
		harbird.feed();
		bird.feed();

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
