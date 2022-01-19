# プログラミング言語別のswitch

## 初めに
言語別のswitchの違いについて[Qiitaの記事](https://qiita.com/ryoEast/items/5140f5e46f81ca5e9c49 "Qiita記事")を書くために
作成したプログラム

## 言語とバージョン
| 言語     | version      | それぞれのswitch |
|:-------:|:------------:|:---------------:|
| python  | 3.10.0       | match           |
| C(gcc)  | 13.0.0       | switch          |
| Ruby    | 2.6.5        | case when       |
| Ruby    | 3.0.0        | case in         |
| VBA     | 16.56        | Select Case     |

## 処理

色で英語の文字列を日本語で出力
- 変数名：color
- colorが"red"の場合、出力は"赤"
- colorが"white"か"black"の場合、出力は"パンダの色"（複数条件）
