#include <stdio.h>
#include <stdlib.h>
#define F 15

int main(){

    int i,j,pares;
    int C=rand()%(15-5+1)+5;
    int mt[F][C];
    int v[F];

    //cargando matriz
    for(i=0;i<F;i++){
        pares=0;
        for(j=0;j<C;j++){
            mt[i][j]=rand()%(999-100+1)+100;
            if(mt[i][j]%2==0){
                pares++;
            }
        }
        //generando vector dinamico
        v[i]=pares;
    }
    
    //mostrando matriz
   for(i=0;i<F;i++){
       for(j=0;j<C;j++){
           printf(" %d",mt[i][j]);
       }
       printf("\n");
   }

    return 0;
}