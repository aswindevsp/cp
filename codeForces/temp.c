#include <stdio.h>
int serach(int arr[], int n, int findValue) {
	for(int i=0; i<n; i++) {
		if(arr[i] == findValue) 
			return i;
	}
	
	return -1;
}
int main() {
	int n; //array size
	printf("Enter array limit: ");
	scanf("%d", &n);
	
	int arr[n], findValue;
	
	printf("Enter arrya elements: ");
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Enter number you wanna search: ");
	scanf("%d", &findValue);
	
	int position = serach(arr, n, findValue);
	
	if(position == -1) {
		printf("Element not in the array. \n");
	} else {
		printf("Element found at array position %d \n", position);
	}
}