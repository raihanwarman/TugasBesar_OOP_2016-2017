#include <algorithm>
#include <string>
#include "Zoo.h"

using namespace std;

Zoo::Zoo(int width, int height):width(width),height(height){

}
Zoo::Zoo(char * fileName){
	    ifstream          file(fileName);
	    string   line;
	    int x;
	    int y = 0;
	    while(std::getline(file, line))
	    {
	        stringstream  lineStream(line);
					char value;

					height = height + 1;
					width = 0; x = 0;

	        // Read an integer at a time from the line
	        while(lineStream >> value)
	        {
				//cout << value << endl;
	            // Add the integers from a line to a 1D array (vector)
                width = width + 1;
                switch(value){
	      			case 'a':
	      					this->InsertCell(Point(x,y), new AirHabitat(Point(x,y)));
	                break;
	            	case 'l':
	        				this->InsertCell(Point(x,y), new LandHabitat(Point(x,y)));
	                break;
	            	case 'w':
	        				this->InsertCell(Point(x,y), new WaterHabitat(Point(x,y)));
	                break;
                case '+':
	        				this->InsertCell(Point(x,y), new Road(Point(x,y)));
	                break;
                case 'R':
	        				this->InsertCell(Point(x,y), new Restaurant(Point(x,y)));
	                break;
                case 'P':
	        				this->InsertCell(Point(x,y), new Park(Point(x,y)));
	                break;
	            case '#':
	        				this->InsertCell(Point(x,y), new Entrance(Point(x,y)));
	                break;
	            case '*':
	        				this->InsertCell(Point(x,y), new Exit(Point(x,y)));
	                break;
	        }
	            x = x + 1;
	        }
	        y = y + 1;
	    }
	    width = x ;
	    height = y;
}

bool Zoo::IsValidPoint(Point p){
	return(p.GetX() >= 0 && p.GetX()< width && p.GetY()>=0 && p.GetY()< height);
}
int Zoo::GetWidth(){
	return width;
}
int Zoo::GetHeight(){
	return height;
}


void Zoo::AddToGroup(Cell *centerCell, Cell * addCell, int id)
{
	if (addCell) // only add if this is a valid cell
		if (addCell->IsSameCell(centerCell))
			if(std::find(partOfGroup.begin(),partOfGroup.end(), addCell) == partOfGroup.end())
					if(std::find(groups[id].begin(), groups[id].end(), addCell) == groups[id].end()) {
						groups[id].push_back(addCell); // add to this specific group, group #id
						partOfGroup.push_back(addCell); // put this cell to global group, so it won't be part of any other group
						Group(addCell, id);
			}
}

void Zoo::Group(Cell *centerCell, int id  )
{
	if(std::find(groups[id].begin(), groups[id].end(), centerCell) == groups[id].end()) // try to find it in current cage first
		if(std::find(partOfGroup.begin(),partOfGroup.end(), centerCell) == partOfGroup.end()) // try to find it whether it's part of any cage
		{
			partOfGroup.push_back(centerCell); // put this cell to global group, so it won't be part of any other group
			groups[id].push_back(centerCell); // put this cell into this cage/
		}
	Point p = centerCell->GetLocation();
	AddToGroup(centerCell, GetUpCell(p), id);
	AddToGroup(centerCell, GetDownCell(p), id);
	AddToGroup(centerCell, GetLeftCell(p), id);
	AddToGroup(centerCell, GetRightCell(p), id);
}

void Zoo::Group() {
	int id = 0;
	groups.resize(height * width);
	vector<Cell *> roadtemp;
	for(int j = 0; j < height; j++){
		for (int i = 0; i < width; ++i) {
			Point p(i,j);
			Cell * a = GetCellAtPoint(p);
			// if(a->GetString() == "+"){
			// 	Group(a, id);
			// 	id++;
			// }
			// else
			Group(a, id);

			if ( groups[id].size() > 0)
			{
				cout <<"Center : (" << i << "," << j << ") part of  Cage/Group # " << id << "(size : "<< groups[id].size() << "), with member(s) Cell : ";
				for(std::vector<Cell*>::iterator it = groups[id].begin(); it != groups[id].end(); ++it) {
						((*it)->GetLocation()).Print();
				}
				cout << endl;
				if ((a->GetString() == "a" || a->GetString() == "w" || a->GetString() == "l") and  groups[id].size() >= 3)
				{
					Cage* c = new Cage(a->GetString());
					c->habitats = groups[id];
					for (int i = 0;  i < c->habitats.size(); i++)  // for all elements "e" in vector v1
     				{
     					//c->habitats[i] = toupper(c->habitats[i]->GetString());
						string b = c->habitats[i]->GetString();
						std::transform(b.begin(), b.end(),b.begin(), ::toupper);
						c->habitats[i]->SetString(b);
					}
					cages.push_back(c);
				}
				if (a->GetString() == "+")
				{
					Route* r = new Route();
					r->roads = groups[id];
					routes.push_back(r);
				}
				id = id + 1;
			}
		}
	}
}
void Zoo::RenderCages(){
	cout << "List of groups : " <<endl;
//	int i = 0;
	for(std::vector<Cage *>::iterator it = cages.begin(); it != cages.end(); ++it) {
			cout << "type of cage : " << ((*it)->name) << " with the member " ;
			vector<Cell *> _habitats = (*it)->habitats;
			for(std::vector<Cell*>::iterator it2 = _habitats.begin(); it2 != _habitats.end(); ++it2) {
					((*it2)->GetLocation()).Print();
			}
			cout << endl;
	}

}


