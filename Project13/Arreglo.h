#pragma once
#include <iostream>
#include "Clase.h"
using namespace std;
class ArreCarro
{
private:
	Carro ** ObjArreglo;
public:
	ArreCarro();
	~ArreCarro();
	void agregar();
	void mostrar();

};
ArreCarro::ArreCarro()
{
	ObjArreglo = new Carro*[2];
}
void ArreCarro::agregar()
{
	char *color= new char[15];
	char *nombre= new char[20];
	int *placa=new int;
	double *peso= new double;
	cout << "Ingrese el color del carro: " << endl;
	cin >>color;
	cout << "Ingrese el nombre del dueño: " << endl;
	cin >>nombre;
	cout << "Ingrese la placa: " << endl;
	cin >> *placa;
	cout << "Ingrese el peso del carro:" << endl;
	cin >> *peso;
	Carro *obj1 = new Carro();
	obj1->SetVariables(color, nombre,placa, peso);
	Carro *obj2 = new Carro();
	obj2->SetVariables("Azul","tony",placa,peso);
	ObjArreglo[0] = obj1;
	ObjArreglo[1] = obj2;
}
void ArreCarro::mostrar()
{
	for (int i=0; i<2;i++)
	{
		cout << "\tIngreso N-" << i + 1 << endl;
		cout << "COLOR: " << ObjArreglo[i]->getColor() << endl;
		cout << "NOMBRE: " << ObjArreglo[i]->getDueño() << endl;
		cout << "PLACA: " << ObjArreglo[i]->getPlaca() << endl;
		cout << "PESO: " << ObjArreglo[i]->getPeso() << endl;

	}
}

ArreCarro::~ArreCarro()
{

}
