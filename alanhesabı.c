#include<stdio.h>

int main(){
    
    int a;
    int yukseklik;
    int taban;
    int ucgen;
    int kenar;
    int kare;
    int yaricap;
    int daire;
    int pi=3;

    





    printf("Üçgen,Kare ve Çember şekillerinden birini seçiniz \n" );
    printf("Üçgen için 1\n");
    printf("Kare için 2 \n");
    printf("Daire için 3 tuşlayınız \n");
    scanf("%d",&a);
    
    if (a==1){

        printf("Üçgenin Tabanını ve Yüksekliğini Giriniz..\n");
        scanf("%d",&taban);
        scanf("%d",&yukseklik);
        ucgen=(taban*yukseklik)/2;
        printf("Üçgenin Alanı:%d",ucgen);
    
    }

    else if (a==2)
    {
        printf("Karenin Kenar Uzunluğunu Giriniz\n");
        scanf("%d",&kenar);
        kare=kenar*kenar;
        printf("Karenizin Alanı: %d",kare);

    }
    else if(a==3)
    {
        printf("Dairenin Yarıçapını Giriniz\n");
        scanf("%d",&yaricap);
        daire=pi*yaricap*yaricap;
        printf("Dairenin Alanı: %d",daire);


    }
    
    else
    {

        printf("Lütfen 1 ile 3 Arasında Tuşlama Yapınız!!!!");
    }


    return 0;
    
}