Cell * Zoo::GetCellAtPoint(Point p){
	if(IsValidPoint(p))
		return(pointOfCell.find(p)->second);
	else
		return NULL;
}




Cell * Zoo::GetUpCell(Point p){
	return(GetCellAtPoint(p.GetUp()));
}
Cell * Zoo::GetDownCell(Point p){
	return(GetCellAtPoint(p.GetDown()));
}
Cell * Zoo::GetRightCell(Point p){
	return(GetCellAtPoint(p.GetRight()));
}
Cell * Zoo::GetLeftCell(Point p){
	return(GetCellAtPoint(p.GetLeft()));
}

void Zoo::InsertCell(Point p, Cell *c){
	if(IsValidPoint(p)){
		pointOfCell.insert(make_pair(p, c));
	}
}
void Zoo::RenderZoo(){
	for(int j = 0; j < height; j++){
		for (int i = 0; i < width; ++i)
		{
			RenderZooAt(Point(i,j));
			cout<<" ";
		}
		cout << endl;
	}
}
void Zoo::RenderZooAt(Point p){
	pointOfCell[p]->Render();
}

void Zoo::addAnimal() {
/* 	Mammal mammal;
	Cage* c = new Cage(a->GetString());
	vector<Cell *> temp = groups[id];
	c->animals = temp;
	cages.push_back(c);
 */}

void Zoo::addAnimal(char *fileName) {
	ifstream file(fileName);
	string line;
	int col = 0;
	while(std::getline(file, line))
	{
		stringstream  lineStream(line);
		int value = 0;

		istringstream iss(line);
		string word;

		string animal;
		Point point = Point();
		int isJinak;
		while(iss >> word) {
			switch(col) {
				case 0:
					animal = word;
					col = (col + 1) % 4;
					break;
				case 1:
					value = stoi(word);
					// value = atoi(word.c_str());
					isJinak = value;
					col = (col + 1) % 4;
					break;
				case 2:
					value = stoi(word);
					// value = atoi(word.c_str());
					point.SetX(value);
					col = (col + 1) % 4;
					break;
				case 3:
					value = stoi(word);
					// value = atoi(word.c_str());
					point.SetY(value);
					col = (col + 1) % 4;
					break;
			}
		}
		cout << "final: " << animal << isJinak << point.GetX() << point.GetY() << endl;
		// construct animal
		if(animal == "Cockatoo") {
			Lion lion = Lion(isJinak, point);
			lion.interact();
		}
		else if(animal == "Eagle")
			Eagle(isJinak, point);
		else if(animal == "Flamingo")
			Flamingo(isJinak, point);
		else if(animal == "Owl")
			Owl(isJinak, point);
		else if(animal == "Peacock") {
			Peacock peacock = Peacock(isJinak, point);
			peacock.interact();
		}
		else if(animal == "Turkey")
			Turkey(isJinak, point);
		else if(animal == "Bat") {
			Bat bat = Bat(isJinak, point);
			bat.interact();
		}
		else if(animal == "Chimpanzees")
			Chimpanzees(isJinak, point);
		else if(animal == "Elephant")
			Elephant(isJinak, point);
		else if(animal == "Lion")
			Lion(isJinak, point);
		else if(animal == "Moose")
			Moose(isJinak, point);
		else if(animal == "Rhinoceros")
			Eagle(isJinak, point);
		else if(animal == "Seal")
			Eagle(isJinak, point);
		else if(animal == "Tiger")
			Tiger(isJinak, point);
		else if(animal == "Chamaleon")
			Chamaleon(isJinak, point);
		else if(animal == "Crocodile")
			Crocodile(isJinak, point);
		else if(animal == "Iguana")
			Iguana(isJinak, point);
		else if(animal == "Komodo")
			Komodo(isJinak, point);
		else if(animal == "Snake")
			Snake(isJinak, point);
		else if(animal == "Tortoise")
			Tortoise(isJinak, point);
/* 		// Read an integer at a time from the line
		while(lineStream >> value)
		{
 */			// Add the integers from a line to a 1D array (vector)
	/* 		switch(value){
				case 'a':
					this->InsertCell(Point(x,y), new AirHabitat(Point(x,y)));
					break;
				case 'l':
					this->InsertCell(Point(x,y), new LandHabitat(Point(x,y)));
					break;
				case 'w':
					this->InsertCell(Point(x,y), new WaterHabitat(Point(x,y)));
					break;
				case '+':
					this->InsertCell(Point(x,y), new Road(Point(x,y)));
					break;
				case 'R':
					this->InsertCell(Point(x,y), new Restaurant(Point(x,y)));
					break;
				case 'P':
					this->InsertCell(Point(x,y), new Park(Point(x,y)));
					break;
				case '#':
					this->InsertCell(Point(x,y), new Entrance(Point(x,y)));
					break;
				case '*':
					this->InsertCell(Point(x,y), new Exit(Point(x,y)));
					break;
			}
		} */
	}

}

