// Binary search in C++

#include <iostream>
using namespace std;


int BinarySearch (int a[], int n, int x)
{
	int left = 0;
	int right = n - 1;

	while (left <= right){
		int middle = (left + right) / 2;

		if (x == a[middle]) return middle;
		if (x > a[middle]) left = middle + 1;
		else right = middle - 1;
	}
	return -1;
}


int main(){
	int result;
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	result = BinarySearch(a, 10, 7);
	cout << result << endl;
	return 0;
}
