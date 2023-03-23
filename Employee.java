//Employeeクラス:社員番号, 部署名, 名前, 基本給を管理
public class Employee {

	//変数の宣言
	private int emplNo;
	private String depart;
	private String name;
	private int salary;

	//各変数を設定するコンストラクトを作成
	Employee(int emplNo, String depart, String name, int salary) {
		this.emplNo = emplNo;
		this.depart = depart;
		this.name = name;
		this.salary = salary;
	}

	//各変数を設定するセッターメソッドを作成
	public void setemplNo(int emplNo) {
		this.emplNo = emplNo;
	}

	public void setdepart(String depart) {
		this.depart = depart;
	}

	public void setname(String name) {
		this.name = name;
	}

	public void setsalary(int salary) {
		this.salary = salary;
	}

	//各変数を参照するゲッターメソッドを作成
	public int getemplNo() {
		return this.emplNo;
	}

	public String getdepart() {
		return this.depart;
	}

	public String getname() {
		return this.name;
	}

	public int getsalary() {
		return this.salary;
	}
}

/*
変更前
1001
東京部署
あいかわ
100

変更後
1002
大阪部署
いしかわ
200
 */
