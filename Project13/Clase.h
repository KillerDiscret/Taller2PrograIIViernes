#pragma once
class Carro
{
private:
	char *color;
	char *due�o;
	int *placa;
	double *peso;
public:
	Carro();
	~Carro();
	void SetVariables(char*COLOR, char*DUE�O, int*PLACA, double*PESO);
	char *getColor();
	char *getDue�o();
	int getPlaca();
	double getPeso();

};
Carro::Carro()
{
	color = new char[10];
	due�o = new char[20];
	placa = new int;
	peso = new double;
}
void Carro::SetVariables(char*COLOR, char*DUE�O, int*PLACA, double*PESO)
{
	color = COLOR;
	due�o = DUE�O;
	placa = PLACA;
	peso = PESO;
}
char *Carro::getColor()
{
	return color;
}
char *Carro::getDue�o()
{
	return due�o;
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