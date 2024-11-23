# C++ Module 01

## Topics

- メモリ割り当て
- メンバーへのポインタ
- 参照
- switch文

## Exercises
### Exercise 00: BraiiiiiiinnnzzzZ

	•	概要: Zombie クラスを作成します。
	•	プライベート変数 name を持つ。
	•	void announce( void ) メンバー関数で「<名前>: BraiiiiiiinnnzzzZ…」と出力する。
	•	必要な関数:
	1.	Zombie* newZombie( std::string name ):
	•	ヒープ上にゾンビを作成して返す。
	2.	void randomChump( std::string name ):
	•	スタック上にゾンビを作成して自己紹介させる。
	•	目標:
	•	ヒープとスタックのメモリ管理の違いを理解。
	•	ゾンビのデストラクタで名前を表示し、メモリ管理を確認。

Exercise 01: Moar brainz!

	•	概要: zombieHorde 関数を作成します。
	•	複数の Zombie オブジェクトを一括で作成し、名前を初期化する。
	•	必要な関数:
	•	Zombie* zombieHorde( int N, std::string name ):
	•	N個のゾンビを一度に割り当て、先頭へのポインタを返す。
	•	目標:
	•	メモリリークを防ぐ。
	•	大量のオブジェクトを効率よく管理する方法を学ぶ。

Exercise 02: HI THIS IS BRAIN

	•	概要: ポインタと参照の違いを学ぶシンプルなプログラムを作成。
	•	要件:
	•	std::string 型の変数と、それを指すポインタ、参照を使用。
	•	メモリアドレスと値を出力。
	•	目標:
	•	ポインタと参照の基本的な違いを理解。

Exercise 03: Unnecessary violence

	•	概要: Weapon クラスと HumanA・HumanB クラスを作成。
	•	Weapon:
	•	type 変数（文字列型）。
	•	getType() と setType() 関数。
	•	HumanA:
	•	武器をコンストラクタで受け取る。
	•	HumanB:
	•	武器を後から設定できる。
	•	目標:
	•	ポインタと参照の適切な使いどころを考える。
	•	クラス間の依存関係を理解する。

Exercise 04: Sed is for losers

	•	概要: テキストファイルの文字列置換を行うプログラムを作成。
	•	要件:
	•	3つの引数：filename, s1, s2。
	•	filename の内容を filename.replace にコピーしつつ、s1 を s2 に置換。
	•	禁止事項:
	•	std::string::replace の使用は禁止。
	•	目標:
	•	ファイル操作の基礎を学ぶ。
	•	エラーハンドリングを適切に実装する。

Exercise 05: Harl 2.0

	•	概要: Harl クラスを作成し、4つのログレベルでメッセージを出力。
	•	DEBUG, INFO, WARNING, ERROR のレベル。
	•	void complain( std::string level ):
	•	ログレベルに応じて対応するメンバー関数を呼び出す。
	•	目標:
	•	メンバー関数へのポインタを活用。
	•	冗長な if/else 文を避ける実装方法を学ぶ。

Exercise 06: Harl filter

	•	概要: Harl のログをフィルタリングするプログラムを作成。
	•	要件:
	•	コマンドライン引数でログレベルを指定し、それ以上のレベルのログを出力。
	•	無効な引数の場合はエラーメッセージを表示。
	•	目標:
	•	switch 文の実践。
	•	コマンドライン引数処理の基本を学ぶ。

全体の注意点

	1.	C++98 スタンダードを使用:
	•	最新の C++ 機能（C++11以降）は使用禁止。
	•	STL（vector や map）も禁止（Module 08, 09 で解禁）。
	2.	メモリリークを防ぐ:
	•	new を使用する場合は、必ず delete を忘れずに。
	3.	クラス設計のルール:
	•	関数の実装は .cpp ファイルに記述。
	•	ヘッダーにはインクルードガードを追加。
	4.	ファイル命名規則:
	•	クラス名に合わせたファイル名（例: Zombie.hpp, Zombie.cpp）。

次のステップ

最初の課題（Exercise 00: BraiiiiiiinnnzzzZ）から順に進めるのが良いでしょう。どこから始める予定か教えてください！😺

---


          •	概要: Zombie クラスを作成します。
          •	プライベート変数 name を持つ。
          •	void announce( void ) メンバー関数で「<名前>:
     BraiiiiiiinnnzzzZ…」と出力する。 •
	必要な関数: 1.	 •	ヒープ上にゾンビを作成して返す。 2.	void
     randomChump( std::string name ): •
     スタック上にゾンビを作成して自己紹介させる。 •	目標: •
     ヒープとスタックのメモリ管理の違いを理解。 •
     ゾンビのデストラクタで名前を表示し、メモリ管理を確認。

/*
First, implement a Zombie class. It has a string private attribute name.
Add a member function void announce( void ); to the Zombie class. Zombies
announce themselves as follows:
<name>: BraiiiiiiinnnzzzZ...
Don’t print the angle brackets (< and >). For a zombie named Foo, the message
would be:
Foo: BraiiiiiiinnnzzzZ...
Then, implement the two following functions:

• Zombie* newZombie( std::string name );
It creates a zombie, name it, and return it so you can use it outside of the
function scope.

• void randomChump( std::string name ); It creates a zombie,
name it, and the zombie announces itself. Now, what is the actual point of the
exercise? You have to determine in what case it’s better to allocate the zombies
on the stack or heap. Zombies must be destroyed when you don’t need them
anymore. The destructor must print a message with the name of the zombie for
debugging purposes.
5
 */
