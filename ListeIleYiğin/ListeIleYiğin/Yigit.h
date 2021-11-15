#ifndef YIGIT_H
#define YIGIT_H
#include "Dugum.h"
class Yigit {
public:
	Yigit();
	void Push(int v);
	int Top();
	int Pop();
	bool BosMu();
private:
	Dugum* top;
};
#endif