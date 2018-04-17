#include "isort.h"

using namespace std;

int main () 
{
	vector<int> vec = {1, 3, 4, 2, 6, 5};
	list<double> lista = {1, 5, 2, 6, 4, 3};
	vector<string> vec_str = {"ab", "bc", "ac"};
	
	insertion_sort_ind(vec);
	insertion_sort(lista.begin(), lista.end());
	insertion_sort1(vec_str.begin(), vec_str.end());
	
	for(auto x : vec)
		cout << x;
	cout << endl;
	
	for(auto x : lista)
		cout << x;
	cout << endl;
	
	for(auto x : vec_str)
		cout << x + " ";
	return 0;
}
