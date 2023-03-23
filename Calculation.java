import java.util.Arrays;

//Calculationクラス:面積の計算
public class Calculation {

	static double sum = 0;		//変数sumの定義

    static double ssum = 0;	//変数ssumの定義

    //平均
	public double Average(int[] data) {
		for (int i = 0; i < data.length; i++) {
			//値を足していく
			sum += data[i];
        }
		//変数aveに平均値を代入
		double ave = sum / data.length;
		return ave;
	}

	//分散
	public double Distributed(int[] data) {
		for(int i = 0; i < data.length; i++) {
        	//ssumに値を足していく
        	ssum += (data[i] - sum / data.length) * (data[i] - sum / data.length);
        }
		//変数disに分散の値を代入
        double dis = ssum / data.length;
        return dis;
	}

	//標準偏差
	public double StandardDeviation(int[] data) {
		//変数sdに標準偏差の値を代入
		double sd = Math.sqrt(ssum / data.length);
        return sd;
	}

	//最大値
	public int Max(int[] data) {
		int max = data[0];	//変数maxの定義
		//maxに代入されている値と配列の値を比較して、配列の値の方が大きい場合値を上書きする.
		for(int i = 1; i < data.length; i++){
            if(max < data[i]){
            	max = data[i];
            }
        }
        return max;
	}

	//最小値
	public int Min(int[] data) {
        int min = data[0];	//変数minの定義
      //minに代入されている値と配列の値を比較して、配列の値の方が小さい場合値を上書きする.
		for(int i = 1; i < data.length; i++){
            if(min > data[i]){
                min = data[i];
            }
        }
        return min;
	}

	//中央値
	public double Median(int[] data) {
		int med = 0;
        // 昇順ソート
        Arrays.sort(data);

        if ( 0 != ( data.length % 2 ) ) {
        	// 配列の個数が奇数だった場合
        	med = (int)data[data.length / 2];
        }
        else {
        	// 配列の個数が偶数だった場合
        	med = (int)( data[ data.length / 2 - 1] + data[ data.length / 2 ] ) / 2;
        }
        return med;
	}

}

/*
平均値：44.0
偏差：461.0769230769231
標準偏差：21.472701811298062
最大値：119
最小値：20
中央値：39.0
 */