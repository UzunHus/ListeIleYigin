#ifndef  DUGUM_H
#define  DUGUM_H
class Dugum {
public:
	Dugum();//varsay�lan yap�c�
	Dugum(int v,Dugum*);
	void SetSonrakiPtr(Dugum*);
	int GetVeri();
	Dugum* GetSonrakiPtr();
private:
	int veri;
	Dugum* sonrakiPtr;//sonraki d���m� i�aret eden pointer
};
#endif // ! DUGUM_H
