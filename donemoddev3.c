#include<stdio.h>
int asalKontrol(int sayi);
int unluKontrol(char c);
void isimYazdir();
int main(){
    isimYazdir();
    return 0;
}
int asalKontrol(int sayi){
    if(sayi<2) return 0;
    for(int i=2;i<=sayi/2;i++){
        if(sayi%i==0) return 0;
    }
    return 1;
}
int unluKontrol(char c){
    char unluler[5]={'a','e','i','o','u'};
    for(int i=0;i<5;i++){
        if(c==unluler[i]) return 1; 
    }
    return 0;
}
void isimYazdir(){
    int sayac=0;
    printf(" gecerli isimler: \n");
    for(char a='a';a<='z';a++){
        for(char b='a';b<='z';b++){
            char c= a;
            int degerToplam = a+b+c;
            if(asalKontrol(degerToplam)) {
                int olasilik1 = unluKontrol(a) && !unluKontrol(b) && unluKontrol(c);
                int olasilik2 = !unluKontrol(a) && unluKontrol(b) && !unluKontrol(c);
                if(olasilik1 || olasilik2) {
                    
                    printf("%d. isim: %c%c%c\n",sayac+1,a,b,c);
                    sayac++;
            }
}
        }
    }
    printf("Toplam gecerli isim sayisi: %d\n",sayac);
    }
    