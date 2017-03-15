#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <vector>
#include <fstream>
#include <sstream>

#include "AirHabitat.h"
#include "Cell.h"
#include "Facility.h"
#include "Habitat.h"
#include "LandHabitat.h"
#include "Park.h"
#include "Point.h"
#include "Renderable.h"
#include "Road.h"
#include "Restaurant.h"
#include "WaterHabitat.h"
#include "Visitor.h"
#include "zoo.h"

using namespace std;

void start(Zoo * zoo){
	int option;

	for (int j = 0; j < zoo->GetHeight(); ++j)
	{
		/* code */
		for (int i = 0; i < zoo->GetWidth(); ++i)
		{
			/* code */
			cout<<"What do you want to build on point ("<<i<<","<<j<<") ?"<<endl;
			cout<<"1. Air Habitat"<<endl;
			cout<<"2. Land Habitat"<<endl;
			cout<<"3. Water Habitat"<<endl;
			cout<<"4. Road"<<endl;
			cout<<"5. Restaurant"<<endl;
			cout<<"6. Park"<<endl;
			cout<<"Your option: ";
			cin>>option;
			switch(option){
				case 1: {
					zoo->InsertCell(Point(i,j), AirHabitat());
					zoo->RenderZooAt(Point(i,j));
					cout<<endl;
				}
				break;
				case 2:{
					zoo->InsertCell(Point(i,j), LandHabitat());
					zoo->RenderZooAt(Point(i,j));
					cout<<endl;
				}
				break;
				case 3:{
					zoo->InsertCell(Point(i,j), WaterHabitat());
					zoo->RenderZooAt(Point(i,j));
					cout<<endl;
				}
				break;
				case 4:{
					zoo->InsertCell(Point(i,j), Road());
					zoo->RenderZooAt(Point(i,j));
					cout<<endl;
				}
				break;
				case 5:{
					zoo->InsertCell(Point(i,j), Restaurant());
					zoo->RenderZooAt(Point(i,j));
					cout<<endl;
				}
				break;
				case 6:{
					zoo->InsertCell(Point(i,j), AirHabitat());
					zoo->RenderZooAt(Point(i,j));
					cout<<endl;
				}
				break;
				default:{
					cout<<"Wrong option!"<<endl;
					i--;
				}
			}
		}
	}
}

int main(){
	int width,height;
	cout<<"Enter Virtual Zoo size"<<endl;
	cout<<"Width: ";
	cin>>width;
	cout<<"Height: ";
	cin>>height;
	Zoo * zoo = new Zoo(width, height);
	// start(zoo);
	// cout<<"This is your virtual zoo: "<<endl;
	// zoo->RenderZoo();
	return 0;
}