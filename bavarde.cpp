#include <iostream>
using namespace std;



// --------------- Classe Bavarde ----------------
class Bavarde {
	private:
		int n;
	
	public:
		Bavarde(int);
		~Bavarde();
		int getN();
		void afficher();

} bizarre(1);

// --------------- Classe Couple -----------------
class Couple {
	private:
		Bavarde b1;
		Bavarde b2;
	public:
		Couple(int,int);
		~Couple();
};

// ------------- Classe Famille ------------------
class Famille {
	private:
		Bavarde * arrayBavarde;
	public:
		Famille(int);
};

// ------------- Implémentation Bavarde -------------
Bavarde::Bavarde(int a=0){
	n = a;
	cout << "construct Bavarde object " << n << endl;
}
Bavarde::~Bavarde(){
	cout << "destruct Bavarde object " << n << endl;
}
int Bavarde::getN(){
	return n;
}
void Bavarde::afficher(){
	cout << "Affichage de " << n << endl;
}

// --------------- Implémentation Couple ---------
Couple::Couple(int nb1=0, int nb2=0){
	b1 = Bavarde(nb1);
	b2 = Bavarde(nb2);
	
	cout << "Construct object Couple" << endl;
}
Couple::~Couple(){
	cout << "Destruct object Couple" << endl;
}

// -------------- Implémentation Famille ---------
Famille::Famille(int nb=0){
	arrayBavarde = new Bavarde[nb];
}

// ---------------------------------------
Bavarde globale(2);

void fonction(Bavarde b) {
  cout << "code de la fonction" << endl;
}

int main(int, char **)
{
  Couple c(4,5);

  return 0;
}

