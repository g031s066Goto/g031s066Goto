//Droneクラス
public class Drone {
	//takeoffメソッド
	public void takeoff() {
		System.out.println("ドローンを離陸させる");
	}
	//landメソッド
	public void land() {
		System.out.println("ドローンを着陸させる");
	}
	//operateメソッド
	public void operate() {
		System.out.println("ドローンを操縦する");
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
