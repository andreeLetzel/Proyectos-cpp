//Andree Letzel Hernandez Tellez
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int num[20], elem = 0, i = 19;
void encolar    ();
void desencolar ();
void localizar  ();
void numerar    ();

int main () {
	
	int op = 0;
	char opc = ' ';

	system("title Simulacion de pilas");
	
	do {
		cout << "*************************************************\n*\t1. Encolar un elemento\t\t\t*\n*\t2. Desencolar un elemento\t\t*\n*\t3. Localizar un elemento\t\t*\n*\t4. Numerar los elementos de la cola     *\n*\t5. Salir del programa\t\t\t*\n*************************************************\n\n";
		
		opc = getch();
		op = int(opc);
		
		switch (op){

			case 49:{
				encolar();
				break;
			}
			case 50:{
				desencolar();
				break;
			}
			case 51:{
				localizar();
				break;
			}
			case 52:{
				numerar();
				break;
			}
			case 53:{
				break;
			}
			default:{
				system ("cls");
				cout << "\n\tOpcion no valida.\n" << endl;
				break;
			}
		}
	}while(op != 53);
	
	cout << "Gracias por usar el programa!!";

	for (int j = 19; j > 0; j--){
		cout << num[j] << " ";
	}
	
	return 0;
}

void encolar (){
	
	char opc = 's';
	int n = 0;
	
	system ("cls");

	cout << "------------------------------------------------------------------------" << endl;

	do {

		bool rep = false;

		cout << "Da elemento a encolar: ";
		cin >> num[i];

		for (n = 19; n > i; n--){
			if (num[n] == num[i])
				rep = true;
		}

		if (rep == true) {
			cout << "Elemento ya en la cola.\n";
			system("pause");
			continue;
		}

		elem++;
		i--;
		
		if (elem == 20) {
			
			cout << "------------------------------------------------------------------------\n\nNo hay espacio en la lista.\n";
			break;
		}

		do {
			cout << "Gardar otro elemento?(s/n): ";
			cin >> opc;
			
			if (opc != 's' && opc != 'S' && opc != 'n' && opc != 'N')
				cout << "Opcion no valida." << endl;
				
		} while (opc != 's' && opc != 'S' && opc != 'n' && opc != 'N');
			
	} while (opc == 's' || opc == 'S');

	cout << "\nLa cola es: \n\n------------------------------------------------------------------------\n";

	cout << "Cabeza\n|\n";
	
	for (n = 19; n > i; n--){
		cout << num[n];
		
		if (n == i+1)
			cout << " ---->null";

		cout << "\t";
	}
	
	cout << "\n\n// " << elem << " elementos." << endl;
	
	cout << "------------------------------------------------------------------------\n" << endl;
	
	system ("pause");
	
	system ("cls");
	
	return;
	
}

void desencolar () {
	
    int des = 0;
	bool salir = false;

	system ("cls");
	
	if (elem != 0){

		char opc = 's';
        bool noexis = true;
		
		do {

			noexis = true;
            salir = false;

            cout << "------------------------------------------------------------------------\n" << endl;

           cout << "Cabeza\n|\n";
	
			for (int n = 19; n > i; n--){
				cout << num[n];
		
				if (n == i+1)
					cout << " ---->null";

				cout << "\t";
			}
		
		    cout << "\n\n// " << elem << " elementos.\n\n------------------------------------------------------------------------" << endl;

			cout << "\nQue elemento quieres desencolar?: ";
			cin >> des;
			
			for (int n = 19; n > i; n-- ) {
				if (des == num[n]){
					noexis = false;
					break;
				}
			}

            system ("cls");

			if (noexis == true) {
				cout << "El elemento no existe en la cola.\n" << endl;
				system("pause");
				continue;
			}

        	do {
				
        		cout << "------------------------------------------------------------------------\n" << endl;

                cout << "Cabeza\n|\n";
	
				for (int n = 19; n > i; n--){
					cout << num[n];
		
					if (n == i+1)
						cout << "---->null";

					cout << "\t";
				}

                cout << "\n\n// " << elem << " elementos.\n" << endl;
				
				if (des == num[19])
					salir = true;
			

				for (int n = 19; n > i;n--)
					num[n] = num[n-1];

                i++;
				elem--;

				system ("pause");
				
				if (salir == true)
					break;
				
				
            } while (elem != 0);

			cout << "------------------------------------------------------------------------\n" << endl;

			if (elem == 0)
				cout << "\nCabeza---->null\n// " << elem << " elementos.\n\nLa cola se ha vaciado.\n" << endl;

			else {
				cout << "Cabeza\n|\n";
	
				for (int n = 19; n > i; n--){
					cout << num[n];
		
					if (n == i+1)
						cout << "---->null";

					cout << "\t";
				}
				cout << "\n\n// " << elem << " elementos\n\nSe ha desencolado el elemento!!" << endl;
			}

			if (elem == 0)
                break;

			cout << "------------------------------------------------------------------------\n" << endl;

			do {
			cout << "Desencolar otro elemento?(s/n): ";
			cin >> opc;
			
			if (opc != 's' && opc != 'S' && opc != 'n' && opc != 'N')
				cout << "\nOpcion no valida" << endl;
				
			} while (opc != 's' && opc != 'S' && opc != 'n' && opc != 'N');

            cout << "------------------------------------------------------------------------\n" << endl;
	
            system("cls");

		}while (opc == 's' || opc == 'S');
		
		cout << "------------------------------------------------------------------------\n" << endl;
	}
	else {

		cout << "No hay elementos en la pila.\n\n------------------------------------------------------------------------\n" << endl;
	}

	system ("pause");
	
	system ("cls");
	
	return;
}

