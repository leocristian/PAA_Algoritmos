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

