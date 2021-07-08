#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"ordenacao.h"


int main(int argc, char const *argv[])
{
    int op, qtd;

    double t_total;

    clock_t t_ini, t_fim;

    printf("1 - Melhor\n2 - Médio\n3 - Pior\n");
    printf("Escolha um caso:");
    scanf("%d", &op);

    printf("Digite a quantidade de valores: ");
    scanf("%d", &qtd);

    int vet[qtd];

    printf("OP: %d\n", op);
    gerarDados(vet, qtd, op);

    switch (op) {
        case 1:
            printf("Resultados para o MELHOR caso\n");
            t_ini = clock();
            bubble(vet, qtd);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            insertion(vet, qtd);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            selection(vet, qtd);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            quick_sort(vet, 0, qtd-1);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            mergeSort(vet, 0, qtd-1);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);
            break;
        
        case 2:
            printf("Resultados para o caso MÉDIO\n");

            t_ini = clock();
            bubble(vet, qtd);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            insertion(vet, qtd);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            selection(vet, qtd);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            quick_sort(vet, 0, qtd-1);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            mergeSort(vet, 0, qtd-1);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);
            break;
        
        case 3:
            printf("Resultados para o PIOR caso\n");
            t_ini = clock();
            bubble(vet, qtd);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            insertion(vet, qtd);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            selection(vet, qtd);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            quick_sort(vet, 0, qtd-1);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);

            t_ini = clock();
            mergeSort(vet, 0, qtd-1);
            t_fim = clock();
            t_total = (t_fim - t_ini);

            printf("%f\n", t_total);
            break;
        default:
            break;
    }

    return 0;
}
