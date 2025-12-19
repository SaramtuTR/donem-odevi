#include<stdio.h>
int ucgenSayi(int n);
void ucgenSayiYazdir(int adet);
void  ucgenYazdir(int adet);
   int main(){
int adet;
printf("ucgen sayisini giriniz: ");
scanf("%d",&adet);
ucgenSayiYazdir(adet);
printf("\n");
ucgenYazdir(adet);

 return 0;
   }
   int ucgenSayi(int n){
    if(n==1){
        return 1;
    }
    return n +ucgenSayi(n-1);
   }
   void ucgenSayiYazdir(int adet){
for(int i=1; i<=adet; i++){
printf("%d ",ucgenSayi(i));
}
   }
   void ucgenYazdir(int adet){
      int sayi=1;
   for(int i=1; i<=adet; i++){
    for(int j=0; j<adet-i; j++){
        printf(" ");
       
      }
      for(int k=0; k<i; k++){
         printf("%d ",sayi);
         sayi++;
      }
      printf("\n");

   }  }