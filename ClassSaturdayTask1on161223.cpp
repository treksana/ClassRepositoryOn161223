#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "number of array's elements: ";
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		*(arr + i) = 10+rand()%91;
	for (int i = 0; i < n; i++)
		cout << *(arr + i) << " ";
	return 0;
}
