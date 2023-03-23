//AutoDroneクラス：Droneクラスを継承
public class AutoDrone extends Drone {
	//autopilotメソッド
	public void autopilot(){
		System.out.println("自動航行する");
	}
	//takeoffメソッド
	public void takeoff() {
		System.out.println("周囲の安全を確認");
		super.takeoff();
	}
	//landメソッド
	public void land() {
		System.out.println("着地点に戻る");
		System.out.println("周囲の安全を確認");
		super.land();
	}

}

/*
CameraDrone
ドローンを離陸させる
ドローンを操縦する
静止画を撮影する
動画を撮影する
ドローンを着陸させる

AutoDrone
周囲の安全を確認
ドローンを離陸させる
自動航行する
着地点に戻る
周囲の安全を確認
ドローンを着陸させる
 */