#include "Yigit.h"
#include <cstdlib>//NULL pointer için
#include <iostream>//cout için
using namespace std;

Yigit::Yigit() {
	top = NULL;
}
void Yigit::Push(int v) {
	Dugum* geciciPtr=new Dugum(v,NULL);
	geciciPtr->SetSonrakiPtr(top);
	top = geciciPtr;
}
bool Yigit::BosMu() {
	if (top == NULL)
		return true;
	else
		return false;
}
int Yigit::Top() {
	if (top==NULL)
		cout << "Yigin Bos." << endl;
	else
		return top->GetVeri();
}
int Yigit::Pop() {
	if (top!=NULL) {
		Dugum* geciciPtr = top;
		top = top->GetSonrakiPtr();
		return geciciPtr->GetVeri();
	}
	else
		cout << "Yigin Bos." << endl;
}

