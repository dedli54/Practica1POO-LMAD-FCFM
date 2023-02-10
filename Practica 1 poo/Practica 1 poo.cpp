#include <iostream>

using namespace std;

enum carros {Mazda = 1 , Toyota, Suzuki, Honda, Chevrolet, Renault, Seat, Mitsubishi, VW, Ford};

struct carro
{
	string model;
	float precio;
	carros tipo;
};

int opc;

int main()
{
	system("color 05");

	carro group[11];
	group[1].model = "Mazda 3 Sedan";	group[1].precio = 330000;	group[1].tipo = Mazda;
	group[2].model = "Toyota Prius Hybrid";	group[2].precio = 435000;	group[2].tipo = Toyota;
	group[3].model = "Suzuki Swift Hatchback";	group[3].precio = 200000;		group[3].tipo = Suzuki;
	group[4].model = "Honda Odyssey MamaVan"; group[4].precio = 130000;	group[4].tipo = Honda;
	group[5].model = "Chevrolet Chevy Hatchback"; group[5].precio = 60000;	group[5].tipo = Chevrolet;
	group[6].model = "Renault KWID SUV";	group[6].precio = 500000;	group[6].tipo = Renault;
	group[7].model = "Seat Ibiza Hatchback ";	group[7].precio = 250000;	group[7].tipo = Seat;
	group[8].model = "Mitsubishi L200 PickUp";	group[8].precio = 1250000;		group[8].tipo = Mitsubishi;
	group[9].model = "Volkswagen Pp! GTI Hot Hatch";	group[9].precio = 425000;	group[9].tipo = VW;
	group[10].model = "Ford Focus Sedan";	group[10].precio = 123;	group[10].tipo = Ford;

	
	cout << "\t Choose one car brand" << endl;
	cout << Mazda << "  Mazda" << endl; //1
	cout << Toyota << "  Toyota" << endl; //2
	cout << Suzuki << "  Suzuki" << endl; //3
	cout << Honda << "  Honda" << endl; //4
	cout << Chevrolet << "  Chevrolet" << endl; //5 
	cout << Renault << "  Renault" << endl; //6 
	cout << Seat << "  Seat" << endl; //7
	cout << Mitsubishi << "  Mitsubishi" << endl; //8
	cout << VW << "  VW" << endl; //9
	cout << Ford << " Ford" << endl; //10
	cin >> opc;

	switch (opc)
		{ 
		case Mazda:
			cout << group[opc].model << endl << "Precio: " << group[opc].precio << endl;
			break;
		case Toyota:
			cout << group[opc].model << endl << "Precio: " << group[opc].precio << endl;
			break;
		case Suzuki:
			cout << group[opc].model << endl << "Precio: " << group[opc].precio << endl;
			break;
		case Honda:
			cout << group[opc].model << endl << "Precio: " << group[opc].precio << endl;
			break;
		case Chevrolet:
			cout << group[opc].model << endl << "Precio: " << group[opc].precio << endl;
			break;
		case Renault:
			cout << group[opc].model << endl << "Precio: " << group[opc].precio << endl;
			break;
		case Seat:
			cout << group[opc].model << endl << "Precio: " << group[opc].precio << endl;
			break;
		case Mitsubishi:
			cout << group[opc].model << endl << "Precio: " << group[opc].precio << endl;
			break;
		case VW:
			cout << group[opc].model << endl << "Precio: " << group[opc].precio << endl;
			break;
		case Ford:
			cout << group[opc].model << endl << "Precio: " << group[opc].precio << endl;
			break;
		default: //Hecho por Alberto Adrian Garcia Camacho y subido a github dedli54
			cout << "Favor de elegir una opcion valida" << endl;
			break;
			
		}
	
	return 0;
  



}
