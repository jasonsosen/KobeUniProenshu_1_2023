# 2022年度 プログラミング演習 1 用レポジトリ

## gitPod の使い方

詳しい話は、[こちら](https://kobeucsenshu.github.io/ideinfo/index.html)の GitPod の項目ををみてください。
以下、コンパイルの仕方などだけ、簡単にまとめます。


## 課題

課題は、`2kaime, 3kaime` など、講義の回数に応じたフォルダが順次生成されていく予定です。
[こちら](https://kobeucsenshu.github.io/ideinfo/gitpod/howto.html#repository-)をみて、最新情報を repository から取得してください。


## プログラムの実行

プログラムの実行（ターミナル）

1. 画面右下にターミナルがでていると思いますが、無い場合は、`Terminal` -> `New Terminal` でターミナルが開きます。
2. あとは、gcc なりでコンパイルして、実行してみましょう。
3. 以下は、`samples` directory の `hello.c` をコンパイルして実行した例

```
gitpod /workspace/podTest $ cd samples
gitpod /workspace/podTest/samples $ ls
hello.c
gitpod /workspace/podTest/samples $ gcc hello.c 
gitpod /workspace/podTest/samples $ ./a.out 
Hello World!
gitpod /workspace/podTest/samples $ 
```

プログラムの実行（GUI操作）

1. `samples/hello.c` を開いてください。`samples` をクリックすると、directory の中のファイルも見えるはず。
2. 実行対象プログラムを Editor 上で選択した状態(`hello.c`選択）で、"Terminal"->"Run Build Task.." でコンパイル可能。選択肢が出ますので、`build gcc`をえらびましょう。同じ directory に `hello` ができれば成功
   * `注1`: 違うファイルを選択していると、コンパイルできません。
   * `注2`: explorer 側で選択するだけでなく、エディタのフォーカスがあっている必要があるようです。
3. `Debug`->`Start Debugging` でデバッグ開始


## 中身のファイルの解説

* .theia
  * tasks.json: Build の選択肢設定, `よくわからない場合は、編集しないように`
  * launch.json: プログラム起動の選択肢設定, `よくわからない場合は、編集しないように`
* samples
  * hello.c: 
  * 別にプログラムファイルはお好きな場所に。
* kadai2, ...
  * 各課題のためのファイル等が、後日 directory 毎に配置される予定です。皆さんは、`kadai` で始まるファイルなどを直下に配置しないようにお願いします。

* README.md: このファイル。こちらも皆さんは編集しないようにしましょう。
* .gitpod.Dockerfile, .gitpod.yml: 実行環境の docker 設定および extension 設定。`よくわからない場合は、編集しないように`。 (参考：[C/C++](https://www.gitpod.io/docs/languages/cpp/), [.gitpod.yml](https://www.gitpod.io/docs/config-gitpod-file/))

