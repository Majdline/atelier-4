#include <iostream>
using namespace std;
class Test {
public:
    static int tableau[]; // attribut
public:
    static int division(int indice, int diviseur) {  // constructeur parametrique 
        if (diviseur == 0) {
            throw "Division par zero!";
        }
        return tableau[indice] / diviseur;
    }
};
int Test::tableau[] = { 17, 12, 15, 38, 29, 157, 89, -22, 0, 5 }; 
int main()
{
    int x, y;
    cout << "Entrez l indice de l entier a diviser: " << endl;
    cin >> x;
    cout << "Entrez le diviseur: " << endl;
    cin >> y;

    try { // cree un bloc 
        int res = Test::division(x, y);
        cout << "Le resultat de la division est: " << endl;
        cout << res << endl;
    }
    catch (const char* msg) { // intercepter les exception 
        cout << msg << endl;
    }
    return 0;
}
