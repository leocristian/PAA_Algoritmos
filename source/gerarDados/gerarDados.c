void gerarDados(int  v[], int n, int ordemChave){
    int i, j=n-1;
    if(ordemChave == 0){
        for(i=0;i<n;i++){
            v[i] = i;
        }
    }else if(ordemChave == 1){
        for(i=0;i<n;i++){
            v[i] = rand()%n;
        }
    }else if(ordemChave == 2){
        for(i=0;i<n;i++,j--){
            v[i] = j;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ", v[i]);
    }
}