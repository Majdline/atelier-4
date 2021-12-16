#include <iostream>
#include <string>
#include <list>
#include <iterator>

using namespace std;

class personne
{
public:
    string nom, prenom;
    int age;
    personne()
    {
        string a, b;
        int c;
        cout << "entrer le nom : ";
        cin >> a;
        cout << "entrer le prenom : ";
        cin >> b;
        cout << "entrer l'age : ";
        cin >> c;
        nom = a;
        prenom = b;
        age = c;
    }
};
int main()
{
    int n;
    list<string> personnes; // declaration de la liste 
    cout << "entrer la lengueur de la liste: ";
    cin >> n;
    for (int i = 0; i < n; i++)//remplir la liste avec nom de personne 
    {
        personne p; // objet 
        personnes.push_back(p.nom + " " + p.prenom + " " + to_string(p.age)); // ajoutervles elements ala fin de la liste 
    }
    personnes.sort(); // trie ls elemnents 
    cout << "\nla list trie est: ";
    for (auto it : personnes)// afficher les elements de liste 
        cout << it << "   ";
    return 0;
}