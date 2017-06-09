#include <iostream>
using namespace std;
void merge (int arr1[], int arr2[], int len1, int len2) {
		int arr3[20];
		int p = 0;
		int q = 0;
		int k = 0;
		while ( p < len1 && q < len2) {
			if (arr1[p] < arr2[q]) {
				arr3[k++] = arr1[p++];
			} else {
				arr3[k++] = arr2[q++];
			}		
		}
		while ( p < len1){
			arr3[k++] = arr1[p++];
		}
		while ( q < len2) {
			arr3[k++] = arr2[q++];
		}
		for ( int c = 0; c < k; c++) {
			cout<< arr3[c]<<" ";
		}
}

int main() {
	int arr1[10], arr2[10], len1, len2;
    cout << "Enter the length of first array \n";
    cin >> len1;
    cout << "Enter the length of second array \n";
    cin >> len2;
    cout << "Enter sorted values for first array \n";
	for (int i = 0; i < len1; i++) {
		   cin >> arr1[i];
	}
	cout << "Enter sorted values for second array \n";
	for (int j = 0; j < len2; j++) {
		cin>>arr2[j];
	}
	merge(arr1, arr2, len1, len2);
	return 0;
}