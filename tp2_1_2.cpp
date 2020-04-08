#include <stdio.h>
#define N 4
#define M 5
int main(){
int f,c;
double mt[N][M]={
    {1,2,34,1,1},
    {2,31,12,3,1},
    {23,2,21,21,1},
    {1,23,2,1,3},
};
double *punt=&mt[0][0];
for(f = 0;f<N; f++){
    for(c = 0;c<M; c++){
    printf("  %.f" , *(punt+(f*M+c)));
    }
    printf("\n");
}
    return 0;
}