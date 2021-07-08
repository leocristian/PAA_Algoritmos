#include"ordenacao.h"
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

void troca(int *n1, int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void bubble(int *v, int n){
    int i, j, aux;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[i] > v[j])
                troca(&v[i], &v[j]);
        }
    }
}

void insertion(int *v, int n){
    int i, j;
    int aux;
    for(i=1;i<n;i++){
        aux = v[i];
        j = i - 1;
        while((j >= 0) && (aux < v[j])){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = aux;
    }
}

int partition(int A[], int p, int r) {
	int x = A[r]; //pivot
	int i = p - 1, j;
	for(j = p; j < r ; j++) {
		if(A[j] <= x) {
			i = i + 1;
			troca(&A[i], &A[j]); 
		}
	}
	i = i + 1;
	troca(&A[i], &A[r]);
	return i;
}
void quick_sort(int A[], int p, int r) {
	if(p < r) {
		int t = (rand() % ( r - p + 1) + p);
		troca(&A[t], &A[r]); 
		//Used to avoid O(n^2) worst case
		
		int q = partition(A, p, r);
		quick_sort(A, p, q - 1);
		quick_sort(A, q + 1, r);
	}
}

void selection(int *v, int n){
    int i, j, min;
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(v[j] < v[min])
                min = j;
        }
        troca(&v[i], &v[min]);
    }
}

void merge(int arr[], int l, int m, int r){ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
        
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){ 
        if (L[i] <= R[j]){ 
            arr[k] = L[i]; 
            i++; 
        } 
        else{ 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 

    while (i < n1){ 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 

    while (j < n2){ 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(int arr[], int l, int r){ 
    if (l < r){ 
        int m = l+(r-l)/2; 

        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

void mostrarVetor(int A[], int n) {
	int i = 0;
	putchar('[');
	while(i < n) {
		if(i > 0) printf(", ");
		printf("%d", A[i++]); 
	}
	puts("]");
}


void gerarDados(int  v[], int n, int ordemChave){
    int i, j=n-1;
    if(ordemChave == 1){
        for(i=0;i<n;i++){
            v[i] = i;
        }
    }else if(ordemChave == 2){
        for(i=0;i<n;i++){
            v[i] = rand()%n;
        }
    }else if(ordemChave == 3){
        for(i=0;i<n;i++,j--){
            v[i] = j;
        }
    }
}