//Confirm28Q1クラス:イベント処理
import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;
import javax.swing.JTextField;

public class Confirm28Q1 extends JFrame implements ActionListener,ItemListener {
	FlowLayout flow;	//レイアウト領域
	JTextField textField; // テキストフィールド
	JButton button;		// ボタン
	ButtonGroup btngrp;	//ラジオボタングループ
	JRadioButton rbtn1, rbtn2, rbtn3; //ラジオボタン
	Container cntnr; // 窓の表示領域
	String str;	//ラベル格納領域
	JLabel label;

	//コンストラクタ
	Confirm28Q1(String title){
		super(title); // タイトルの設定
		setBounds(200,200,350,200); // 位置とサイズの設定
	}
	void prepare() {
		cntnr = getContentPane(); // 表示領域を取得
		flow = new FlowLayout();
		cntnr.setLayout(flow);
		btngrp = new ButtonGroup();
		rbtn1 = new JRadioButton("定食", false);
		rbtn2 = new JRadioButton("ハンバーガー", false);
		rbtn3 = new JRadioButton("ラーメン", false);
		btngrp.add(rbtn1);
		btngrp.add(rbtn2);
		btngrp.add(rbtn3);

		JPanel ButtonGroup = new JPanel();
		ButtonGroup.add(rbtn1);
		ButtonGroup.add(rbtn2);
		ButtonGroup.add(rbtn3);

		textField = new JTextField(30);
		button = new JButton("どれか選択してから決定！！"); // ボタン
		label = new JLabel("今日の夕食は何にする？");	//ラベル

		ButtonGroup.setLayout(new FlowLayout(FlowLayout.CENTER));
		cntnr.add(ButtonGroup);
		cntnr.add(label);
		cntnr.add(button);
		cntnr.add(textField);

		setDefaultCloseOperation(EXIT_ON_CLOSE);

		rbtn1.addItemListener(this);
		rbtn2.addItemListener(this);
		rbtn3.addItemListener(this);
		textField.addActionListener(this);
		button.addActionListener(this);

	}
	public void itemStateChanged(ItemEvent e) {
		str = ((JRadioButton)e.getItemSelectable()).getText();
		textField.setText(str+"がいいかなぁ？");
	}
	public void actionPerformed(ActionEvent e) {
		if(str == null) {
			textField.setText("あれ？まだ決まってないよ？");
		}else {
			textField.setText("よし！" + str + "にしよう！");
		}
	}
	public static void main(String[] args) {
		Confirm28Q1 frame = new Confirm28Q1("Confirm28Q1");
		frame.prepare(); // 表示の準備
		frame.setVisible(true); // 窓を表示
	}
}