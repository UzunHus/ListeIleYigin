#ifndef  DUGUM_H
#define  DUGUM_H
class Dugum {
public:
	Dugum();//varsayýlan yapýcý
	Dugum(int v,Dugum*);
	void SetSonrakiPtr(Dugum*);
	int GetVeri();
	Dugum* GetSonrakiPtr();
private:
	int veri;
	Dugum* sonrakiPtr;//sonraki düðümü iþaret eden pointer
};
#endif // ! DUGUM_H
