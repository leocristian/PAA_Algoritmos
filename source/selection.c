void troca(int *n1, int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
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