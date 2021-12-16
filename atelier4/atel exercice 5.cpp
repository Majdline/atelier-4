#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>
#include <set>

using namespace std;

bool recherche(set<int> s, int n) { return s.count(n); }

bool recherche(set<int> s, set<int>::iterator debut, set<int>::iterator fin, int n)
{
    set<int>::iterator itr;

    for (itr = debut; itr != fin; itr++)
    {
        if (*itr == n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    // empty set container
    set<int> s1;
    // insert elements in set
    for (int i = 0; i < 100; i++)
    {
        s1.insert(i + 1);
    }
    // printing set s1
    set<int>::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    cout << endl;

    cout << recherche(s1, 10) << endl;
    cout << recherche(s1, 101) << endl;
    cout << recherche(s1, 15) << endl;
    cout << recherche(s1, 60) << endl;

    cout << endl;

    cout << recherche(s1, s1.find(10), s1.find(40), 32) << endl;
    cout << recherche(s1, s1.find(30), s1.find(70), 23) << endl;
    cout << recherche(s1, s1.find(21), s1.find(22), 20) << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    


    return 0;
}