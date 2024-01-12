#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main() {
	float median;
	
	double array[10]{ 87 , 45 , 50 , 25 , 32 , 10 , 75, 90, 5, 8 };
	
	int dowo = sizeof(array) / sizeof(array[0]);

	cout << "deret asli dan belum disortir \n ";
	
	for (int i = 0; i < dowo; i++)
	{
		cout << array[i] << " | ";
	}
	cout << endl;
vector<double>vect(array, array + dowo);
	
sort(vect.begin(), vect.end(), greater<int>());
	
cout << "tampilan array sesudah diurutkan dari yang terbesar hingga terkecil\n";
	
for (int i = 0; i < vect.size(); i++)
{
	cout << vect[i] << " |";
}

cout << '\n';

cout << "median data diatas adalah: ";
	
median = (vect[4] / 2) + (vect[5] / 2);
	
cout << median;
}

