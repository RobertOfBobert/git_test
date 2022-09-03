#pragma once
#include<vector>
#include<iostream>
#include "manager.h"
using namespace std;
class vec
{
public:
	int total = 0;
	manager* man;//manager refrence object
	vec(manager* m);//constructor
	~vec();//destructor
	int print();
	void add(int a);//adds integer to vector


private:
	vector<int> v;
};

