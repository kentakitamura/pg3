#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {

	list<const char*>rosen = { "tokyo","kanda","akihabara","okatimati","Ueno","Uguisudani","Nippori","Tabata","Komagoma","Sugamo","Otuka","Ikebukuro","Meguro","Takadanobaba","ShinOkubo","Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu","Meguro","Gotanda","Osaki","shinagawa","Tamati","Hamamatuucho","Shinbashi","Yuurakusho" };

	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end();
		itr++)
	{
		cout << *itr << endl;
	}
	cout << endl;




	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end(); itr++) {
		if (strcmp(*itr, "Nippori") == 0) {

			itr = rosen.insert(itr, "Nishippori");
			++itr;
		}



	}


	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end();
		itr++)
	{
		cout << *itr << endl;

	}

	cout << endl;









	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end(); itr++) {
		if (strcmp(*itr, "Tamati") == 0) {

			itr = rosen.insert(itr, "TakanawaGatewai");
			++itr;
		}



	}


	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end();
		itr++)
	{
		cout << *itr << endl;

	}



	return 0;
}
