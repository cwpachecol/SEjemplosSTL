#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

class Persona {
public:
	string idPersona;
	string nombre;
	int edad;
	float ingresoMensual;
	virtual void mostrar() = 0;
};

class Jugador : public Persona {
public:
	int numeroCamisola;
	string posicion;

	void mostrar() override {
		cout << posicion << endl;
	}
};


class Responsable : public Persona {
public:
	string cargo;
	int nivelJerarquico;

	void mostrar() override {
		cout << cargo << endl;
	}
};


int main() {

	Jugador* Juan = new Jugador();
	Jugador* Pedro = new Jugador();
	Responsable* Maria = new Responsable();
	Responsable* Julieta = new Responsable();

	Juan->idPersona = "78658323";
	Juan->nombre = "Juan de Dios Nava Quiroga";
	Juan->edad = 31;
	Juan->ingresoMensual = 4000.5f;
	Juan->numeroCamisola = 7;
	Juan->posicion = "Volante de contencion";

	Pedro->idPersona = "44458332";
	Pedro->nombre = "Peter Jhonatan Lujan Peredo";
	Pedro->edad = 22;
	Pedro->ingresoMensual = 2340.2f;

	Maria->idPersona = "2345123";
	Maria->nombre = "Maria Violeta Portugal Benegas";
	Maria->edad = 20;
	Maria->ingresoMensual = 2000.0f;
	Maria->cargo = "Contador";

	Julieta->idPersona = "112376";
	Julieta->nombre = "Julia Roberta Iñiguez Beltran";
	Julieta->edad = 18;
	Julieta->ingresoMensual = 1340.8f;
	Julieta->nivelJerarquico = 2;

	vector<Persona*> grupo1;

	//Persona* paux = Persona*


	grupo1.push_back(((Persona*)Juan));
	grupo1.push_back(((Persona*)Julieta));

	//vector<Persona*> grupo2;
	//grupo2.push_back(Juan);
	//grupo2.push_back(Maria);
	//grupo2.push_back(Pedro);

	//vector<Persona*> grupo3;
	//grupo3.push_back(Pedro);
	//grupo3.push_back(Maria);

	//vector<Persona*> grupo4;
	//grupo4.push_back(Julieta);
	//grupo4.push_back(Maria);

	//vector<Persona*> grupo5;
	//grupo5.push_back(Juan);
	//grupo5.push_back(Pedro);

	vector<vector<Persona*>> vectorGrupos;

	vector<list<map<int, Persona>>> conte_loco;

	vectorGrupos.push_back(grupo1);
	//vectorGrupos.push_back(grupo2);
	//vectorGrupos.push_back(grupo3);
	//vectorGrupos.push_back(grupo4);
	//vectorGrupos.push_back(grupo5);

	cout << "grupo1 tiene: " << grupo1.size() << " Elementos guardados" << endl;
	cout << "vectorGrupos tiene: " << vectorGrupos.size() << " Elementos guardados" << endl;

	//for (int i = 0; i < vectorPersonas.size(); i++) {
	//	cout << vectorPersonas[i].nombre << endl;
	//}

	//vector<int> vectorEnteros;

	//vectorEnteros.push_back(1);
	//vectorEnteros.push_back(24);
	//vectorEnteros.push_back(3);
	//vectorEnteros.push_back(-9);

	//cout << "vectorEnteros tiene: " << vectorEnteros.size() << " Elementos guardados" << endl;
	//cout << "vectorEnteros tiene un limite de: " << vectorEnteros.max_size() << " elementos" << endl;
	////vectorEnteros.resize(1024);
	//// 
	//vectorEnteros.pop_back();
	//cout << "vectorEnteros tiene un limite de: " << vectorEnteros.size() << " elementos" << endl;
	////cout << "vectorEnteros tiene un limite de: " << vectorEnteros.max_size() << " elementos" << endl;

	//for (int i = 0; i < vectorEnteros.size(); i++) {
	//	cout << vectorEnteros[i] << endl;
	//}


	return 1;
}
