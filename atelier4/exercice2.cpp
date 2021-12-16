#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void afficherDateEtHeure(const string& s) // entrer une string  
{
    if (s.length() != 12) // codition si il depasse 12
      cout << "Chaine invalide." << endl;
    else
    {
        cout << "Date  : " << s.substr(0, 2) << "/" << s.substr(2, 2) << "/" << s.substr(4, 4) << endl; // affichege de date
        cout << "Heure : " << s.substr(8, 2) << "h" << s.substr(10, 2) << endl; // affichage de l heure 
    }
}

int main()
{
    string s("010920091123");
    afficherDateEtHeure(s);
}
