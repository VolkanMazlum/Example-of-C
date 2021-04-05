/* 2d arrayin etrafini yazdiran program 
123
456  --->   12369874
789
#include <stdio.h>
int main(void) {
	int arr[20][20], i = 0, j = 0,n=0,num=1,counter=1;
	printf("Enter n: ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			arr[i][j] = num;
			num++;
		}
	}
    for (i = 0,j=0; j < n ; j++) {
			printf(" %d", arr[i][j]);
	}
	for (i = 1,j=n-1; i < n ; i++) {
		printf(" %d", arr[i][j]);
	}
	for (j = n - 2, i = n - 1; j >= 0; j--) {
		printf(" %d", arr[i][j]);
	}
	for (i = n - 2, j=0; i > 0; i--) {
		printf(" %d", arr[i][j]);
	}
	return(0);
}
*/