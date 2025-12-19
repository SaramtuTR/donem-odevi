#include<stdio.h>
#include<string.h>
void SezarSifreleme(char mesaj[], int anahtar);
void SezarCozum(char mesaj[], int anahtar);
int main(){
    char mesaj[100];
    int anahtar;
    printf("Bir mesaj giriniz: ");
    fgets(mesaj, sizeof(mesaj), stdin);
    printf("Anahtar sayisini giriniz: ");
    scanf("%d", &anahtar);
    SezarSifreleme(mesaj, anahtar);
    printf("Sifrelenmis mesaj: %s", mesaj);
    SezarCozum(mesaj, anahtar);
    
return 0;
}
void SezarSifreleme(char mesaj[], int anahtar){
    for(int i=0; i<mesaj[i]!='\0'; i++){
       
        if(mesaj[i]>='a' && mesaj[i]<='z'){
            mesaj[i]=(mesaj[i] - 'a' + anahtar) % 26 + 'a';
        }else if(mesaj[i]>='A' && mesaj[i]<='Z'){
            mesaj[i]=(mesaj[i] - 'A' + anahtar) % 26 + 'A';
        }
            
    }
}
void SezarCozum(char mesaj[], int anahtar){
    SezarSifreleme(mesaj, 26 - (anahtar % 26));
}