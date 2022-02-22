#include <iostream>
#include <string>

using namespace std;

void main() {
	//declarar las variables

	int opcion; //para los casos
	char nombre; //para guardar los nombres
	int menu; //para poder acceder al menu

	cout << "-BIENVENIDO A DENTAL SONRISAS: DONDE CUIDAMOS TU SONRISA-" << endl << endl;
	cout << "Ingrese la opcion que desee: " << endl << endl;
	
	do {
		cout << "-----MENU-----" << endl << endl;
		cout << "1. AGENDAR CITA" << endl; //opciones
		cout << "2. MODIFICAR CITA" << endl;
		cout << "3. ELIMINAR CITA" << endl;
		cout << "4. LISTA DE CITAS VIGENTES" << endl;
		cout << "5. LIMPIAR PANTALLA" << endl;
		cout << "6. SALIR" << endl << endl;
		cin >> opcion;
		cout << "------------------------" << endl;

		switch (opcion) {
		case 1:       //agendar cita
			cout << "-AGENDAR CITA-" << endl << endl;
			cout << "Ingrese su nombre: " << endl;
			cin >> nombre;
			cout << "Su cita ha sido agendada" << endl << endl;
			cout << "Presione 1 para regresar al menu o cualquier otro numero para salir del sistema" << endl;
			cin >> menu;
			break;
		default:
			cout << "Ingrese una opcion valida" << endl;
		}
	} while (menu == 1);
	system("pause");

}