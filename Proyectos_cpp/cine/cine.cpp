#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;
string sala[5][6] = {"A1", "A2", "A3", "A4", "A5", "B1", "B2", "B3", "B4", "B5", "C1", "C2", "C3", "C4", "C5", "D1", "D2", "D3", "D4", "D5", "E1", "E2", "E3", "E4", "E5", "F1", "F2", "F3", "F4", "F5"};
int bole = 0;

void compra      ();
void imprimicion ();
void creacion    ();
int main () {
	
	char opc = ' ';
	
	creacion();
	
	
	
	do {
		system("cls");
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n|\t\tMENU\t\t\t|\n|\t1. Comprar boletos\t\t|\n|\t2. Hacer corte de caja\t\t|\n|\t3. Salir\t\t\t|\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		
		opc = getch();
		
		switch (opc) {
			case '1': {
				compra();
				break;
			}
			case '2': {
				cout << "-------------------CORTE DE CAJA-------------------\n\nTotal de boletos vendidos: " << bole << "\n\nPorcentaje de ocupacion: " << (bole*100)/30 << "%\n\nVenta total: " << bole * 100 << endl;
				system("pause");
				break;
			}
			case '3': {
				break;
			}
			default: {
				system("cls");
				cout << "Opcion no valida\n";
				break;
			}
		}
	} while(opc != '3');		
	return 0;
}

void creacion() {
	char XD = 65;
	
	cout << "\t\t SALA VIP\n\n:::::::::::::::::PANTALLA::::::::::::::::::\n" << endl;
	for (int j = 0, n = 65; j < 5; j++, n++) {
		
		for (int i = 0; i < 6; i++) {
			XD = n;
			sala[j][i] = XD;
			XD = i + 49;
			sala[j][i] += XD;
			cout << sala[j][i] << "\t";
		}
		
		cout << "\n" << endl;
	}
	
	system("pause");
	
	return;
}

void imprimicion() {
	
	system("cls");
	
	cout << "\t\t SALA VIP\n\n:::::::::::::::::PANTALLA::::::::::::::::::\n" << endl;
	for (int j = 0, n = 65; j < 5; j++, n++) {
		
		for (int i = 0; i < 6; i++) {
			cout << sala[j][i] << "\t";
		}
		
		cout << "\n" << endl;
	}
	
	system("pause");
	
	return;
}

void compra() {
	
	int can = 0;
	system("cls");
	
	imprimicion();
	
	cout << "~~~~~~~~~~~~COMPRA DE BOLETOS~~~~~~~~~~~~\n\n\tPrecio del boleto: $100\nBoletos a comprar(para salir precione 0): ";
	cin >> can;

	if (can <= 0)
		return;
	
	bole += can;

	string compra[can];
	
	for (int i = 0; i < can; i++) {
		do {
			cout << "Elige asiento" << i+1 << ": ";
			cin >> compra[i];

			if (((compra[i])[0] < 65 || (compra[i])[0] > 69) || ((compra[i])[1] < 49 || (compra[i])[1] > 54))
				cout << "\nEl asiento no existe\n";

			if (sala[int((compra[i])[0]) -65][int((compra[i])[1]) -49] == "**"){
				cout << "\nEste aciento ya esta ocupado\n";
				compra[i] = "0";
			}

		} while(((compra[i])[0] < 65 || (compra[i])[0] > 69) || ((compra[i])[1] < 49 || (compra[i])[1] > 54));

		sala[int((compra[i])[0]) -65][int((compra[i])[1]) -49] = "**";
	
	}

	system("pause");
	return;
}
