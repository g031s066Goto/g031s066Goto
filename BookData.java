import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;

public class BookData {
	//アレイリスト作成
	ArrayList<String> filestack = new ArrayList<String>();
	ArrayList<String> result = new ArrayList<String>();

	String line;
	BufferedReader fin = null;
	String[] splitStr;

	int i;
	int j = 0;

	//コンストラクタ
	BookData(){
		//csvファイルの読み込み
		try {
			// BufferedReaderを利用してファイルを開く
			fin = new BufferedReader(new FileReader("booklist.csv"));
			//1行分をlineに読み込んでいく
			while((line = fin.readLine()) != null) {
				filestack.add(line);
			}
		}catch(IOException e){
			e.printStackTrace();
		}
	}

	//検索
	void search(String query) {
		result.clear();
		for(i = 0; i < filestack.size(); i++) {
			if(filestack.get(i).indexOf(query) != -1) {
				result.add(filestack.get(i));
			}
		}
	}

	//結果表示
	public void setKekka() {
		splitStr = result.get(j).split(",");
	}
	//タイトルを参照するメソッド
	String getTitle() {
		return splitStr[0];
	}
	//著者を参照するメソッド
	String getAuthor() {
		return splitStr[1];
	}
	//出版社を参照するメソッド
	String getPublisher() {
		return splitStr[2];
	}
	//出版年を参照するメソッド
	String getYear() {
		return splitStr[3];
	}
	//ISBMを参照するメソッド
	String getISBN() {
		return splitStr[4];
	}
	void Reft() {
		if(j > 0) {
			j--;
		}else
			j = 0;
	}
	void Right() {
		if(j < result.size() - 1) {
			j++;
		}else j = result.size() - 1;
	}

	//csvファイルへの書き出し
	public void kakidashi() {
		// "result.csv"を書き出しモードで開
		try {
			PrintWriter fout = new PrintWriter(new BufferedWriter(new FileWriter("result.csv")));
			// データをファイルへ書き出し
			for(int k = 0; k < result.size(); k++) {
				fout.println(result.get(k));
			}
			fout.close();
		}catch(IOException e) {
			e.printStackTrace();
		}
	}
}