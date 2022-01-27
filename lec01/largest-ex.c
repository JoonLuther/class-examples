#include<stdio.h>
#include<stdlib.h>

int largest(int arr[], int n) {
	int temp = -999;
	for(int i = 0; i < n; i++) {
		if(arr[i] > temp) {
			temp = arr[i];
		}
	}
	return temp;
}

int main() {
	int values[10];
	for(int i = 0; i < 10; i++) {
		values[i] = rand()*100;
	}

	printf("The largest is %d\n", largest(values,10));

}
