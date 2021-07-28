// C++Learning.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//


#include <iostream>
using namespace std;

double geld = 0.0;
double zinsen = 0;
int jahre;

void print(string d);

int main()
{
    while (true) {
        print("Bitte gebe dein vorhandenes Geld ein!");
        cin >> geld;
        print("Bitte gebe nun den Zinssatz ein!");
        cin >> zinsen;
        print("Wie lange sollen Zinsen gerechnet werden (Jahre)");
        cin >> jahre;

        for (int i = 0; i < jahre; i++)
            geld = geld * (1 + (zinsen / static_cast<double>(100)));

        /*
        * Geld = 100
        * Geld = 105
        * Geld = 110.25
        */

        cout << "Geld: " << round(geld * 100) / 100 << endl;
        print("\n");
    }

}

void print(string d) {
    cout << d << endl;
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
