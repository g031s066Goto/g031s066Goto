import java.awt.Container;//表示領域
import java.awt.FlowLayout;//フローレイアウト
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;//ボタン
import javax.swing.JFrame;//フレーム
import javax.swing.JLabel;//ラベル
import javax.swing.JTextField;//テキストフィールド

public class SearchBook extends JFrame implements ActionListener{
	private FlowLayout flow;	//部品の配置を制御
    private Container cntnr;	// 表示領域
    private JTextField text1,text2,text3,text4,text5,text6;		//テキストフィールド
    private JButton button1,button2,button3,button4;	//ボタン
    private JLabel label1,label2,label3,label4,label5,label6,label7;	//ラベル

    int osareta = 0;
    BookData instA;

    //コンストラクタ
    SearchBook(String title){
    	//フレームの設定
    	super(title);	//タイトルの設定
    	setBounds(200,200,430,250);	//位置とサイズの設定
    	instA = new BookData();	//インスタンス化
    	// フレームを閉じたらプログラム終了
    	setDefaultCloseOperation(EXIT_ON_CLOSE);
    }

    private void defineval() {
    	cntnr = getContentPane();//表示領域の情報を取得
    	flow = new FlowLayout();//フローレイアウトに設定
    	cntnr.setLayout(flow);

    	//ラベル作成
    	label1 = new JLabel("検索語：");
		label2 = new JLabel("結果：                                                                                                          ");
		label3 = new JLabel("タイトル：    ");
		label4 = new JLabel("著者：    ");
		label5 = new JLabel("出版社： ");
		label6 = new JLabel("出版年： ");
		label7 = new JLabel("ISBN：  ");

		//ボタン作成
    	button1 = new JButton("検索");
    	button2 = new JButton("<");
    	button3 = new JButton(">");
    	button4 = new JButton("検索結果保存");

    	//テキスト作成
    	text1 = new JTextField(30);
		text2 = new JTextField(35);
		text3 = new JTextField(37);
		text4 = new JTextField(37);
		text5 = new JTextField(37);
		text6 = new JTextField(37);

		//各部品を表示領域に追加
    	cntnr.add(label1);
    	cntnr.add(text1);
    	cntnr.add(button1);
    	cntnr.add(label2);
    	cntnr.add(label3);
    	cntnr.add(text2);
    	cntnr.add(label4);
    	cntnr.add(text3);
    	cntnr.add(label5);
    	cntnr.add(text4);
    	cntnr.add(label6);
    	cntnr.add(text5);
    	cntnr.add(label7);
    	cntnr.add(text6);
    	cntnr.add(button2);
    	cntnr.add(button3);
    	cntnr.add(button4);

    	//アクションリスナーに追加
    	button1.addActionListener(this);
    	button2.addActionListener(this);
    	button3.addActionListener(this);
    	button4.addActionListener(this);
    	text1.addActionListener(this);
    	text2.addActionListener(this);
    	text3.addActionListener(this);
    	text4.addActionListener(this);
    	text5.addActionListener(this);
    	text6.addActionListener(this);
    }

    //アクションイベント
    public void actionPerformed(ActionEvent e) {
    	if(e.getSource() == button1) {
    		osareta = 1;
    		instA.search(text1.getText());
    		instA.setKekka();
    		text2.setText(instA.getTitle());
    		text3.setText(instA.getAuthor());
    		text4.setText(instA.getPublisher());
    		text5.setText(instA.getYear());
    		text6.setText(instA.getISBN());
    	}
    	if(osareta == 1) {
    		if(e.getSource() == button2) {
    			instA.Reft();
    			instA.setKekka();
    			text2.setText(instA.getTitle());
    			text3.setText(instA.getAuthor());
    			text4.setText(instA.getPublisher());
    			text5.setText(instA.getYear());
    			text6.setText(instA.getISBN());
    		}
    		if(e.getSource() == button3) {
    			instA.Right();
    			instA.setKekka();
    			text2.setText(instA.getTitle());
    			text3.setText(instA.getAuthor());
    			text4.setText(instA.getPublisher());
    			text5.setText(instA.getYear());
    			text6.setText(instA.getISBN());
    		}
    		if(e.getSource() == button4) {
    			instA.kakidashi();
    		}
    	}
    }

  //メインメソッド
    public static void main(String[] args) {
    	//インスタンスの生成
    	SearchBook frame;
    	frame = new SearchBook("Search Book");
    	frame.defineval();//表示を準備
    	frame.setVisible(true);//窓を表示
    }
}