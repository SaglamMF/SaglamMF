#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int suAdeti,kolaAdeti,fuseteaAdeti,spriteAdeti,paraMiktari,avantajIstiyor,sonKarar,biletSayisi,patlamisMisirIstiyor,icecekIstiyor,
    meyveliSodaAdeti,sodaAdeti,miniBoyMisirAdeti,kucukBoyMisirAdeti,ortaBoyMisirAdeti,buyukBoyMisirAdeti,megaBoyMisirAdeti,istenenAvantajMenu,
    avantajMenuAdeti,ikiKisilikAvantajMenuAdeti,sevgiliAvantajMenuAdeti,a,b;

    float toplamFiyat, paraUstu, suFiyati,kolaFiyati,fuseteaFiyati,spriteFiyati,meyveliSodaFiyati,sodaFiyati,miniBoyMisirFiyati,
    kucukBoyMisirFiyati,ortaBoyMisirFiyati,buyukBoyMisirFiyati,megaBoyMisirFiyati,biletFiyati;

    printf("-------------------------------------------------\n");
    printf("Patlamis Misir Boylari\n");
    printf("\n");
    printf("Mini Boy Patlamis Misir: 5TL\n");
    printf("Kucuk Boy Patlamis Misir: 7.25TL\n");
    printf("Orta Boy Patlamis Misir: 10TL\n");
    printf("Buyuk Boy Patlamis Misir: 12.75TL\n");
    printf("Mega Boy Patlamis Misir: 15TL\n");
    printf("-------------------------------------------------\n");
    printf("icecekler\n");
    printf("\n");
    printf("Su: 2TL\n");
    printf("Kola: 5TL\n");
    printf("Fuse tea: 5.75TL\n");
    printf("Sprite: 5TL\n");
    printf("Meyveli soda: 4.50TL\n");
    printf("Soda: 3TL\n");
    printf("-------------------------------------------------\n");
    printf("Avantaj Menuler\n");
    printf("\n");
    printf("Avantaj Menu: 20TL\n");
    printf("icecek + kucuk boy patlamis misir + bilet\n");
    printf("\n");
    printf("Iki Kisilik Avantaj Menu: 35TL\n");
    printf("2x icecek + 2x orta boy patlamis misir + 2x bilet\n");
    printf("\n");
    printf("Sevgililer Avantaj Menu: 40TL\n");
    printf("2x icecek + mega boy patlamis misir + 2x bilet\n");
    printf("-------------------------------------------------\n");
    printf("Bilet: 12TL\n");
    printf("-------------------------------------------------\n");

    printf("Para miktarinizi giriniz: ");
    scanf("%d",&paraMiktari);

    a=1;
    b=30;

    for (a=1;a<=b;a++)
    {
    printf("Avantaj menulerden faydalanmak ister misiniz? (1)Evet / (2)Hayir\n");
    scanf("%d",&avantajIstiyor);


    printf("Son karariniz mi? (1)Evet / (2)Hayir \n");
    scanf("%d",&sonKarar);

    if (sonKarar==1)
    {
        a=40;
    }

    }

        if (avantajIstiyor==1) {
        printf("-------------------------------------------------\n");
        printf("Avantaj Menuler\n");
        printf("\n");
        printf("Avantaj Menu: 20TL\n");
        printf("icecek + kucuk boy patlamis misir + bilet\n");
        printf("\n");
        printf("Iki Kisilik Avantaj Menu: 35TL\n");
        printf("2x icecek + 2x orta boy patlamis misir + 2x bilet\n");
        printf("\n");
        printf("Sevgililer Avantaj Menu: 40TL\n");
        printf("2x icecek + mega boy patlamis misir + 2x bilet\n");
        printf("-------------------------------------------------\n");
        printf("Avantaj Menu (1)\n");
        printf("Iki Kisilik Avantaj Menu (2)\n");
        printf("Sevgililer Avantaj Menu (3)\n");
        printf("-------------------------------------------------\n");
        printf("\n");

        printf("Hangi menuden faydalanmak istersiniz? (1)/(2)/(3)\n");
        scanf("%d",&istenenAvantajMenu);

        if (istenenAvantajMenu==1){
            printf("Kac adet Avantaj Menu istersiniz?\n");
            scanf("%d",&avantajMenuAdeti);

            toplamFiyat = 20 * avantajMenuAdeti;
            paraUstu = paraMiktari - toplamFiyat;

            if (paraUstu<0) {
                printf("Yetersiz Bakiye\n");
            }
            if (paraUstu>=0){
                printf("-------------------------------------------\n");
                printf("Avantaj Menu adeti: %d ",avantajMenuAdeti);
                printf(" %.2f ",toplamFiyat);
                printf("TL\n");
                printf("-------------------------------------------\n");
                printf("Toplam fiyat: %.2f ",toplamFiyat);
                printf("TL\n");
                printf("Para ustu: %.2f ",paraUstu);
                printf("TL\n");
                printf("-------------------------------------------\n");
                printf("Iyi seyirler dileriz...\n");
                printf("-------------------------------------------\n");
            }
        }
        if (istenenAvantajMenu==2){
            printf("Kac adet Iki Kisilik Avantaj menu istersiniz?\n");
            scanf("%d",&ikiKisilikAvantajMenuAdeti);

            toplamFiyat = 35 * ikiKisilikAvantajMenuAdeti; 
            paraUstu = paraMiktari - toplamFiyat;

            if (paraUstu<0) {
                printf("Yetersiz Bakiye\n");
            }
            if (paraUstu>=0){
                printf("-------------------------------------------\n");
                printf("Iki Kisilik Avantaj Menu adeti: %d ",ikiKisilikAvantajMenuAdeti);
                printf(" %.2f ",toplamFiyat);
                printf("TL\n");
                printf("-------------------------------------------\n");
                printf("Toplam fiyat: %.2f ",toplamFiyat);
                printf("TL\n");
                printf("Para ustu: %.2f ",paraUstu);
                printf("TL\n");
                printf("-------------------------------------------\n");
                printf("Iyi seyirler dileriz...\n");
                printf("-------------------------------------------\n");
            }
        }
        if (istenenAvantajMenu==3){
            printf("Kac adet Sevgili Avantaj Menu istersiniz?\n");
            scanf("%d",&sevgiliAvantajMenuAdeti);

            toplamFiyat = 40 * sevgiliAvantajMenuAdeti;
            paraUstu = paraMiktari - toplamFiyat;

            if (paraUstu<0) {
                printf("Yetersiz Bakiye\n");
            }
            if (paraUstu>=0){
                printf("-------------------------------------------\n");
                printf("Sevgili Avantaj Menu adeti: %d ",sevgiliAvantajMenuAdeti);
                printf(" %.2f ",toplamFiyat);
                printf("TL\n");
                printf("-------------------------------------------\n");
                printf("Toplam fiyat: %.2f ",toplamFiyat);
                printf("TL\n");
                printf("Para ustu: %.2f ",paraUstu);
                printf("TL\n");
                printf("-------------------------------------------\n");
                printf("Iyi seyirler dileriz...\n");
                printf("-------------------------------------------\n");
        }

        }

        return 0;
        
    }

        if (sonKarar==1) {
            printf("Kac bilet istersiniz? \n");
            scanf("%d",&biletSayisi);

            printf("%d ",biletSayisi);
            printf("adet bilet aldiniz. \n");

            printf("Patlamis misir ister misiniz? (1)Evet / (2)Hayir \n");
            scanf("%d",&patlamisMisirIstiyor);

            if (patlamisMisirIstiyor==2) {
                printf("Icecek ister misiniz? (1)Evet / (2)Hayir \n");
                scanf("%d",&icecekIstiyor);

                biletFiyati = 12 * biletSayisi;
                toplamFiyat = biletFiyati;
                paraUstu = paraMiktari - toplamFiyat;

                if (icecekIstiyor==2) {
                    if (paraUstu<0) {
                        printf("Yetersiz Bakiye");
                    }
                    if (paraUstu>=0){
                        printf("---------------------------------\n");
                        printf("Bilet adeti: %d",biletSayisi);
                        printf("   %d",biletFiyati);
                        printf("TL\n");
                        printf("---------------------------------\n");
                        printf("Toplam fiyat: %.2f ",toplamFiyat);
                        printf("TL\n");
                        printf("Para ustu: %.2f ",paraUstu);
                        printf("TL\n");
                        printf("---------------------------------\n");
                        printf("Iyi seyirler dileriz...\n");
                        printf("---------------------------------\n");

                        return 0;
                    }

                }
                if (icecekIstiyor==1) {
                    printf("Kac adet su istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&suAdeti);

                    printf("Kac adet kola istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&kolaAdeti);

                    printf("Kac adet Fuse Tea istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&fuseteaAdeti);

                    printf("Kac adet Sprite istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&spriteAdeti);

                    printf("Kac adet meyveli soda istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&meyveliSodaAdeti);

                    printf("Kac adet soda istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&sodaAdeti);

                    suFiyati = 2 * suAdeti;
                    kolaFiyati = 5 * kolaAdeti;
                    fuseteaFiyati = 5.75 * fuseteaAdeti;
                    spriteFiyati = 5 * spriteAdeti;
                    meyveliSodaFiyati = 4.50 * meyveliSodaAdeti;
                    sodaFiyati = 3 * sodaAdeti;
                    biletFiyati = 12 * biletSayisi;
                    toplamFiyat = suFiyati + kolaFiyati + fuseteaFiyati + spriteFiyati + meyveliSodaFiyati + sodaFiyati + biletFiyati;
                    paraUstu = paraMiktari - toplamFiyat;

                    if (paraUstu<0) {
                        printf("Yetersiz Bakiye");
                    }
                    if (paraUstu>=0) {
                        printf("---------------------------------\n");
                        printf("Bilet adeti: %d ",biletSayisi);
                        printf("         %.2f ",biletFiyati);
                        printf("TL\n");
                        printf("Su adeti: %d ",suAdeti);
                        printf("            %.2f ",suFiyati);
                        printf("TL\n");
                        printf("Kola adeti: %d ",kolaAdeti);
                        printf("          %.2f ",kolaFiyati);
                        printf("TL\n");
                        printf("Fuse Tea adeti: %d ",fuseteaAdeti);
                        printf("      %.2f ",fuseteaFiyati);
                        printf("TL\n");
                        printf("Sprite adeti: %d ",spriteAdeti);
                        printf("        %.2f ",spriteFiyati);
                        printf("TL\n");
                        printf("Meyveli soda adeti: %d ",meyveliSodaAdeti);
                        printf("  %.2f ",meyveliSodaFiyati);
                        printf("TL\n");
                        printf("Soda adeti: %d ",sodaAdeti);
                        printf("          %.2f ",sodaFiyati);
                        printf("TL\n");
                        printf("---------------------------------\n");
                        printf("Toplam fiyat: %.2f ",toplamFiyat);
                        printf("TL\n");
                        printf("Para ustu: %.2f ",paraUstu);
                        printf("TL\n");
                        printf("---------------------------------\n");
                        printf("Iyi seyirler dileriz...\n");
                        printf("---------------------------------\n");
                    }

                }
            }
            if (patlamisMisirIstiyor==1) {
                printf("Kac adet mini boy patlamis misir istersiniz? [istemiyorsaniz (0)]");
                scanf("%d",&miniBoyMisirAdeti);

                printf("Kac adet kucuk boy patlamis misir istersiniz? [istemiyorsaniz (0)]");
                scanf("%d",&kucukBoyMisirAdeti);

                printf("Kac adet orta boy patlamis misir istersiniz? [istemiyorsaniz (0)]");
                scanf("%d",&ortaBoyMisirAdeti);

                printf("Kac adet buyuk boy patlamis misir istersiniz? [istemiyorsaniz (0)]");
                scanf("%d",&buyukBoyMisirAdeti);

                printf("Kac adet mega boy patlamis misir istersiniz? [istemiyorsaniz (0)]");
                scanf("%d",&megaBoyMisirAdeti);

                printf("Icecek ister misiniz? (1)Evet / (2)Hayir \n");
                scanf("%d",&icecekIstiyor);

                        miniBoyMisirFiyati = 5 * miniBoyMisirAdeti;
                        kucukBoyMisirFiyati = 7.25 * kucukBoyMisirAdeti;
                        ortaBoyMisirFiyati = 10 * ortaBoyMisirAdeti;
                        buyukBoyMisirFiyati = 12.75 * buyukBoyMisirAdeti;
                        megaBoyMisirFiyati = 15 * megaBoyMisirAdeti;
                        biletFiyati = 12 * biletSayisi;
                        toplamFiyat = miniBoyMisirFiyati + kucukBoyMisirFiyati + ortaBoyMisirFiyati + buyukBoyMisirFiyati + megaBoyMisirFiyati + 
                        biletFiyati;
                        paraUstu = paraMiktari - toplamFiyat;

                        if (icecekIstiyor==2) {
                    if (paraUstu<0) {
                        printf("Yetersiz Bakiye");
                    }
                    if (paraUstu>=0){
                        printf("-------------------------------------------\n");
                        printf("Bilet adeti: %d ",biletSayisi);
                        printf(" %.2f ",biletFiyati);
                        printf("TL\n");
                        printf("Mini boy patlamis misir adeti:  %d ",miniBoyMisirAdeti);
                        printf(" %.2f ",miniBoyMisirFiyati);
                        printf("TL\n");
                        printf("Kucuk boy patlamis misir adeti: %d ",kucukBoyMisirAdeti);
                        printf(" %.2f TL\n",kucukBoyMisirFiyati);
                        printf("Orta boy patlamis misir adeti:  %d ",ortaBoyMisirAdeti);
                        printf(" %.2f TL\n",ortaBoyMisirFiyati);
                        printf("Buyuk boy patlamis misir adeti: %d ",buyukBoyMisirAdeti);
                        printf(" %.2f ",buyukBoyMisirFiyati);
                        printf("TL\n");
                        printf("Mega boy patlamis misir adeti:  %d ",megaBoyMisirAdeti);
                        printf(" %.2f ",megaBoyMisirFiyati);
                        printf("TL\n");
                        printf("-------------------------------------------\n");
                        printf("Toplam fiyat: %.2f ",toplamFiyat);
                        printf("TL\n");
                        printf("Para ustu: %.2f ",paraUstu);
                        printf("TL\n");
                        printf("-------------------------------------------\n");
                        printf("Iyi seyirler dileriz...\n");
                        printf("-------------------------------------------\n");
                    }

                }
                if (icecekIstiyor==1) {
                    printf("Kac adet su istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&suAdeti);

                    printf("Kac adet kola istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&kolaAdeti);

                    printf("Kac adet Fuse Tea istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&fuseteaAdeti);

                    printf("Kac adet Sprite istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&spriteAdeti);

                    printf("Kac adet meyveli soda istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&meyveliSodaAdeti);

                    printf("Kac adet soda istersiniz? [istemiyorsaniz (0)]");
                    scanf("%d",&sodaAdeti);

                    miniBoyMisirFiyati = 5 * miniBoyMisirAdeti;
                    kucukBoyMisirFiyati = 7.25 * kucukBoyMisirAdeti;
                    ortaBoyMisirFiyati = 10 * ortaBoyMisirAdeti;
                    buyukBoyMisirFiyati = 12.75 * buyukBoyMisirAdeti;
                    megaBoyMisirFiyati = 15 * megaBoyMisirAdeti;
                    suFiyati = 2 * suAdeti;
                    kolaFiyati = 5 * kolaAdeti;
                    fuseteaFiyati = 5.75 * fuseteaAdeti;
                    spriteFiyati = 5 * spriteAdeti;
                    meyveliSodaFiyati = 4.50 * meyveliSodaAdeti;
                    sodaFiyati = 3 * sodaAdeti;
                    biletFiyati = 12 * biletSayisi;
                    toplamFiyat = miniBoyMisirFiyati + kucukBoyMisirFiyati + ortaBoyMisirFiyati + buyukBoyMisirFiyati + megaBoyMisirFiyati + 
                    suFiyati + kolaFiyati + fuseteaFiyati + spriteFiyati + meyveliSodaFiyati + sodaFiyati + biletFiyati;
                    paraUstu = paraMiktari - toplamFiyat;

                    if (paraUstu<0) {
                        printf("Yetersiz Bakiye");
                    }
                    if (paraUstu>=0) {
                        printf("-------------------------------------------\n");
                        printf("Bilet adeti: %d ",biletSayisi);
                        printf(" %.2f ",biletFiyati);
                        printf("TL\n");
                        printf("Mini boy patlamis misir adeti:  %d ",miniBoyMisirAdeti);
                        printf(" %.2f ",miniBoyMisirFiyati);
                        printf("TL\n");
                        printf("Kucuk boy patlamis misir adeti: %d ",kucukBoyMisirAdeti);
                        printf(" %.2f TL\n",kucukBoyMisirFiyati);
                        printf("Orta boy patlamis misir adeti:  %d ",ortaBoyMisirAdeti);
                        printf(" %.2f TL\n",ortaBoyMisirFiyati);
                        printf("Buyuk boy patlamis misir adeti: %d ",buyukBoyMisirAdeti);
                        printf(" %.2f TL\n",buyukBoyMisirFiyati);
                        printf("Mega boy patlamis misir adeti:  %d ",megaBoyMisirAdeti);
                        printf(" %.2f ",megaBoyMisirFiyati);
                        printf("TL\n");
                        printf("Su adeti: %d ",suAdeti);
                        printf("            %.2f ",suFiyati);
                        printf("TL\n");
                        printf("Kola adeti: %d ",kolaAdeti);
                        printf("          %.2f ",kolaFiyati);
                        printf("TL\n");
                        printf("Fuse Tea adeti: %d ",fuseteaAdeti);
                        printf("      %.2f ",fuseteaFiyati);
                        printf("TL\n");
                        printf("Sprite adeti: %d ",spriteAdeti);
                        printf("        %.2f ",spriteFiyati);
                        printf("TL\n");
                        printf("Meyveli soda adeti: %d ",meyveliSodaAdeti);
                        printf("  %.2f ",meyveliSodaFiyati);
                        printf("TL\n");
                        printf("Soda adeti: %d ",sodaAdeti);
                        printf("          %.2f ",sodaFiyati);
                        printf("TL\n");
                        printf("-------------------------------------------\n");
                        printf("Toplam fiyat: %.2f ",toplamFiyat);
                        printf("TL\n");
                        printf("Para ustu: %.2f ",paraUstu);
                        printf("TL\n");
                        printf("-------------------------------------------\n");
                        printf("Iyi seyirler dileriz...\n");
                        printf("-------------------------------------------\n");

                    }
                }
            }
        }

    return 0;
}
