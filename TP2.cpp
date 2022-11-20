#include <iostream>
using namespace std;


int Exo_trois() 
{
	int taille;
	int i;
	cout<<"Quel taille pour le tab"<<endl;
	cin>>taille;
	
	float * montab = new float[taille];

	
	for (i=0;i<taille;i++)
	{
	cout<<"indiquer la valeur de tab["<<i<<"]"<<endl;
	cin>>montab[i];cout<<endl;
	}
	
	for (int i = 0;i<taille;i++)
	{
	cout<<montab[i]<<endl;
	}
	
	cout<<"adresse tab "<<(long int) &montab<<endl;
	
	delete [] montab;
	
	for (int i = 0;i<taille;i++)
	{
	cout<<montab[i]<<endl;
	}
	
	cout<<"adresse tab "<<(long int) &montab<<endl;
	
	

	return 0;
	
}

struct Vecteur3D
	{
	float x,y,z;
	};

void Vecteur3DAfficher(Vecteur3D V1)
{	
	cout<<"("<<V1.x<<","<<V1.y<<","<<V1.z<<")"<<endl;
}

int exo5()
{
	
	int taille = 3;
	
	Vecteur3D tabVecteurPile[taille];
	Vecteur3D * tabVecteurTas = new Vecteur3D[taille];
	
	for (int i = 0; i<taille;i++)
	{
	tabVecteurPile[i].x=(rand()%201)+(-100);
	tabVecteurPile[i].x=tabVecteurPile[i].x/10;
	tabVecteurPile[i].y=(rand()%201)+(-100);
	tabVecteurPile[i].y=tabVecteurPile[i].y/10;
	tabVecteurPile[i].z=(rand()%201)+(-100);
	tabVecteurPile[i].z=tabVecteurPile[i].z/10;
	
	tabVecteurTas[i].x=tabVecteurPile[i].x;
	tabVecteurTas[i].y=tabVecteurPile[i].y;
	tabVecteurTas[i].z=tabVecteurPile[i].z;
	
	}
	
	for (int i = 0; i<taille;i++)
	{
	cout<<"-----------------------"<<endl;
	cout<<"Vec "<<i+1<<": ("<<tabVecteurPile[i].x<<","<<tabVecteurPile[i].y<<","<<tabVecteurPile[i].z<<")"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"Vec "<<i+1<<": ("<<tabVecteurTas[i].x<<","<<tabVecteurTas[i].y<<","<<tabVecteurTas[i].z<<")"<<endl;
	}
	cout<<"-----------------------"<<endl;
	
	cout<<"taille TabPile "<<sizeof(tabVecteurPile)<<endl;
	cout<<"taille TabTas "<<sizeof(tabVecteurTas)<<endl;
	
	cout<<"adresse TabPile 1er element "<<(long int) &tabVecteurPile<<endl;
	cout<<"adresse TabTas 1er element "<<(long int) &tabVecteurTas<<endl;
	
	//for (int j = 0; j<3; j++)
	//{
	//cout<<"adresse TabPile 1er element "<<(long int) &tabVecteurPile[j].x<<endl;
	//cout<<"adresse TabTas 1er element "<<(long int) &tabVecteurTas[j].x<<endl;
	//cout<<"adresse TabPile 2eme element "<<(long int) &tabVecteurPile[j].y<<endl;
	//cout<<"adresse TabTas 2eme element "<<(long int) &tabVecteurTas[j].y<<endl;
	//cout<<"adresse TabPile 3eme element "<<(long int) &tabVecteurPile[j].z<<endl;
	//cout<<"adresse TabTas 3eme element "<<(long int) &tabVecteurTas[j].z<<endl;
	//}

	Vecteur3DAfficher(*(tabVecteurPile+2));	
	
	tabVecteurPile[0].x=&tabVecteurTas[1]-&tabVecteurTas[3];
	cout<<tabVecteurPile[0].x<<endl;
	
	float x = (long int) &tabVecteurPile[0].x;
	float y = (long int) &tabVecteurTas[1].y;
	float z = (long int) &tabVecteurTas[2].z;
	cout<<x<<endl;
	x=y-z;
	cout<<x<<endl;
	
	return 0;
}

void procedureAvecpointeur(int * ptr)
{

}

void procedureAvecreference(int & rf)
{
}

void procedureAvecInt(int val)
{
}

int main()
{
	int x = 1;
	int & rx = x;
	int * px = &x;
	
	cout<<x<<endl;
	cout<<"adresse x"<<(long int) &x<<endl;
	cout<<rx<<endl;
	cout<<"adresse y"<<(long int) &rx<<endl;
	cout<<px<<endl;
	cout<<"adresse z"<<(long int) &px<<endl;
	 
	return 0;
}
