#include "vec.h"
#include"manager.h"

vec::vec(manager* m)
{
	man = m;
}

vec::~vec()
{
	
	man->cost -= total;
	
	
}

int vec::print()
{
	int tot = 0;
	for (int ig : v) {
		cout << ig << endl;
		tot += ig;
	}
	cout << tot;
	total = tot;
	return tot;
}

void vec::add(int a)
{
	man->cost -= total;
	v.push_back(a);
	total += a;
	man->cost += total;
}
