#pragma once
#include<vector>
#include<iostream>
#include "manager.h"
using namespace std;
class vec
{
public:
	int total = 0;
	manager* man;
	vec(manager* m);
	~vec();
	int print();
	void add(int a);


private:
	vector<int> v;
};

