//Lupoli Michele 4^B INFORMATICA
#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
	string r;
	struct Azienda
	{
		int mat;
		string nom, cogn;
		string data, ruolo;
		float stip;
	};
	struct Azienda v[100];
	
	//Switch case
	int opz;
	do
	{
	int scelta;
	cout<< "Cosa vuoi fare? " << endl;
	cout<< "1. Registrare n dipendenti " << endl;
	cout<< "2. Ricerca dipendenti che ricoprono uno specifico ruolo " << endl;
	cout<< "3. Calcolo media stipendi azienda " << endl;
	cin>> scelta;
	switch (scelta)
	{
		case 1:
			int i, n;
			do
			{
			cout<< "Inserisci il numero dei dipendenti che vuoi registrare: ";
			cin>> n;
		    }
		    while ((n <= 0)||(n > 5));
		    for (i = 0; i < n; i ++)
		    {
		    	cout<<"Inserire matricola dipendente n. " << i+1 << ": ";
		    	cin>> v[i].mat; cout<< endl;
		    	cout<<"Inserire nome dipendente n. " << i+1 << ": ";
		    	cin>> v[i].nom; cout<< endl;
		    	cout<<"Inserire cognome dipendente n. " << i+1 << ": ";
		    	cin>>v[i].cogn; cout<< endl;
		    	cout<<"Inserire data di nascita dipendente n. " << i+1 << ": ";
		    	cin>>v[i].data; cout<< endl;
		    	cout<<"Inserire ruolo dipendente n. " << i+1 << ": ";
		    	cin>> v[i].ruolo; cout<< endl;
		    	cout<<"Inserire stipendio percepito dipendente n. " << i+1 << ": ";
		    	cin>>v[i].stip; cout<< endl;
			}
			case 2:
				int c;
				cout<< "Inserisci un ruolo: ";
				cin>>r; cout << endl;
				for (i = 0; i < n; i ++)
				{
					if (r == v[i].ruolo)
					{
						cout<< v[i].nom << " " << v[i].cogn << endl;
						c = c+1;
					}
					cout<<"Non ci sono dipendenti che ricoprono il ruolo di "<< r << endl;
				}
				cout<< "I dipendenti che ricoprono il ruolo di "<< r << "sono " << c;
				case 3:
					int s = 0, m;
					for (i = 0; i < n; i++)
					{
						s = s + v[i].stip;
					}
					m = s / n;
					cout<<"La media degli stipendi dei dipendenti è pari a " << m <<" euro";
	}
						cout<<"Vuoi eseguire un altra operazione? (1 = si / 0 = no) ";
						cin>> opz; cout << endl;
	}
	while ( opz == 1);
	system ("PAUSE");
	return 0;
}
