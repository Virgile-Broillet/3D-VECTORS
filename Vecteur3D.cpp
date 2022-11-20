#include <iostream>
#include <math.h>
using namespace std;

struct Vecteur3D
{
	float x,y,z;
};

float Vecteur3DGetNorme(Vecteur3D V1)
{
	return(sqrt((V1.x*V1.x)+(V1.y*V1.y)+(V1.z*V1.z)));
}

void Vecteur3DNormaliser(Vecteur3D V1)
{
	float norme = Vecteur3DGetNorme(V1);
	
	V1.x=V1.x/norme;
	V1.y=V1.y/norme;
	V1.z=V1.z/norme;
}

bool Vecteur3DEstNormalise(Vecteur3D V1)
{
	if((V1.x+V1.y+V1.z)==1){return true;}
	else {return false;}
}

Vecteur3D Vecteur3DAdd(Vecteur3D V1, Vecteur3D V2)
{
	Vecteur3D Vsomme;
	Vsomme.x=V1.x+V2.x;
	Vsomme.y=V1.y+V2.y;
	Vsomme.z=V1.z+V2.z;
	
	return Vsomme;
}

void Vecteur3DAfficher(Vecteur3D V1)
{
	cout<<"("<<V1.x<<","<<V1.y<<","<<V1.z<<")"<<endl;
}

void Vecteur3DRemplirTabVecteurs(Vecteur3D * Tab, int taille)
{
	for (int i = 0; i<taille;i++)
	{
	Tab[i].x=(rand()%201)+(-100);
	Tab[i].x=Tab[i].x/10;
	Tab[i].y=(rand()%201)+(-100);
	Tab[i].y=Tab[i].y/10;
	Tab[i].z=(rand()%201)+(-100);
	Tab[i].z=Tab[i].z/10;
	
	}
}

void Vecteur3DAfficherTabVecteur(Vecteur3D * Tab, int taille)
{
	for (int i = 0; i<taille;i++)
	{
	cout<<"-----------------------"<<endl;
	cout<<"Vec "<<i+1<<": ("<<Tab[i].x<<","<<Tab[i].y<<","<<Tab[i].z<<")"<<endl;
	}
	cout<<"-----------------------"<<endl;
}

int Vecteur3DMaxTabVecteurs(Vecteur3D * Tab, int taille)
{
	float t = 0;
	int VMAX = Vecteur3DGetNorme(Tab[0]);
	
	for(int i = 1; i<taille; i++)
	{
	t = Vecteur3DGetNorme(Tab[i]);
	if (t > VMAX)
	{
	VMAX=t;
	}
	
	}
	cout<<VMAX<<endl;
	return VMAX;
}

int main () {

	Vecteur3D montab[4];
	Vecteur3DRemplirTabVecteurs(montab, 4);
	Vecteur3DAfficherTabVecteur(montab, 4);
	Vecteur3DMaxTabVecteurs(montab, 4);
	
	cout<<"Taille tableau: "<<sizeof(montab);
	
	return 0;
}
