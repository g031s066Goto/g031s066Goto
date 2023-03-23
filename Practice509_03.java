//Practice509_03クラス：各種GUI部品の使用
//①AWTのクラス
import java.awt.Container;
import java.awt.FlowLayout;

//①Swingのクラス
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

//②JFrameを継承
public class Practice509_03  extends JFrame{
	private Container cntnr; // ④窓の表示領域
	private FlowLayout flow; // ③部品の配置を制御

	//⑤三つの部品
	private JTextField text1; // テキストフィールド
	private JButton button1; // ボタン1
	private JButton button2; // ボタン2
	
	// コンストラクタ
	Practice509_03(String title) {
		// ⑥フレームの設定
		super(title); // タイトルの設定
		setBounds(200,200,450,300); // 位置とサイズの設定
		// フレームを閉じたらプログラム終了
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
	public static void main(String[] args) {
		// ⑦自クラスのインスタンスを生成
		Practice509_03 frame = new Practice509_03("Practice509_03");
		frame.defineVal(); // ⑧表示の準備
		frame.setVisible(true); // ⑨窓を表示
	}
	// レイアウトや部品の配置を設定
	private void defineVal() {
		cntnr=getContentPane(); // ⑩表示領域を取得
		flow=new FlowLayout(); // ⑪設定するレイアウトのインスタンス
		cntnr.setLayout(flow); // ⑫レイアウトをフローレイアウトに
		text1=new JTextField(20); // ⑬テキストフィールドインスタンス
		button1=new JButton("はじめ"); // ⑭ボタン1インスタンス
		button2=new JButton("おわり"); // ⑮ボタン2インスタンス
		// ⑯各部品を表示領域に追加
		cntnr.add(button1);
		cntnr.add(text1);
		cntnr.add(button2);
	}
}

