#include <iostream>
#include <vector>

using namespace std;

class Persona {
public:
	string idPersona;
	string nombre;
	int edad;
	float ingresoMensual;
};



int main() {

	Persona Juan = Persona();
	Persona Pedro = Persona();
	Persona Maria = Persona();
	Persona Julieta = Persona();

	Juan.idPersona = "78658323";
	Juan.nombre = "Juan de Dios Nava Quiroga";
	Juan.edad = 31;
	Juan.ingresoMensual = 4000.5f;

	Pedro.idPersona = "44458332";
	Pedro.nombre = "Peter Jhonatan Lujan Peredo";
	Pedro.edad = 22;
	Pedro.ingresoMensual = 2340.2f;

	vector<Persona> vectorPersonas;

	vectorPersonas.push_back(Juan);
	vectorPersonas.push_back(Pedro);

	cout << "vectorPersonas tiene: " << vectorPersonas.size() << " Elementos guardados" << endl;


	for (int i = 0; i < vectorPersonas.size(); i++) {
		cout << vectorPersonas[i].nombre << endl;
	}

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
