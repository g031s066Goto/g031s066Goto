//ファイル書き出し用クラス，入出力例外用クラスをインポート
//ファイル入力用クラス，入出力例外用クラスをインポート
//ソートメソッドをインポート
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		int[] Box = new int[10];	//配列Boxの作成
		String readData;	//読み込み用文字列
		BufferedReader buffReader = null;	//読み込み用バッファ
		String writeData;	//書き出し用文字列
		BufferedWriter buffWriter = null;	//書き出し用バッファ

		try {	// ファイル入力時に例外が発生する場合がある
			// "aaa.txt"のFileReaderインスタンスを生成し，
			// それをもとにBufferedReaderインスタンスを生成
			buffReader = new BufferedReader(
			new FileReader("aaa.txt"));
			readData = buffReader.readLine();	// ⑤1行読み込み
			// "bbbtxt"のFileWriterインスタンスを生成し，
			// それをもとにBufferedWriterインスタンスを生成
			buffWriter=new BufferedWriter(
			new FileWriter("bbb.txt"));

			//読み込みデータがある間繰り返し
			//行数とともに読み込み内容を表示
			for (int i = 0; i < Box.length; i++) {
				Box[i] = Integer.parseInt(readData);	//文字列を整数に変換
				readData = buffReader.readLine();	// 次の行を読む
			}
			Arrays.sort(Box);	//昇順
			for (int j = 0; j < Box.length; j++) {
				System.out.println(Box[j]);	//Box[i]の出力
				writeData = Integer.toString(Box[j]);	//書き出す文字列
				buffWriter.write(writeData);	//ファイルに書き出し
				buffWriter.newLine();	//改行を出力
			}
		} catch (IOException e) { // ⑨IO例外捕捉
			System.out.println("読み込みエラーです");
		} finally { // ⑩後処理
			try { // 後処理にも例外が発生する場合がある
				buffWriter.flush(); // ⑫強制書き出し（省略可）
				buffWriter.close(); // ⑬ファイルを閉じる
				buffReader.close(); // ⑪ファイルを閉じる
			} catch (Exception e) { // ⑫後処理時の例外捕捉
				System.out.println("終了処理エラーです");
			}
		}
	}
}

/*
20
22
36
53
59
62
74
79
81
91
 */