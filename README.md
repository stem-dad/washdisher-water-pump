## 食洗機用自動水ポンプマシーン

<a href="https://github.com/stem-dad/washdisher-water-pump/blob/master/docs/device.jpg?raw=true"><img src="https://github.com/stem-dad/washdisher-water-pump/blob/master/docs/device.jpg?raw=true" width="360"></a>
<a href="https://github.com/stem-dad/washdisher-water-pump/blob/master/docs/pump.jpg?raw=true"><img src="https://github.com/stem-dad/washdisher-water-pump/blob/master/docs/pump.jpg?raw=true" width="360"></a>

<a href="https://photos.app.goo.gl/CMXhv62AGuqyXGTGA">Movie</a>

### 回路図

![](https://github.com/stem-dad/washdisher-water-pump/blob/master/docs/circuit.jpg?raw=true)

### BOMリスト

| パーツ名    | 型番         | リンク       | 個数         | 備考         |
|:-----------|:------------|:------------|:------------|:------------|
|水ポンプ     | QR50C       |[Aliexpress](https://www.aliexpress.com/item/Decdeal-Ultra-quiet-Mini-Brushless-DC-USB-Water-Pump-5-12V-5-10W-250-400L-H/32956107528.html?channel=twinner)|1|DC12V/5Wだけど、手元にあったのは15VのACアダプタだったのでPWMで出力調整|
|Arduino|A-Star 328PB Micro - 3.3V/12MHz|[Switch Science](https://www.switch-science.com/catalog/3713/)|1|5Vのものでも普通のArduino UNOでもなんでも可|
|ACアダプタ15V1.2A|AD-E150P120|[秋月](http://akizukidenshi.com/catalog/g/gM-08306/)|1|12Vのほうが良い|
|２．１ｍｍ標準ＤＣジャック|-|[秋月](http://akizukidenshi.com/catalog/g/gC-09408/)|1||
|距離センサ(ToF) |GY-530 VL53L0X|[Aliexpress](https://www.aliexpress.com/item/GY-530-VL53L0X-World-smallest-Time-o-f-Flight-ToF-laser-ranging-sensor/32738458924.html)|1|水位確認用|
|Nch FET| EKI04027|[秋月](http://akizukidenshi.com/catalog/g/gI-08452/)|1|水ポンプモータ駆動用|
|タクトスイッチ|-|[秋月](http://akizukidenshi.com/catalog/g/gP-03647/)|1|起動用|