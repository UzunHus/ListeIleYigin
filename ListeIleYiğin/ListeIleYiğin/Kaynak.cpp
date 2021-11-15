#include <iostream>
#include "Yigit.h"
using namespace std;

int main() {
	Yigit* geciciPtr;
	geciciPtr = new Yigit;
	if (geciciPtr->BosMu())
		cout << "Yigin Bos." << endl;
	geciciPtr->Push(61);
	geciciPtr->Push(25);
	cout << "Yiginin ilk elemani = " << geciciPtr->Pop() << endl;
	geciciPtr->Push(61);
	geciciPtr->Push(45);
	cout << "Yiginin ilk elemani = " << geciciPtr->Pop() << endl;
	cout << "Yiginin ilk elemani = " << geciciPtr->Pop() << endl;
	cout << "Yiginin ilk elemani = " << geciciPtr->Top() << endl;
	cout << "Yiginin ilk elemani = " << geciciPtr->Pop() << endl;
	if (geciciPtr->BosMu())
		cout << "Yigin Bos." << endl;
	return 0;
}