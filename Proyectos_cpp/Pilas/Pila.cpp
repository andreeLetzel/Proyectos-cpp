//Andree Letzel Hernandez Tellez
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int num[20], elem = 0;
void apilar    ();
void desapilar ();
void localizar ();
void numerar   ();

int main () {
	
	int op = 0;
	char opc = ' ';

	system("title Simulacion de pilas");
	
	do {
		cout << "*************************************************\n*\t1. Apilar un elemento\t\t\t*\n*\t2. Desapilar un elemento\t\t*\n*\t3. Localizar un elemento\t\t*\n*\t4. Numerar los elementos de la pila     *\n*\t5. Salir del programa\t\t\t*\n*************************************************\n\n";
		
		opc = getch();
		op = int(opc);
		
		switch (op){

			case 49:{
				apilar();
				break;
			}
			case 50:{
				desapilar();
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

	for (int i = 0; i < 20; i++){
		cout << num[i] << " ";
	}
	
	return 0;
}

void apilar (){
	
	char opc = ' ';
	int n = 0;
	
	system ("cls");

	cout << "------------------------------------------------------------------------" << endl;

	do {

		bool rep = false;

		cout << "Da elemento a aplilar: ";
		cin >> num[elem];

		for (n = 0; n < elem; n++){
			if (num[n] == num[elem])
				rep = true;
		}

		if (rep == true) {
			cout << "Elemento ya en la lista.\n";
			continue;
		}

		elem++;
		
		if (elem == 20){
			
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

	cout << "\nTu pila es:\n\n------------------------------------------------------------------------\n";
	
	for (n = elem - 1; n >= 0; n--){
		cout << num[n];
		
		if (n == elem - 1)
			cout << " <----cima";
		cout << endl;
	}
	
	cout << "// " << elem << " elementos." << endl;
	
	cout << "------------------------------------------------------------------------\n" << endl;
	
	system ("pause");
	
	system ("cls");
	
	return;
	
}

void desapilar () {
	
    int des = 0;

	system ("cls");
	
	if (elem != 0){

		char opc = 's';
        bool noexis = true;
		
		do {

			noexis = true;

            cout << "------------------------------------------------------------------------\n" << endl;

            for (int n = elem - 1; n >= 0; n--){
                cout << num[n];
                
                if (n == elem - 1)
                    cout << " <----cima";
                cout << endl;
            }
		
		    cout << "// " << elem << " elementos.\n\n------------------------------------------------------------------------" << endl;

			cout << "\nQue elemento quieres desapilar?: ";
			cin >> des;
			
			for (int n = 0; n < elem; n++ ) {
				if (des == num[n]){
					noexis = false;
					break;
				}
			}

            system ("cls");

			if (noexis == true) {
				cout << "El elemento no existe en la pila.\n" << endl;
				continue;
			}

        	do {

        		 cout << "------------------------------------------------------------------------\n" << endl;

                for (int n = elem - 1; n >= 0; n--){
                    cout << num[n];
                
                    if (n == elem - 1)
                        cout << " <----cima";
                    cout << endl;
                }

                cout << "// " << elem << " elementos.\n" << endl;

                elem--;

				system ("pause");

                if (des == num[elem])
                    break;
                    
            } while (elem != 0 );

			cout << "------------------------------------------------------------------------\n" << endl;

			if (elem == 0) {
				cout << "\nnull <----cima\n// " << elem << " elementos.\n\nLa pila se ha vaciado.\n" << endl;

			 }
			else {
				for (int n = elem - 1; n >= 0; n--){
                    cout << num[n];
                
                    if (n == elem - 1)
                        cout << " <----cima";
                    cout << endl;
                }

				cout << "// " << elem << " elementos\n\nSe ha desapilado el elemento!!" << endl;
			 }

			if (elem == 0)
                break;

			cout << "------------------------------------------------------------------------\n" << endl;

			do {
			cout << "Desapilar otro elemento?(s/n): ";
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

		do {

			bool noexis = true;

			system("cls");

			cout << "------------------------------------------------------------------------\n" << endl;

			for (int n = elem - 1; n >= 0; n--){
				cout << num[n];

				if (n == elem - 1)
					cout << " <----cima";
				cout << endl;	
			}

			cout << "// " << elem << " elementos" << endl;


			cout << "------------------------------------------------------------------------\n\n\nQue elemento quieres Localizar?: ";
			cin >> loc;
			
			for (int n = 0; n < elem; n++ ) {
				if (loc == num[n]){
					noexis = false;
					break;
				}
			}

            system ("cls");

			if (noexis == true) {
				cout << "El elemento no existe en la pila." << endl;
				continue;
			}
			
			cout << "------------------------------------------------------------------------\n" << endl;

			for (int n = elem - 1; n >= 0; n--){
				cout << num[n];
			
				if (n == elem - 1)
					cout << " <----cima";
				
				if (loc == num[n])
					cout << " <==== Elemento";
				cout << endl;	
			}

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

        for (int n = elem - 1; n >= 0; n--){
			cout << n + 1 << ". " << num[n];

			if (n == elem - 1)
				cout << " <----cima";
			cout << endl;	
		}

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