#pragma once
class Carro
{
private:
	char *color;
	char *dueño;
	int *placa;
	double *peso;
public:
	Carro();
	~Carro();
	void SetVariables(char*COLOR, char*DUEÑO, int*PLACA, double*PESO);
	char *getColor();
	char *getDueño();
	int getPlaca();
	double getPeso();

};
Carro::Carro()
{
	color = new char[10];
	dueño = new char[20];
	placa = new int;
	peso = new double;
}
void Carro::SetVariables(char*COLOR, char*DUEÑO, int*PLACA, double*PESO)
{
	color = COLOR;
	dueño = DUEÑO;
	placa = PLACA;
	peso = PESO;
}
char *Carro::getColor()
{
	return color;
}
char *Carro::getDueño()
{
	return dueño;
}
int Carro::getPlaca()
{
	return *placa;
}
double Carro::getPeso()
{
	return *peso;
}
Carro::~Carro()
{

}