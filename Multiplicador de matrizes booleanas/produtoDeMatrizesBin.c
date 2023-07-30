// O código a seguir efetua o cálculo da multiplicação entre duas matrizes booleanas.

#include <stdio.h>
#include <stdlib.h>

int calcular(int **mA, int **mB, int nlinA, int nlinB, int ncolA, int ncolB){
    int i, j, k, aux;
    int **m = (int**) malloc(sizeof(int) * nlinA);

    for(i=0; i < nlinA; i++){
        m[i] = (int*) malloc(sizeof(int) * ncolB);
    }

    i=0;
    while(i < nlinA){
        for(j=0; j<ncolB; j++){
            m[i][j] = 0;
            for(k=0; k<nlinB; k++){
            if(mA[i][k] == 1 && mB[k][j] == 1){
                m[i][j] = 1;
                break;
            }
        }


    }
        i++;
    }

    for(i=0; i < nlinA; i++){
        for(j=0; j < ncolB; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main(void){
    int i, j, k, nlinA, nlinB, ncolA, ncolB;

    int **mA = malloc(sizeof(int*) * 4);
    int **mB = malloc(sizeof(int*) * 4);

    do{
        printf("\n===MATRIZ A===\n");
        do{
            printf("informe o numero de linhas: ");
            scanf("%d", &nlinA);
            if(nlinA < 1 || nlinA > 4){
                printf("numero invalido. Tente novamente\n");
            }
        }while(nlinA > 4 || nlinA < 1);
        do{
            printf("informe o numero de colunas: ");
        scanf("%d", &ncolA);
            if(ncolA < 1 || ncolA > 4){
            printf("numero invalido. Tente novamente\n");
        }
        }while(ncolA > 4 || ncolA < 1);
        printf("\n===MATRIZ B===\n");
        do{
            printf("informe o numero de linhas: ");
        scanf("%d", &nlinB);
            if(nlinB < 1 || nlinB > 4){
            printf("numero invalido. Tente novamente\n");
        }
        }while(nlinB > 4 || nlinB < 1);
        do{
            printf("informe o numero de colunas: ");
        scanf("%d", &ncolB);
            if(ncolB < 1 || ncolB > 4){
            printf("numero invalido. Tente novamente\n");
        }
        }while(ncolB> 4 || ncolB < 1);

        if(nlinB != ncolA){

            printf("Para que a operacao tenha exito, o numero de colunas da primeira matriz informada  deve ser igua ao de linhas da segunda");
        }


    }while( ncolA != nlinB );


    for(i=0; i< nlinA; i++){
        mA[i] = (int*) malloc(sizeof(int) * ncolA);
    }

    for(i=0; i<nlinB; i++)
            mB[i] = (int*) malloc(sizeof(int) * ncolB);

    printf("Agora, informe numeros binarios (0 ou 1) para preencher a matriz A:\n");
    for(i=0; i<nlinA; i++){
        for(j=0; j<ncolA; j++){
                do{
                    scanf("%d", &mA[i][j]);
                    if(mA[i][j]!= 0 && mA[i][j] != 1){
                        printf("Informe novamente. Somente numeros entre 0 e 1 sao aceitos.\n");
                    }
                }while(mA[i][j] != 0 && mA[i][j] != 1);

        }
    }

    printf("Agora, informe numeros binarios (0 ou 1) para preencher a matriz A:\n");

    for(i=0; i<nlinB; i++){
        for(j=0; j<ncolB; j++){
            do{
                    scanf("%d", &mB[i][j]);
                    if(mB[i][j]!= 0 && mB[i][j] != 1){
                        printf("Informe novamente. Somente numeros entre 0 e 1 sao aceitos.\n");
                    }
                }while(mB[i][j] != 0 && mB[i][j] != 1);
        }
    }

     calcular(mA, mB, nlinA, nlinB, ncolA, ncolB);


    return 0;
}
