#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct compu {
int velocidad;//entre 1 y 3 Gherz
int anio;//entre 2000 y 2017
int cantidad;//entre 1 y 4
char *tipo_cpu;//valores del arreglo tipos
};



void cargarPC(struct compu *pc,int n,char tipos[][10]);
void listaPC(struct compu *pc,int n);
void masVieja(struct compu *pc,int n);
void mayorVelocidad(struct compu *pc,int n);
struct compu PC(struct compu *pc,char tipos[][10]);


int main(){
    struct compu *pc;
    int n;
    char tipos[6][10]={"Intel","AMD", "Celeron", "Athlon", "Core", "Pentium"};

    printf("ingrese cantidad\n");
    scanf("%d",&n);
    
    pc=(struct compu*)malloc(sizeof(struct compu)*n);
    cargarPC(pc,n,tipos);
    listaPC(pc,n);
    masVieja(pc,n);
    mayorVelocidad(pc,n);
    free(pc);
    return 0;
}
void cargarPC(struct compu *pc,int n,char tipos[][10]){

    for(int i=0;i<n;i++){
        PC(pc,tipos);
        pc++;

    }
}
struct compu PC(struct compu *pc,char tipos[][10]){

    int aleatorio,longitud;
    pc->velocidad=rand()%(3-1)+1;
    pc->anio=rand()%(2017-2000)+2000;
    pc->cantidad=rand()%(4-1)+1;
    aleatorio=rand()%5;
    longitud=strlen(tipos[aleatorio]);
    pc->tipo_cpu=(char *)malloc(sizeof(char)*longitud);
    strcpy(pc->tipo_cpu,tipos[aleatorio]);
    return *pc;
}
void listaPC(struct compu *pc,int n){

    for(int i=0;i<n;i++){
        printf("velocidad de pc:%d Gherz\n",pc->velocidad);
        printf("anio de pc:%d\n",pc->anio);
        printf("cantidad de pc:%d\n",pc->cantidad);
        printf("tipo cpu de pc:%s\n\n\n",pc->tipo_cpu);
        pc++;   
    }
}
void masVieja(struct compu *pc,int n){
    
    int aux=2020;
    for(int i=0;i<n;i++ ){
        if(pc->anio<aux){
            aux=pc->anio;
        }
        pc++;
    }
    printf("pc mas vieja:%d\n",aux);
}
void mayorVelocidad(struct compu *pc,int n){

    int aux=0;
    for(int i=0;i<n;i++ ){
        if(pc->velocidad>aux){
            aux=pc->velocidad;
        }
        pc++;
    }
    printf("pc con mayor velocidad:%d\n",aux);
}