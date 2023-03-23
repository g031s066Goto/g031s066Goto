//CameraDroneクラス：Droneを継承
public class CameraDrone extends Drone{
	//takePictureメソッド
	public void takePicture() {
		System.out.println("静止画を撮影する");
	}
	//takeVideoメソッド
	public void takeVideo() {
		System.out.println("動画を撮影する");
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