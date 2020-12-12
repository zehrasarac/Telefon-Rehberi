#include <stdio.h>
#include <stdlib.h>
int main(){
    double telefon [11]= {0,0,0,0,0,0,0,0,0,0,0};
    int secim,sira,kontrol;
    printf("..........Telefon Rehberi..........\n");
    printf("Menu \n 1-Numara Eklemek \n 2-Numara Silmek \n 3-Listelemek \n 4-Cikis icin \n Secim Yapiniz: ");
    scanf("%d",&secim);
    int x=0;
 
while(secim!=4){
 
    switch(secim){
        case 1:
        printf("Telefon No Giriniz ");
        scanf("%lf",&telefon[x]);
        x++;
        break;
    
        case 2:
        printf("Silmek İstediğiniz telefonun sıra numarasını giriniz");
        scanf("%d",&sira);
        telefon[sira-1]=0;
        printf("islem basarili");
        break;

        case 3:
        for(int i=0; i<10; i++){
            printf("%d. kisinin teli %.lf dir\n",i+1,telefon[i]);
        }
        break;

        case 4:
        break;
 
}
printf("Menu \n\n 1-Numara Eklemek \n 2-Numara Silmek \n 3-Listelemek \n 4-Cikis icin \n Secim Yapiniz: ");
scanf("%d",&secim);
}
return 0;
}