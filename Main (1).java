import java.util.Arrays;

//main:変数の値を表示
public class Main {
	//メインメソッド
	public static void main(String[] args) {

		int[] data = { 30, 72, 45, 20, 30, 30, 38, 50, 119, 37, 48, 47, 67,
						75, 30, 20, 47, 30, 70, 33, 40, 20, 30, 46, 30, 40 };

		//変数sumの定義
        double sum = 0;
        //変数ssumの定義
        double ssum = 0;

        //平均
        for (int i = 0; i < data.length; i++) {
        	//sumに値を足していく
        	sum += data[i];
        }
        System.out.println("平均値：" + sum / data.length);	//平均値の出力

        //分散
        for(int i = 0; i < data.length; i++) {
        	//ssumに値を足していく
        	ssum += (data[i] - sum / data.length) * (data[i] - sum / data.length);
        }
        double variance = ssum / data.length; //変数varianceの定義
        System.out.println("分散：" + variance);	//varianceの出力

        //標準偏差
        double sd = Math.sqrt(variance);	//変数sdを定義し、varianceの平方根を返す
        System.out.println("標準偏差：" + sd);

        //最大値・最小値
        int max = data[0];	//変数maxの定義
        int min = data[0];	//変数minの定義

        //maxに代入されている値と配列の値を比較して、配列の値の方が大きい場合値を上書きする.
        for(int i = 1 ; i < data.length; i++){
            if(max < data[i]){
                max = data[i];
              //minに代入されている値と配列の値を比較して、配列の値の方が小さい場合値を上書きする.
                }else if(min > data[i]){
                	min = data[i];
                }
        }
        System.out.println("最大値：" + max);	//maxの出力
        System.out.println("最小値：" + min);	//minの出力


        //中央値
        int median = 0;	//変数medianの定義
        // 昇順ソート
        Arrays.sort(data);

        if ( 0 != ( data.length % 2 ) ) {
        	// 配列の個数が奇数だった場合
        	median = (int)data[data.length/2];
        }
        else {
        	// 配列の個数が偶数だった場合
        	median = (int)( data[ data.length / 2 - 1 ] + data[ data.length / 2 ] ) / 2;
        }
        System.out.println("中央値：" + median);	//medianの出力
    }
}

/*
平均値：44.0
分散：461.0769230769231
標準偏差：21.472701811298062
最大値：119
最小値：20
中央値：39
 */