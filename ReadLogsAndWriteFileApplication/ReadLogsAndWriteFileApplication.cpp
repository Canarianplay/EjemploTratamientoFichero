/*Tenemos que leer los logs de nuestra aplicación y guardarlos en un fichero que crearemos para este cometido*/


//RETO del codigo: crea y añade un fichero logs con fecha y hora del sistema. Esta hora y fecha tendrá que sera la del momento de la ejecución del programa 


#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <iomanip>

using namespace std;

int main()
{
	string namelogfile = "FicheroLogsTest.txt";

	string nombre;
	int edad;
	char sexo;
	float altura;

	//Aquí podemos ver otra forma de tratar y abrir nuestro archivo
	ofstream logfile;
	logfile.open(namelogfile, ios::out);

	cout << "Cual es tu nombre? ";
	getline(cin, nombre);

	if (nombre == "")
	{
		logfile << "El usuario no ha introducido correctamento su nombre " << endl;
	}

	cout << "Cual es tu edad? ";
	cin >> edad;

	if (edad == 0)
	{
		logfile << "El usuario no ha introducido correctamento su edad " << endl;
	}

	cout << "Cual es tu sexo (M/F)? ";
	cin >> sexo;

	if (sexo != 'M' && sexo != 'F')
	{
		logfile << "El usuario no ha introducido correctamento su sexo " << endl;
	}

	cout << "Cual es tu altura en metros? ";
	cin >> altura;

	if (altura == 0)
	{
		logfile << "El usuario no ha introducido correctamento su altura " << endl;
	}



	if (nombre != "" && edad != 0 && (sexo == 'M' || sexo == 'F')
		&& altura != 0)
	{
		cout << "\nTu nombre es " << nombre << ", tienes " << edad << " años, eres ";
		if (sexo == 'M') {
			cout << "hombre";
		}
		else {
			cout << "mujer";
		}
		cout << ", y mides " << altura << " metros.\n";
	}
	else
	{
		cout << "Error en el procesamiento de datos" << endl;
	}
}
