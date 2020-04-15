#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    unordered_map<string, int> polyhedrons = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int n, sum;
    string str;

    sum = 0;
    cin >> n;
    

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        sum += polyhedrons[str];
    }

    cout << sum;    
}
