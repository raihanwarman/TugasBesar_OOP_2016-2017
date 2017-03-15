#include "Zoo.h"
// #include <unistd>
#include <time.h>
#include <pthread.h>
#include <unistd.h>

using namespace std;



int main(){
	vector<Habitat > habitats;
	Zoo *zoo = new Zoo((char *)"zoo.txt");
	zoo->RenderZoo();
	zoo->Group();
	zoo->RenderCages();
	zoo->addAnimal((char*)"Animal.txt");
	zoo->RenderZoo();
	zoo->PrintRoad();
	zoo->CountElmt();
	cout << "A = " << zoo->getSumA() << ", L = " << zoo->getSumL() << ", W = " << zoo->getSumW() << endl;
	zoo->createAnimal();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	zoo->printAnimal();
	cout << endl;
	cout << endl;
	Point P(2, 0);
	Point X(4, 0);
	cout << "binatang di (2, 0) ? " << zoo->SearchAnimal(P) << endl;
	cout << "binatang di (4, 0) ? " << zoo->SearchAnimal(X) << endl;


	// string s = "abcdefg";
	// char m = s.at(2);
	// cout << s << " & " << s.find('c') << " & " << m << endl;
	int temp = 0;
	while (1 > 0){
		system("clear");
		zoo->renderAll();
		cout << "iterasi ke = " << temp << endl;
		// zoo->printAnimal();
		// cout << "DEBUG 1" << endl;
		zoo->moveAnimal();
		// cout << "DEBUG 2" << endl;
		usleep(500000);
		// zoo->printAnimal();
		// cout << "DEBUG 1" << endl;
		// zoo->moveAnimal();
		// cout << "DEBUG 2" << endl;

		temp++;
	}

  return 0;

}
