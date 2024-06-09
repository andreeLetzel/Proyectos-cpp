#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int num[20], num1[20], poO = 0, poR = 0, temp = 0, i = 0;

void imprimision ();
void seleccion   ();
void insercion   ();
void burbuja     ();
void reinicio    ();

int main () {
	
	system("title Metodos de ordenamiento");
	
	char opc = 's';
	int op = 0;
	bool rep = false;
	
	do {
		
		rep = false;

		
			
		cout << "Introduce No. "<< i+1 << ": ";
		cin >> num[i];
		num1[i] = num[i];
		
		for (int n = 0; n < i; n++) {
			if (num[i] == num[n]) {
				rep = true;
				break;
			}
		}
		
		if (rep == true) {
			cout << "No se pueden repetir numeros!!\n";
			continue;	
		}

		i++;

		if (i == 20)
			break;
		
		if (i >= 2){
			do {
				cout << "Quieres ingresar otro numero? (s/n): ";
				cin >> opc;
				
				if (opc != 's' && opc != 'S' && opc != 'n' && opc != 'N')
					cout << "Opcion no valida\n";
				
			} while (opc != 's' && opc != 'S' && opc != 'n' && opc != 'N');
		}
		
	} while (opc == 's' || opc == 'S');
	
	cout << "\n";
	
	imprimision ();
	
	cout << "\tVector original\n";
	
	system("pause");

	do {
		
		system("cls");

		cout << "Elije un metodo de ordenamiento\n*************************************************\n*\t\t1. Metodo de seleccion\t\t*\n*\t\t2. Metodo de insercion\t\t*\n*\t\t3. Metodo de burbuja\t\t*\n*\t\t4. Salir del programa\t\t*\n*************************************************\n\n";
		
		opc = getch();
		op = int(opc);
	
		switch (op) {
			case 49:{
				seleccion();
				reinicio();
				break;
			}
			case 50:{
				insercion();
				reinicio();
				break;
			}
			case 51:{
				burbuja();
				reinicio();
				break;
			}
			case 52:{
				break;
			}
			default: {
				system("cls");
				cout << "Opcion no valida!\n";
				break;
			}
		}
	} while (op != 52);

	cout << "Gracias por usar el programa!!";
	
	return 0;
}

void imprimision () {
	
	for (int n = 0; n < i; n++) {
		cout << num[n];
	
		if (n != i -1)
			cout << ", ";
	}
	
	return;
}

void insercion () {

	system("cls");

	imprimision();

	cout << "\tVector original\n\n";

	system("pause");

	for (poO = 1; poO < i; poO++){
		for (poR = poO; poR > 0; poR--) {
			if (num[poR] < num[poR - 1]) {

				temp = num[poR];
				num[poR] = num[poR - 1];
				num[poR - 1] = temp;
				
			}
		}
		cout << endl;

		imprimision();
		
		cout << "\tNo. de vueltas: " << poO << "\n" << endl;
		system("pause");
		
	}

	cout << "\nSe ha ordenado el vector con el metodo de incersion\n\n";
	
	system("pause");
	
	return;
}

void burbuja() {

	system("cls");

	imprimision();

	cout << "\tVector original\n\n";

	system("pause");

	for (poO = 0; poO < i; poO++){
		for (poR = 0; poR < i -1; poR++){
			if (num[poR] > num[poR + 1]) {
				temp = num[poR];
				num[poR] = num[poR + 1];
				num[poR + 1] = temp;
			}
		}
		cout << endl;

		imprimision();

		cout << "\tNo. de vueltas: " << poO + 1<< "\n" << endl;
		system("pause");
		
		
	}

	cout << "Se ha ordenado el vector con el metodo de burbuja\n\n";

	system("pause");

	return;
}

void seleccion() {

	int n = 0;
	bool inter = false;

	system("cls");

	imprimision();

	cout << "\tVector original\n\n";

	system("pause");

	for (poO = 0; poO < i -1; poO++) {
		temp = num[poO];
		inter = false;
		for (poR = poO; poR < i; poR++) {
			if (num[poR] < temp) {
				temp = num[poR];
				n = poR;
				inter = true;
			}
		}
		if (inter == true) {
			num[n] = num[poO];
			num[poO] = temp;
		}
		
		cout << endl;

		imprimision();

		cout << "\tNo. de vueltas: " << poO + 1<< "\n" << endl;
		system("pause");
		
	}

	cout << "Se ha ordenado el vector con el metodo de seleccion\n\n";

	system("pause");

	return;
}

void reinicio () {

	for (poR = 0; poR < i; poR++)
		num[poR] = num1[poR];

	return;
}