#include<stdio.h>
#define boyut 5
int yolKontrol(int labirent[boyut][boyut], int a, int b,int yol[boyut][boyut]);
void yolYaz(int yol[boyut][boyut]);
int main(){
int labirent[boyut][boyut]={
        {1,1,0,1,1},
        {0,1,0,1,0},
        {1,1,1,1,1},
        {0,0,1,0,1},
        {1,1,1,0,1}
};
 int yol[boyut][boyut] = {0};
    if (yolKontrol(labirent, 0, 0, yol)) {
        printf("Cikis var.\n");
        yolYaz(yol);
    } else {
        printf("Cikis yok.\n");
}
    return 0;
}
int yolKontrol(int labirent[boyut][boyut], int a, int b,int yol[boyut][boyut]){
    if(a<0 || b<0 || a>=boyut || b>=boyut ) 
    return 0;
     if (labirent[a][b] == 0 || yol[a][b] == 1) return 0;
   yol[a][b] = 1;

    if (a == boyut-1 &&  b== boyut-1) return 1;
    if (yolKontrol(labirent, a+1, b, yol)) return 1;
    if (yolKontrol(labirent, a-1, b, yol)) return 1;
    if (yolKontrol(labirent, a, b+1, yol)) return 1;
    if (yolKontrol(labirent, a, b-1, yol)) return 1;
    yol[a][b] = 0;
    return 0;
}
void yolYaz(int yol[boyut][boyut]){
    for(int i=0;i<boyut;i++){
        for(int j=0;j<boyut;j++){
            printf("%d ",yol[i][j]);
        }
        printf(" \n");
    }
}
