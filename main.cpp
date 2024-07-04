#include <stdio.h>

class zukei
{
public:
	virtual void aa() = 0;
	virtual void aa() = 0;

protected:
	float size;
	float radius;
};

class en :public zukei
{
public:
	void Size();
	void Draw() { printf("面積 %f\n", size); };
};

class sikaku :public zukei
{
public:
	void Size() override;
	void Draw() { printf("面積 %f\n", size); };
};

void zukei::Size() {}

void en::Size()
{
	radius = 5.0f;
	printf("円の半径 %f\n", radius);
	size = radius * radius * 3.14f;
}


void sikau::Size()
{
	radius = 5.0f;
	printf("矩形の半径 %f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}

int main(void) {

	zukei *ishape[2] = { new en ,new sikaku };

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];

	return 0;