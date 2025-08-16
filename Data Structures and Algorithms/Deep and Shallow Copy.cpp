// C++ program to illustrate the deepcopy and shallow copy
#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

// Class of Car
class Car {
public:
	string name;
	vector<string> colors;

	Car(string name, vector<string> colors)
	{
		this->name = name;
		this->colors = colors;
	}
};

int main()
{
	// Create a Honda car object
	vector<string> honda_colors("RED","BLUE");
	Car honda = Car("Honda", honda_colors);

	// Deepcopy of Honda
	Car deepcopy_honda = honda;
	deepcopy_honda.colors.push_back("Green");
	cout << "Deepcopy: ";
	vector<string> v = deepcopy_honda.colors ;
	int n = v.size(); 
	for (int i = 0 ; i < n ; i++) {
		cout << v[i] << " ";
	}
	cout << endl << "Original: ";
	v = honda.colors ;
	n = v.size(); 
	for (int i = 0 ; i < n ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	// Shallow Copy of Honda
	Car* copy_honda = &honda;
	copy_honda->colors.push_back("Green");
	cout << "Shallow Copy: ";
	v = copy_honda->colors ;
	n = v.size(); 
	for (int i = 0 ; i < n ; i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}

