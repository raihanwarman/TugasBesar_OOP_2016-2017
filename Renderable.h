#ifndef RENDERABLE_H
#define RENDERABLE_H

#include <iostream>
#include <string>
using namespace std;

class Renderable{
	public:
		virtual string GetString(){return s;}
		virtual void SetString(string _s){s = _s;}
		virtual void Render(){cout<<GetString();}
	protected:
		string s;
};
#endif
