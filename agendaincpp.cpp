#include <iostream>

#include <string>

using namespace std;

int main() {
  int a, indice;
  int scelta;
  string z;

  cout << "Quanti contatti vuoi inserire? (Min 1 Max 20)";
  cin >> a;
  string rubrica[20];
  for (int i = 0; i < 20; i++) {
    if (i < a) {
      cout << "DIGITA IL CONTATTO IN BASE A QUESTA DISPOSIZIONE >> NOME,COGNOME:NUMERO DI TELEFONO" << endl;
      cout << "Inserisci: ";
      cin >> rubrica[i];
    } else {
      rubrica[i] = "";
    }

  }

  do {
    cout << "\n1-Stampa contatti\n";
    cout << "2-Elimina contatti\n";
    cout << "3-Aggiungi contatti\n";
    cout << "4-Esci\n" << endl;
    cin >> scelta;

    switch (scelta) {

    case (1):
      {
        cout << "RUBRICA:" << endl;
        for (int b = 0; b < a; b++) {
          if (b < a - 1) {
            cout << b;
            cout << ") ";
            cout << rubrica[b] << endl;
          } else {
            cout << b;
            cout << ") ";
            cout << rubrica[b] << endl;
          }
        }

      }
      break;

    case (2):
      {
        cout << "RUBRICA:" << endl;
        for (int b = 0; b < a; b++) {
          if (b < a) {
            cout << b;
            cout << ") ";
            cout << rubrica[b] << endl;
          } else {
            cout << rubrica[b] << endl;
          }

        }
        cout << "Inserisci l'indice da eliminare: ";
        cin >> indice;
        for (int v = indice; v < a; v++) {
          if (v != a - 1) {
            rubrica[v] = rubrica[v + 1];
          } else {
            rubrica[v] = "";
            a--;
          }

        }

      }
      break;

    case (3):
      {
        string contatto;
        for (int c = 0; c < 20; c++) {
          if (rubrica[c] == "") {
            cout << "DIGITA IL CONTATTO IN BASE A QUESTA DISPOSIZIONE >> NOME,COGNOME:NUMERO DI TELEFONO" << endl;
            cout << "Inserisci: ";
            cin >> contatto;
            a++;
            rubrica[c] = contatto;
            break;
          } else {
            cout << "Rubrica piena, impossibile inserire contatti!" << endl;
            break;
          }

        }

      }
      break;
    }

  } while (scelta != 4);

}
