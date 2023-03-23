//Mainクラス:各種GUI部品の使用
import java.awt.BorderLayout;
import java.awt.Container;

import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class SoftC11Prac2 extends JFrame {
	private Container cntnr; // 窓の表示領域
	private JLabel label1,label2; // ラベル
	private JButton button2; // ボタン
	private JCheckBox chkBox; // チェックボックス
	private JTextField textField;


	// コンストラクタ
	SoftC11Prac2(String title) {
		super(title); // タイトルの設定
		setBounds(200,200,450,300); // 位置とサイズの設定
		// フレームを閉じたらプログラム終了
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}

	public static void main(String[] args) {
		// 自クラスのインスタンスを生成
		SoftC11Prac2 frame = new SoftC11Prac2("SoftC11Prac2");
		frame.defineVal(); // 表示の準備
		frame.setVisible(true); // 窓を表示
	}
	// レイアウトや部品の配置を設定
	private void defineVal() {
		cntnr = getContentPane(); // 表示領域を取得
		cntnr.setLayout(new BorderLayout()); // レイアウト設定
		label1 = new JLabel("ソフトウェア演習Cに関する意見を書いてください"); // ラベル
		chkBox = new JCheckBox("確認",false); // チェックボックス
		button2 = new JButton("OK"); // ボタン
		label2 = new JLabel("意見");
		textField = new JTextField();

		// 部品の追加
		cntnr.add(label1,BorderLayout.NORTH);
		cntnr.add(chkBox, BorderLayout.EAST);
		cntnr.add(button2, BorderLayout.SOUTH);
		cntnr.add(label2, BorderLayout.WEST);
		cntnr.add(textField, BorderLayout.CENTER);


	}

}
