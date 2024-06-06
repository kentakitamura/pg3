#include <stdio.h>
#include <iostream>


template <typename Type>
Type min(Type a, Type b) {


	if (b >= a) {

		return a;
	}
	else
	{

		return b;
	
	}

	return 0;



}

int main() {

	printf("%d\n", min<int>(5,10));
	printf("%d\n", min<float>(11.4f, 51.4f));
	printf("%lf\n", min<double>(11.4, 51.4));

	return 0;

}