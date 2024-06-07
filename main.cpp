#include <iostream>
using namespace std;


// 自作クラス
class MyClass {
public:
	void Update();

	void Func1();
	void Func2();
	void Func3();

	// メンバ関数ポインタのテーブル
	static void (MyClass::* table[])();

private:
	// メンバ関数ポインタのテーブルを参照するインデックス
	int index = 0;
};

void MyClass::Func1() {
	cout << "敵の接近！" << endl;
}

void MyClass::Func2() {
	cout << "敵の攻撃！" << endl;
}

void MyClass::Func3() {
	cout << "敵の後退！" << endl;
}

void MyClass::Update() {

	// 関数ポインタのテーブルから関数を実行
	(this->*table[index])();

	if (/*スペース押された？*/) {
		/*敵の状態（関数ポインタ配列のインデックス）を+1*/
		/*インデックスが配列の最後の要素なら他の値を入れる*/
	}
}

// staticで宣言したメンバ関数ポインタテーブルの実体
void (MyClass::* MyClass::table[])() = {
  &MyClass::Func1, // インデックス番号0
  &MyClass::Func2, // インデックス番号1
  &MyClass::Func3,  // インデックス番号2
};


int main()
{
	MyClass my;

	my.Update();

	return 0;