void Zoo::animalOption() {
}

bool Zoo::isCageFull() {
/* 	int limit = groups[id].size * 0.3;
	if(cages.animalResident < limit)
		return false;
	else
		return true;
 */}
void Zoo::PrintRoad(){
	cout << "Print Route" << endl;
	// int size = routes.size();
	// for (int i = 0; i < routes.size();i++){
	// 	cout << routes[i]->roads.GetLocation()->Print() << endl;
	// }

	for(std::vector<Route *>::iterator it = routes.begin(); it != routes.end(); ++it) {
			vector<Cell *> _habitats = (*it)->roads;
			for(std::vector<Cell*>::iterator it2 = _habitats.begin(); it2 != _habitats.end(); ++it2) {
					((*it2)->GetLocation()).Print();
			}
			cout << endl;
	}
}

void Zoo::CountElmt(){
	// for(std::vector<Cage *>::iterator it = cages.begin(); it != cages.end(); ++it) {
	// 		cout << "type of cage : " << ((*it)->name) << " with the member " ;
	// 		vector<Cell *> _habitats = (*it)->habitats;
	// 		for(std::vector<Cell*>::iterator it2 = _habitats.begin(); it2 != _habitats.end(); ++it2) {
	// 				((*it2)->GetLocation()).Print();
	// 		}
	// 		cout << endl;
	// }
	for(std::vector<Cage *>::iterator it = cages.begin();it != cages.end(); ++it){
		if (((*it)->name) == "a"){
			sumA++;
		}
		else if(((*it)->name) == "l"){
			sumL++;
		}
		else {
			sumW++;
		}
	}
}

int Zoo::getSumA(){
	return sumA;
}

int Zoo::getSumL(){
	return sumL;
}
int Zoo::getSumW(){
	return sumW;
}

void Zoo::createAnimal(){
	cout << "======CREATING ANIMAL=====" << endl;
	for(std::vector<Cage *>::iterator it = cages.begin(); it != cages.end(); ++it) {
		int maxAnim = 0;
		int sumKotak = 0;
		int created = 0;
		sumKotak++;
		created++;
		cout << "type of cage : " << ((*it)->name);
		vector<Cell *> _habitats = (*it)->habitats;
		for(std::vector<Cell*>::iterator it2 = _habitats.begin(); it2 != _habitats.end(); ++it2) {
				sumKotak++;
		}
		maxAnim = floor(sumKotak * 3 / 10);
		cout << " maxAnimal = " << maxAnim << "  with the member ";
		for(std::vector<Cell*>::iterator it2 = _habitats.begin(); it2 != _habitats.end(); ++it2) {
				((*it2)->GetLocation()).Print();

				// cout << "created = " << created  << " , maxAnim = " << maxAnim << endl;
				if (created <= maxAnim){
					Animal *A;
					if (((*it)->name) == "a"){
						Owl *x = new Owl(1, ((*it2)->GetLocation()));
						A = x;
						binatang.push_back(A);
						created++;
					}
					else if(((*it)->name) == "l"){
						Elephant *x = new Elephant(1, ((*it2)->GetLocation()));
						A = x;
						binatang.push_back(A);
						created++;
					}
					else {
						Tortoise *x = new Tortoise(1, ((*it2)->GetLocation()));
						A = x;
						binatang.push_back(A);
						created++;
					}
				}
				// {
				// 	Route* r = new Route();
				// 	r->roads = groups[id];
				// 	routes.push_back(r);
				// }
		}
		cout << endl;
	}
}

