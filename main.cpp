#include <stdio.h>
#include <iostream>

/*クラス名「TemplateClass」でクラステンプレート定義*/
{
public:
	TemplateClass(Type number1, Type2 number2) : number1(number1), number2(number2) {}

	Type Min()
	{
		if (number1 < number2)
		{
			return static_cast<Type>(number1);
		}
		else {
			return static_cast<Type2>(number2);
		}
	};
private:
	Type  number1;
	Type2 number2;
};

int main() {

	/*クラス名から型を考えて<>の中を定義しよう*/
	TemplateClass</*?*/, /*?*/> intFloatTemplate(10, 50.0f);
	TemplateClass</*?*/, /*?*/> intDoubleTemplate(80, 13.0);
	TemplateClass</*?*/, /*?*/> floatIntTemplate(2.0f, 9);
	TemplateClass</*?*/, /*?*/> floatDoubleTemplate(11.0f, 3.5);
	TemplateClass</*?*/, /*?*/> doubleIntTemplate(666.0, 333);
	TemplateClass</*?*/, /*?*/> doubleFloatTemplate(435.8, 563.5f);

	std::cout << "int(10)　と float(50.0f) を比べて小さい数字を表す：" << /*?*/.Min() << std::endl;
	std::cout << "int(80)　と double(13.0) を比べて小さい数字を表す：" << /*?*/.Min() << std::endl;
	std::cout << "float(2.0f)　と int(9) を比べて小さい数字を表す：" << /*?*/.Min() << std::endl;
	std::cout << "float(11.0f)　と double(3.5) を比べて小さい数字を表す：" << /*?*/.Min() << std::endl;
	std::cout << "double(666.0)　と int(333) を比べて小さい数字を表す：" << /*?*/.Min() << std::endl;
	std::cout << "double(435.8)　と float(563.5) を比べて小さい数字を表す：" << /*?*/.Min() << std::endl;

	return 0;
}