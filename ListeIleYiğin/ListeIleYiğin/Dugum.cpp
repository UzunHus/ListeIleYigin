#include "Dugum.h"
#include <cstdlib>//NULL pointer için
using namespace std;

Dugum::Dugum() {
	veri = 0;
	sonrakiPtr = NULL;
}
Dugum::Dugum(int v,Dugum* ptr) {
	veri = v;
	sonrakiPtr = ptr;
}
void Dugum::SetSonrakiPtr(Dugum* ptr) {
	sonrakiPtr = ptr;
}
int Dugum::GetVeri() {
	return veri;
}
Dugum* Dugum::GetSonrakiPtr() {
	return sonrakiPtr;
}
