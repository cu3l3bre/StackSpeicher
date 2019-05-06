#include <iostream>

using namespace std;


// globaler Gueltigskeitsbereich / scope
int globaleZahl = 0;

int main()
{
	cout << "Programm zu StackSpeicher" << endl;

	globaleZahl = 20;

	// Variable deklarieren, Speicher reservieren
	int Zahl;

	// bspw. hier BreakPoint setzen, um einen alten Wert (Datenmuell) zu sehen der noch
	// im Speicher vorhanden ist

	// Zuweisung eines Wertes, somit Ueberschreiben des alten Wertes (Datenmuelles)
	Zahl = 42;

	cout << "Zahl: " << Zahl << endl;

	{
		int Zahl2 = 43;
		cout << "Zahl2: " << Zahl2 << endl;

		Zahl2 = Zahl;	// Zahl ist vor dem Block definiert,  ist also bekannt

		// ich kann aber auch folgendes machen
		// Neu definition von Zahl ist hier möglich, ist dann aber außerhalb des Blockes nicht mehr gueltig
		int Zahl = 3;
		cout << "Zahl im Block: " << Zahl << endl;;

		// Ausgeben der globalen Zahl, kann auch in Bloecken benutzt werden
		cout << "Globale Zahl: " << globaleZahl << endl;

	}

	// hier wird der Wert 42 ausgegeben, zugewiesen vor dem Block 
	cout << "Zahl nach dem Block: " << Zahl << endl;

	// Zahl2 ist außerhalb des Blockes nicht verwendwar
	// da diese in dem Block definiert worden ist (Gueltigkeitsbereich) -> Compiler-Error
	//cout << "Zahl2: " << Zahl2 << endl;
	

	// dann kann ich die gleiche Variable nochmal nutzen (aber programmtechnisch vllt unschoen)
	{
		int Zahl2 = 43;
		cout << "Zahl2: " << Zahl2 << endl;
	}


	// Speicher für einer integer Variable
	cout << "Bytes fuer eine int: " << sizeof(Zahl) << endl;


	// Speicher für eine char
	cout << "Bytes fuer eine char: " << sizeof(char) << endl;



	// Zeiger auf eine ganze Zahl

	int* ZeigerAufZahl;
	cout << "Adresse von Zahl: " << &Zahl << endl;


	// Adresse der ganzen Zahl kann in dem Zeiger abgelegt werden
	ZeigerAufZahl = &Zahl;
	cout << "Der Zeiger auf Zahl: " << ZeigerAufZahl << endl;
	cout << "Der Wert auf den der Zeiger zeigt: " << *ZeigerAufZahl << endl;

	*ZeigerAufZahl = 999;
	cout << "Der Wert auf den der Zeiger zeigt: " << *ZeigerAufZahl << endl;


	double Kommazahl = 3.1;
	double* ZeigerAufKommazahl = &Kommazahl;

	cout << "Wert von Kommazahl und Adresse: " << *ZeigerAufKommazahl << " " << ZeigerAufKommazahl << endl;

	// Bytegroesse von den Zeigern
	// Alle Zeiger auf dem System haben die gleiche Groesse , hier 4 Bytes (32 Bit) 
	cout << "ZeigerAufZahl Groesse: " << sizeof(ZeigerAufZahl) << endl;
	cout << "ZeigerAufKommazahl Groesse: " << sizeof(ZeigerAufKommazahl) << endl;




	system("pause");
	return 0;
}