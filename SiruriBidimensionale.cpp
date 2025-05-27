#include <iostream>
using namespace std;

int main() {
    int randuri, coloane;
    
    cout << "Randuri: ";
    cin >> randuri;
    cout << "Coloane: ";
    cin >> coloane;
    
    char sir[randuri][coloane];
    
    for (int i = 0; i < randuri; i++) {
        for (int j = 0; j < coloane; j++) {
            cout << "Elementul [" << i << "][" << j << "]: ";
            cin >> sir[i][j];
        }
    }
    
    cout << "Sirul este: " << endl;
    for (int i = 0; i < randuri; i++) {
        for (int j = 0; j < coloane; j++) {
            cout << sir[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}