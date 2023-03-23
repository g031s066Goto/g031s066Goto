
public class Phone {

	int money = 0;
	int tanka = 0;
	String name;

	public void Call(){
		System.out.println("電話をかける");
		money += tanka;
	}
	public void Receive(){
		System.out.println("呼び鈴が鳴る");
		System.out.println("電話を受ける");
	}
}
