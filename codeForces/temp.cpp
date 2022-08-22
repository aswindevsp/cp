#include <stdio.h>
int main() {
	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	
	float arr[n];
	
	float sum = 0;
	
	printf("Enter array elements: ");
	for(int i=0; i<n; i++) {
		scanf("%f", &arr[i]);
		sum += arr[i];
	}


	printf("Sum: %f\n", sum);
	printf("Averge: %f\n", sum/n);
	

}