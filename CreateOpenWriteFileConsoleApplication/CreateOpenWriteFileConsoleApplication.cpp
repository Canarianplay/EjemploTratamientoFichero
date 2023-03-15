/*En este códiugo podrás encontrar un breve ejemplo de la creación, apertura uso y cierre de un fichero*/
/*Por otro lado, miraremos como se hace el proceso de abrir y leer un fichero ya creado*/

#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	//Crear nuestro fichero en un ruta especifica
	ofstream outfile("../../EjemploTratamientoFichero/FicherosPruebas/CreateFicheroTest.txt");
	
	//outfile.open("CreateFicheroTest.txt");


	//Comprobar que nuestro fichero esta abierto
	if (!outfile.is_open()) 
	{
		std::cerr << "El fichero CreateFicheroTest no ha sido abierto correctamente " << endl;
		return 1;
	}

	//Escribir en nuestro fichero
	outfile << "Este es un fichero de test para comprobar lo siguiente " << endl;
	outfile << "    1. Fichero creado en una ruta especifica (OK) " << endl;
	outfile << "    2. Comprobamos que nuestro fichero ha sido abierto correctamente (OK)" << endl;
	outfile << "    3. Comprobamos que somos capaces de escribir en nuestro fichero (OK)" << endl;
	outfile << "    4. Comprobamos que leemos nuestro fichero (OK)" << endl;
	outfile << "    5. Comprobamos que se muestra el contenido del fichero (OK)" << endl;


	//Cerrar nuestro fichero
	outfile.close();

	//Abrimos el fichero en modo lectura
	ifstream infile("../../EjemploTratamientoFichero/FicherosPruebas/CreateFicheroTest.txt");

	//Comprobar que nuestro fichero esta abierto
	if (!infile.is_open())
	{
		cerr << "El fichero CreateFicheroTest no ha sido abierto correctamente " << endl;
		return 1;
	}

	//Mostramos el contenido del fichero
	string line;
	while (std::getline(infile, line))
	{
		cout << line << endl;
	}


	//A partir de aqui se trabaja con un fichero previamente creado donde solo leeremos y motraremos el contenido
	ifstream infileTest2("../../EjemploTratamientoFichero/FicherosPruebas/CreateFicheroTest2.txt");

	if (!infileTest2.is_open())
	{
		cerr << "El fichero infileTest2 no ha sido abierto correctamente " << endl;
		return 1;
	}

	cout << " El siguiente texto que verá ha sido sacado de un fichero previamente creado" << endl;
	while (std::getline(infileTest2, line))
	{
		cout << line << endl;
	}

}
