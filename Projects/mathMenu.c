#include <stdio.h>
#include <stdlib.h>

int main(){

    int ilkSayi, ikinciSayi, sonuc, islem;
    double sayi, sonuc2, sonuc3;
    
    printf("\n\n");
    printf("Matematik Menusu\n");
    printf("**********************************\n");
    printf("\n");
    printf("1-Karede alan ve cevre hesabi\n");
    printf("2-Girilen sayilarin kupu\n");
    printf("3-Cemberde alan ve cevre hesabi\n");
    printf("4-5x2+7x+9 x e gore islemin sonucu\n");
    printf("5-Dikdortgende alan ve cevre hesabi\n");
    printf("6-Sayinin karesi\n");
    printf("7-Sayinin karesini alma\n");
    printf("8-Sayiyi yukariya ve asagiya yuvarlama\n\n");
    printf("9-Sayinin gucunu alma\n");
    printf("10-Sayinin logaritmasini alma\n");
    printf("11-Sayinin sinini alma\n");
    printf("12-Sayinin cosunu alma\n");
    printf("Isleminizi secin: ");
    scanf("%d",&islem);
    printf("\n\n");

    switch(islem){

    case 1:
    printf("karenin bir cevre uzunlugunu giriniz: ");
    scanf("%d",&ilkSayi);
    sonuc = ilkSayi*ilkSayi;
    printf("alan: %d\n",sonuc);
    sonuc = ilkSayi * 4;
    printf("cevre: %d\n",sonuc);
    break;

    case 2:
    printf("Birinci sayi: ");
    scanf("%d",&ilkSayi);
    printf("Ikinci sayi: ");
    scanf("%d",&ikinciSayi);
    printf("\n");
    sonuc = ilkSayi*ilkSayi*ilkSayi;
    printf("Ilk sayinin kupu: %d\n",sonuc);
    sonuc = ikinciSayi*ikinciSayi*ikinciSayi;
    printf("Ikinci sayinin kupu: %d\n",sonuc);
    break;

    case 3:
    printf("Cemberin yaricapini giriniz: ");
    scanf("%d",&ilkSayi);
    sonuc = 2*3*ilkSayi;
    printf("Cemberin cevresi: ");
    printf("%d\n",sonuc);
    sonuc = ilkSayi*ilkSayi*3;
    printf("Cemberin alani: ");
    printf("%d",sonuc);
    break;

    case 4:
    printf("Sayinizini giriniz: ");
    scanf("%d",&ilkSayi);
    sonuc = 5*2+7*ilkSayi+9;
    printf("Sonuc= %d",sonuc);
    break;

    case 5:
    printf("Dikdortgenin uzun kenarinin uzunlugunu giriniz: ");
    scanf("%d",&ilkSayi);
    printf("Dikdortgenin kisa kenarinin uzunlugunu giriniz ");
    scanf("%d",&ikinciSayi);
    sonuc = ilkSayi * 2 + ikinciSayi * 2;
    printf("Dikdortgenin cevresi: %d\n",sonuc);
    sonuc = ilkSayi * ikinciSayi;
    printf("Dikdortgenin alani: %d",sonuc);
    break;

    case 6:
    printf("Bir sayi giriniz: ");
    scanf("%d",&ilkSayi);
    sonuc2 = sqrt(ilkSayi);
    printf("Sonuc: %.2f",sonuc2);
    break;

    case 7:
    printf("Taban giriniz: ");
    scanf("%d",&ilkSayi);
    printf("Us giriniz: ");
    scanf("%d",&ikinciSayi);
    sonuc=pow(ilkSayi,ikinciSayi);
    printf("Sonuc: %d",sonuc);
    break;

    case 8:
    printf("Kusuratli bir sayi giriniz: ");
    scanf("%lf",&sayi);
    sonuc2 = floor(sayi);
    sonuc3 = ceil(sayi);
    printf("Sayiyi asagiya yuvarlayinca: %.f\n",sonuc2);
    printf("Sayiyi yukariya yuvarlayinca: %.f\n",sonuc3);
    break;

    case 9:
    printf("Bir sayi giriniz: ");
    scanf("%lf",&sayi);
    sonuc2 = fabs(sayi);
    printf("Sonuc: %.lf",sonuc2);
    break;

    case 10:
    printf("Bir sayi giriniz: ");
    scanf("%lf",&sayi);
    sonuc2 = log10(sayi);
    printf("Sonuc: %.7lf",sonuc2);
    break;

    case11:
    printf("Bir derece giriniz: ");
    scanf("%lf",&sayi);
    sonuc2 = sin(sayi);
    printf("Sinus: %lf\n",sonuc2);
    break;

    case12:
    printf("Bir derece giriniz: ");
    scanf("%lf",&sayi);
    sonuc2 = cos(sayi);
    printf("Cosinus: %lf\n",sonuc2);
    break;

    default: printf("Lutfen secenklerde bulunan sayilardan birisini giriniz\n");
    }

    return 0;

}




