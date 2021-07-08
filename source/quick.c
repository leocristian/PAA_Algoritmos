#include <stdio.h>
#include <stdlib.h>
#define swap(t, x, y) { t z = x; x = y; y = z; }

int main(){
	puts("-----Quick Sort-----");
	int A[] = {2, 3, 4, 156, 12, 44, 55, 68, 11, 32, 54, 6, 7, 8, 34, 56, 76, 78, 98, 2673, 666};
	int n = sizeof(A) / sizeof(int);
	
	printf("Unsorted: ");
	print_array(A, n);
	
	printf("Sorted: ");
	quick_sort(A, 0, n - 1);
	print_array(A, n);
	
	return EXIT_SUCCESS;
}
int partition(int A[], int p, int r) {
	int x = A[r]; //pivot
	int i = p - 1, j;
	for(j = p; j < r ; j++) {
		if(A[j] <= x) {
			i = i + 1;
			swap(int, A[i], A[j]); 
		}
	}
	i = i + 1;
	swap(int, A[i], A[r]);
	return i;
}
void quick_sort(int A[], int p, int r) {
	if(p < r) {
		int t = (rand() % ( r - p + 1) + p);
		swap(int, A[t], A[r]); 
		//Used to avoid O(n^2) worst case
		
		int q = partition(A, p, r);
		quick_sort(A, p, q - 1);
		quick_sort(A, q + 1, r);
	}
}
void print_array(int A[], int n) {
	int i = 0;
	putchar('[');
	while(i < n) {
		if(i > 0) printf(", ");
		printf("%d", A[i++]); 
	}
	puts("]");
}