void localizar () {

	if (elem != 0) {

		char opc = 's';
		int loc = 0;
        bool noexis;

		do {

			noexis = true;

			system("cls");

			cout << "------------------------------------------------------------------------\n" << endl;

			cout << "Cabeza\n|\n";
	
			for (int n = 19; n > i; n--){
				cout << num[n];
	
				if (n == i+1)
					cout << "---->null";

				cout << "\t";
			
			}
			cout << "// " << elem << " elementos" << endl;

			cout << "------------------------------------------------------------------------\n\n\nQue elemento quieres Localizar?: ";
			cin >> loc;
			
			for (int n = 19; n > i; n-- ) {
				if (num[n] == loc){
					noexis = false;
					break;
				}
			}

            system ("cls");

			if (noexis == true) {
				cout << "El elemento no existe en la cola.\n" << endl;
                system("pause");
				continue;
			}

			cout << "------------------------------------------------------------------------\n" << endl;

			cout << "Cabeza";

			for (int n = 19; n > i; n--){
					cout << " ";

					if (num[n-1] == loc){
						cout << "    Elemento";
						break;
					}
					cout << "\t";
			}

			cout << "\n|";

			for (int n = 19; n > i; n--){
					cout << " ";

					if (num[n-1] == loc){
						cout << "       |";
						break;
					}
					cout << "\t";
			}

			cout << "\n";

			for (int n = 19; n > i; n--){
				
				cout << num[n];
		
				if (n == i+1)
					cout << "---->null";

				cout << "\t";
			}

            if (loc == num[19])
                cout << "\nEl elemento que busca es la cabeza\n";

			cout << "// " << elem << " elementos\n------------------------------------------------------------------------\n" << endl;

			do {
			cout << "Localizar otro elemento?(s/n): ";
			cin >> opc;
			
			if (opc != 's' && opc != 'S' && opc != 'n' && opc != 'N')
				cout << "\nOpcion no valida" << endl;
				
			}	while (opc != 's' && opc != 'S' && opc != 'n' && opc != 'N');

		} while (opc == 's' || opc == 'S');
	}
	else 
		cout << "------------------------------------------------------------------------\n\nNo hay elementos en la pila.\n\n------------------------------------------------------------------------\n" << endl;


	system ("pause");
	
	system ("cls");
	
	return;
}

void numerar () {

    system("cls");

    if (elem != 0) {

        cout << "------------------------------------------------------------------------\n" << endl;

        cout << "Cabeza\n|\n";
	
		for (int n = 19; n > i; n--){
			cout << num[n];
	
			if (n == i+1)
				cout << "---->null";

			cout << "\t";
			
		}

		cout << "\n\n";

		for (int n = 19, j = 1; n > i; n--, j++)
			cout << j << "\t";


		cout << "// " << elem << " elementos" << endl;

        cout << "------------------------------------------------------------------------\n" << endl;

    }
    else {
        cout << "------------------------------------------------------------------------\n\nNo hay elementos en la pila.\n\n------------------------------------------------------------------------\n" << endl;
    }

	system ("pause");
	
	system ("cls");
    return;
}
//Andree Letzel Hernandez Tellez