void Zoo::printAnimal(){
	cout << "=====PRINTING ANIMAL=====" << endl;
	for(std::vector<Animal* >::iterator it = binatang.begin(); it!= binatang.end();it++){
		cout << "Kode = " << (*it)->getNama() << "  ,  Koordinat = ";
		(*it)->getPoint().Print();
		cout << endl;
	}

  srand(time(NULL));
 // int id = rand() % binatang.size();
 int id = 10;
 cout << "Ukuran = " << binatang.size() << " id = " << id << "Kode = " << binatang[id]->getNama() << "  ,  Koordinat = ";
 binatang[id]->getPoint().Print();
}

bool Zoo::isThereAnimal(Point P){
	bool output =  false;
	for(std::vector<Animal* >::iterator it = binatang.begin(); it!= binatang.end();it++){
		if( P.IsSamePoint((*it)->getPoint()) == true){
			output = true;
		}
	}
	return output;
}

string Zoo::SearchAnimal(Point P){
	// char output = "q";
	string output;
	if (isThereAnimal(P) == true){
		for(std::vector<Animal* >::iterator it = binatang.begin(); it!= binatang.end();it++){
			if( P.IsSamePoint((*it)->getPoint()) == true){
				// output = new char[(*it)->getNama().size() + 1];
				output = (*it)->getNama();
				//std::copy((*it)->getNama().begin(), (*it)->getNama().end(), output);
			}
		}
		return output;
	}
	else{
		return "q";
	}
}

Animal* Zoo::getAnimal(Point P){
	Animal *A;
	for(std::vector<Animal* >::iterator it = binatang.begin(); it!= binatang.end();it++){
		if( P.IsSamePoint((*it)->getPoint()) == true){
			// output = new char[(*it)->getNama().size() + 1];
			A = (*it);
			//std::copy((*it)->getNama().begin(), (*it)->getNama().end(), output);
		}
	}
	return A;
}

void Zoo::moveAnimal(){
	vector<Point > tampung;
	for(std::vector<Cage *>::iterator it = cages.begin(); it != cages.end();it++){
		// cout << "masuk 1" << endl;
		vector<Cell *> _habitats = (*it)->habitats;
    for(std::vector<Cell *>::iterator it2 = _habitats.begin(); it2 != _habitats.end(); ++it2) {
				Point temp = ((*it2)->GetLocation());
					// cout << "masuk 2" << endl;
				if (isThereAnimal((*it2)->GetLocation()) == false){
					tampung.push_back(temp);
				}
		}

		int maxMove = cages.size() * 3 / 10;
		int limitMove = 0;
		// srand(time(NULL));
		// 	int id = rand() % tampung.size();
			// cout << "masuk 3" << endl;
		for(std::vector<Cell *>::iterator it2 = _habitats.begin(); it2 != _habitats.end();it2++){
			// cout << "masuk 4" << endl;
			if (limitMove < maxMove){
				// cout << "masuk 5" << endl;
				if (isThereAnimal((*it2)->GetLocation()) == true){
					// cout << "masuk 6" << endl;
					srand(time(NULL));
				 	int id = rand() % tampung.size();
					while (isThereAnimal(tampung[id]) == true){
						id = rand() % tampung.size();
					}
					getAnimal((*it2)->GetLocation())->setPoint(tampung[id]);
					limitMove++;
				}
			}
		}
		while (!tampung.empty()){
			// output.pop_back();
			tampung.clear();
		}

	}
}

string getStringPoint(Point P){

}
void Zoo::renderAll(){
	copyAll();
	for(int j = 0; j < height; j++){
		for (int i = 0; i < width; ++i)
		{
			// keluaran[Point(i, j)]->Render();
			cout << output[Point(i, j)];
			cout<<" ";
		}
		cout << endl;
	}
	// while (!output.empty()){
	// 	// output.pop_back();
	// 	output.clear();

}


void Zoo::copyAll(){

	while (!output.empty()){
		// output.pop_back();
		output.clear();
	}
	for(int j = 0; j < height; j++){
		for (int i = 0; i < width; ++i)
		{
				// if(isThereAnimal(Point(i, j))){
				// 	keluaran.insert(make_pair(Point(i, j), getAnimal(Point(i, j))));
				// }
				// else {
				// 	keluaran.insert(make_pair(Point(i, j), pointOfCell[Point(i, j)]));
				// }

				if(isThereAnimal(Point(i, j))){
					output.insert(make_pair(Point(i, j), SearchAnimal(Point(i, j))));
					// cout << "Animal di point "<< i << "," << j << " = " << SearchAnimal(Point(i, j) << endl;
				}
				else {
					output.insert(make_pair(Point(i, j), pointOfCell[Point(i, j)]->GetString()   ));
					// cout << "Animal di point "<< i << "," << j << " = " << SearchAnimal(Point(i, j) << endl;
				}
		}
	}
}
