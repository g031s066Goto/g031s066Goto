//SoftC11Prac3クラス:各種GUI部品の使用
import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;

public class SoftC11Prac3 extends JFrame {
	private Container cntnr; // 窓の表示領域
	private JLabel label1,label2, label3, label4, label5; // ラベル
	private JButton button1,button2; // ボタン
	private JComboBox<String> cmbBox; // コンボボックス
	private JCheckBox chkBox1, chkBox2, chkBox3, chkBox4; // チェックボックス
	private JRadioButton radio1, radio2, radio3; //ラジオボタン

	// コンストラクタ
	SoftC11Prac3(String title) {
		super(title); // タイトルの設定
		setBounds(200,200,450,300); // 位置とサイズの設定
		// フレームを閉じたらプログラム終了
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
	public static void main(String[] args) {
		// 自クラスのインスタンスを生成
		SoftC11Prac3 frame = new SoftC11Prac3("SoftC11Prac3");
		frame.defineVal(); // 表示の準備
		frame.setVisible(true); // 窓を表示
	}
	// レイアウトや部品の配置を設定
	private void defineVal() {
		cntnr=getContentPane(); // 表示領域を取得
		cntnr.setLayout(new BorderLayout()); // レイアウト設定

		label1 = new JLabel("ソフトウェア演習C第11回自由課題"); // ラベル
		label2 = new JLabel("一つ選択"); // ラベル
		label3 = new JLabel("一つ選択"); //ラベル
		label4 = new JLabel("複数選択可"); //ラベル
		label5 = new JLabel("確認しましたか?"); //ラベル
		button1 = new JButton("はい"); // ボタン
		button2 = new JButton("いいえ"); // ボタン
		cmbBox = new JComboBox<>(); // コンボボックス
		cmbBox.addItem("選択肢1"); // コンボボックス項目1
		cmbBox.addItem("選択肢2"); // コンボボックス項目2
		cmbBox.addItem("選択肢3"); // コンボボックス項目3
		chkBox1 = new JCheckBox("選択肢1",false); // チェックボックス
		chkBox2 = new JCheckBox("選択肢2",false); // チェックボックス
		chkBox3 = new JCheckBox("選択肢3",false); // チェックボックス
		chkBox4 = new JCheckBox("選択肢4",false); // チェックボックス
		radio1 = new JRadioButton("選択肢1",false); //ラジオボタン
		radio2 = new JRadioButton("選択肢2",false); //ラジオボタン
		radio3 = new JRadioButton("選択肢3",false); //ラジオボタン

		//パネルの作成
		JPanel a = new JPanel();
		a.setLayout(new GridLayout(4,1));
		a.add(label2);
		a.add(radio1);
		a.add(radio2);
		a.add(radio3);

		//パネルの作成
		JPanel b = new JPanel();
		b.setLayout(new GridLayout(5,1));
		b.add(label4);
		b.add(chkBox1);
		b.add(chkBox2);
		b.add(chkBox3);
		b.add(chkBox4);

		//パネルの作成
		JPanel c = new JPanel();
		c.setLayout(new GridLayout(2,2));
		c.add(label3);
		c.add(cmbBox);

		//パネルの作成
		JPanel d = new JPanel();
		d.add(label5);
		d.add(button1);
		d.add(button2);

		// 部品の追加
		cntnr.add(label1, BorderLayout.NORTH);
		cntnr.add(a, BorderLayout.WEST);
		cntnr.add(b, BorderLayout.EAST);
		cntnr.add(c, BorderLayout.CENTER);
		cntnr.add(d, BorderLayout.SOUTH);
	}
}