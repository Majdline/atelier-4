#include <iostream>
#include <list>
#include <iterator>
using namespace std;

//function for printing the elements in a list
void showlist(list <int> l)
{
	list <int> ::iterator it;
	for (it = l.begin(); it != l.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main()
{
	int n, val; 
	list <int> list1; // decalaration de la liste 

	cout << "enter la lengueur de liste: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "entrer le " << i + 1 << " valeur : ";
		cin >> val;
		list1.push_back(val); // entrer les elements a la fin de la fin 
	}
	cout << "\nVotre liste est : ";
	showlist(list1);


	cout << "\nla liste triée: ";
	list1.sort(); // triage de liste
	showlist(list1); // affichage de liste  

	return 0;

}
