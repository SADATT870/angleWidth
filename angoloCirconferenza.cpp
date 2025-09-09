#include <iostream>
using namespace std;

int main() {
    double lunghezzaArco;
    double lunghezzaCirconferenza;
    double ampiezzaAngolo;

    // Controllo sulla circonferenza
    do {
        cout << "\n";
        cout << "Inserisci la lunghezza della circonferenza: " << endl;
        cin >> lunghezzaCirconferenza;
        if (lunghezzaCirconferenza <= 0) {
            cout << "Errore: la lunghezza della circonferenza deve essere maggiore di zero. Riprova." << endl;
        }
    } while (lunghezzaCirconferenza <= 0);

    // Controllo sull'arco
    do {
        cout << "Inserisci la lunghezza dell'arco: " << endl;
        cin >> lunghezzaArco;
        if (lunghezzaArco <= 0 || lunghezzaArco > lunghezzaCirconferenza) {
            cout << "Errore: la lunghezza dell'arco deve essere maggiore di zero e minore o uguale alla circonferenza. Riprova." << endl;
        }
    } while (lunghezzaArco <= 0 || lunghezzaArco > lunghezzaCirconferenza);

    // Calcolo dell'angolo centrale
    ampiezzaAngolo = lunghezzaArco * 360 / lunghezzaCirconferenza;

    cout << "L'angolo al centro misura: " << ampiezzaAngolo << " gradi" << endl;
    cout << "Arrivederci e grazie." << endl;

    return 0;
}