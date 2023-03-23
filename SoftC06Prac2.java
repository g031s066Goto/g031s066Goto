//SoftC06Prac2クラス
public class SoftC06Prac2 {
	public static void main(String[] args) {
		//インスタンス生成
		CameraDrone instCD = new CameraDrone();
		AutoDrone instAD = new AutoDrone();

		//メソッド呼び出し
		System.out.println("CameraDrone");
		instCD.takeoff();
		instCD.operate();
		instCD.takePicture();
		instCD.takeVideo();
		instCD.land();
		System.out.println("");
		System.out.println("AutoDrone");
		instAD.takeoff();
		instAD.autopilot();
		instAD.land();
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

