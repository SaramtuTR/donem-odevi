#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define aylar 12
void kazancHesapla(int kazanc[aylar]);
    int maxKazanc(int kazanc[aylar]);
void satirGrafik(int kazanc[aylar]);
void sutunGrafik(int kazanc[aylar]);
int main(){
   int kazanc[aylar];
srand(time(0));
   kazancHesapla(kazanc);
   for(int i=0;i<aylar;i++){
      printf("%d. ay kazanci: %dK\n",i+1,kazanc[i]);
    }
    printf("Yillik en yuksek kazanc: %dK\n",maxKazanc(kazanc));
    satirGrafik(kazanc);
    sutunGrafik(kazanc);
   return 0;
}
void kazancHesapla(int kazanc[aylar]){
   for(int i=0;i<aylar;i++){
      kazanc[i]=(rand()%10)+1; 
    } }
        int maxKazanc(int kazanc[aylar]){
   int max=kazanc[0];
   for(int i=1;i<aylar;i++){
      if(kazanc[i]>max){
         max=kazanc[i];
        }
    }
   return max;
}
void satirGrafik(int kazanc[aylar]){
   for(int i=0;i<aylar;i++){
      printf("%d. ay: ",i+1);
      for(int j=0;j<kazanc[i];j++){
         printf(" *");
        }
      printf("\n");
    }printf("\n");
}
void sutunGrafik(int kazanc[aylar]){
    int max=maxKazanc(kazanc);
    for(int i=max;i>=1;i--){
        for(int j=0;j<aylar;j++){
            if(kazanc[j]>=i){
                printf(" * ");
             } else {
                printf("   ");
             }
          }
        printf("\n");
     }
    
    for(int l=0;l<aylar;l++){
        if(l>9)
            printf("%d ",l+1);
        else
        printf(" %d ",l+1);
     }
    printf("\n");
}