//Practice509_04クラス:イベント処理の例
import java.awt.BorderLayout;	//①ボーダーレイアウト
import java.awt.Container;	// ④表示領域
import java.awt.event.ActionEvent;	// ③イベントクラス
import java.awt.event.ActionListener;	// ②イベントリスナー

import javax.swing.JButton;	// ①ボタン
import javax.swing.JFrame;	// ①フレーム
import javax.swing.JTextField; // ①テキストフィールド

//JFrameを継承し，ActionListenerを実装
public class Practice509_04 extends JFrame implements ActionListener{
	private Container cntnr; // 表示領域
	private JTextField text1; // テキストフィールド
	private JButton button1,button2,button3; // ボタン
	// ⑥コンストラクタ：窓のタイトル，位置，大きさを設定
	Practice509_04(String title) {
	super(title);
	setBounds(200,200,200,150);
	}
	public static void main(String[] args) {
		// ⑦自クラスのインスタンスを生成
		Practice509_04 frame = new Practice509_04("Practice509_04");
		frame.defineVal(); // 表示準備
		frame.setVisible(true); // ⑧窓表示
	}
	// 窓を表示する準備
	private void defineVal() {
		cntnr=getContentPane(); // ⑨表示領域情報取得
		// ⑩ボーダーレイアウトに設定
		cntnr.setLayout(new BorderLayout());
		// ⑪各部品インスタンス
		text1=new JTextField(); // 引数無しの時は自動調整
		button1=new JButton("＜＜朝＞＞"); // ボタン1
		button2=new JButton("＜＜夜＞＞"); // ボタン2
		button3=new JButton("＜終了＞"); // ボタン3
		// ⑫レイアウトに部品を貼り付け
		cntnr.add(text1,BorderLayout.NORTH); // 上にテキスト入力
		cntnr.add(button1,BorderLayout.WEST); // 左にボタン1
		cntnr.add(button2,BorderLayout.EAST); // 右にボタン2
		cntnr.add(button3,BorderLayout.SOUTH); // 下にボタン3

		// ⑬窓を閉じたときの動作：プログラム終了（デフォルトは窓を閉じる）
		setDefaultCloseOperation(EXIT_ON_CLOSE);

		// ⑭三つのボタンにActionListnerを登録
		button1.addActionListener(this);
		button2.addActionListener(this);
		button3.addActionListener(this);
	}
	// ⑮ボタンが押されたときの動作設定
	public void actionPerformed(ActionEvent e) {
		// ⑯⑰どのボタンからのものか判断し，
		// 対応する文字列をテキスト入力に表示
		if(e.getSource()==button1) { // 朝ボタン
			text1.setText("おはよう！");
		} else if(e.getSource()==button2) { // 夜ボタン
			text1.setText("さようなら");
		} else if(e.getSource()==button3) { // ⑱終了ボタン
			System.exit(0);
		}
	}
}
