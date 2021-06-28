void troca(int *n1, int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void insercao(int *v, int n){
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
