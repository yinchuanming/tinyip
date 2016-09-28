# tinyip
TOPPERS/ASP Kernelを載せたGR-PEACH（マイコンボード）上で動くプロトコルスタックです。

ネットワークの勉強がてら遊びで作っているので、手抜きなところやまずい部分が多々あると思われます..
そのため実用には向きませんのでご注意ください。
なお、下のリンクのTOPPERS/ASP KernelにはlwipというTCP/IPプロトコルスタックが付属しています。ですから、要するに車輪の再発明です。

プロトコルスタックの実装についてちゃんと勉強してやってるわけではないので、あんまり参考にしないほうがいいと思います（「じゃあ公開する意味はあるのか」と言われそうですが...）。

# 実装したもの
* ARP
  - リクエストに対する応答
  - リクエスト送信、アドレス解決ができるまでIPパケット送信の保留
* IP
  - フラグメント分割と組み立て（タイムアウト付き）
  - 宛先が同一ネットワークでなければデフォルトゲートウェイへ転送
* ICMP
  - エコー要求に対する応答のみ
* UDP
  - 受信したUDPデータグラムのキューイング
  - ソケット風APIで送受信
* SNTPクライアント
  - UDP通信のテストとして書きました
* TCP
  - 再送
  - スライディング・ウィンドウ
  - 遅延ACK
* Webサーバ
  - GETを受けたらデータを送るだけの、最低限のもの

Ethernetコントローラの制御には、mbedのEthernetコントローラドライバを利用しています。


# コンパイル
以下のGR-PEACH版TOPPERS/ASP Kernel(mbed/Arduinoライブラリ付属)をダウンロードします。

https://github.com/ncesnagoya/asp-gr_peach_gcc-mbed

exampleディレクトリがあるので、その中にtinyipを置きます。
memo.txtにしたがって、ASPカーネルのMakefileとヘッダファイルの修正を行ってください。

~~~
make depend; make
~~~
でコンパイルできます。正常にコンパイルができたらasp.binが生成されるので、これをマイコンに転送してください。

# 参考書籍
* RFC(1122,791,792,793,826,768,815あたり)
* 基礎から分かるTCP/IPネットワーク実験プログラミング(村山公保,オーム社)
* 詳解TCP/IP Vol.1 プロトコル(W・リチャード・スティーヴンス,ピアソン・エデュケーション)
* コンピュータネットワーク 第5版(アンドリュー・S・タネンバウム,デイビッド・J・ウエザロール,日経BP)
* Interface連載 パケットづくりではじめるネットワーク入門(坂井弘亮,CQ出版社)
* 本当の基礎からのWebアプリケーション入門---Webサーバを作ってみよう(http://kmaebashi.com/programmer/webserver/)
* TCP詳説(西田佳史,https://www.nic.ad.jp/ja/materials/iw/1999/notes/C3.PDF)
* TOPPERS新世代カーネル統合仕様書(https://mitsut.github.io/toppers_kernel_spec/)

# License
* Unlicense(Public Domain)
