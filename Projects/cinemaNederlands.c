#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int hoeveelheidWater,hoeveelheidCola,HoeveelheidIceTea,HoeveelheidSprite,hoeveelheidGeld,wilVoordeel,uiteindelijkeBeslissing,aantalTickets,wilPopcorn,wilDrankje,
    aantalFruitFrisdrank,aantalFrisdrank,aantalMiniPopcorn,aantalKleinePopcorn,aantalMiddelgrotePopcorn,aantalGrotePopcorn,aantalMegaPopcorn,gewenstVoordeelmenu,
    aantalVoordeelmenu,aantaalVoordeelmenuVoorTwee,aantalSpeciaalValentijnsmenu,a,b;

    float totalePrijs, geldTerug, waterPrijs,colaPrijs,iceTeaPrijs,spritePrijs,fruitFrisdrankPrijs,frisdrankPrijs,miniPopcornPrijs,kleinePopcornPrijs,
    middelgrotePopcornPrijs,grotePopcornPrijs,megaPopcornPrijs,ticketPrijs;

    printf("-------------------------------------------------\n");
    printf("Grootte van Popcorn\n");
    printf("\n");
    printf("Mini-Popcorn: €5\n");
    printf("Klein-Popcorn: €7.25\n");
    printf("Middel-Popcorn: €10\n");
    printf("Grroot-Popcorn: €12.75\n");
    printf("Mega-Popcorn: €15\n");
    printf("-------------------------------------------------\n");
    printf("Dranken\n");
    printf("\n");
    printf("Water: €2\n");
    printf("Cola: €5\n");
    printf("Ice Tea: €5.75\n");
    printf("Sprite: €5\n");
    printf("Fruit Frisdrank: €4.50\n");
    printf("Frisdrank: €3\n");
    printf("-------------------------------------------------\n");
    printf("voordeelmenu's\n");
    printf("\n");
    printf("Voordeelmenu: €20\n");
    printf("drankje + klein-popcorn + ticket\n");
    printf("\n");
    printf("Voordeelmenu voor Twee: €35\n");
    printf("2x drankje + 2x middel-popcorn + 2x ticket\n");
    printf("\n");
    printf("Speciaal Valentijnsmenu: €40\n");
    printf("2x drankje + mega-popcorn + 2x ticket\n");
    printf("-------------------------------------------------\n");
    printf("Ticket: €12\n");
    printf("-------------------------------------------------\n");

    printf("Voer uw saldo in: ");
    scanf("%d",&hoeveelheidGeld);

    a=1;
    b=30;

    for (a=1;a<=b;a++)
    {
    printf("Wilt u profiteren van de voordeelmenu's? (1)Ja / (2)Nee\n");
    scanf("%d",&wilVoordeel);


    printf("is het jouw uiteindelijke beslissing? (1)ja / (2)Nee \n");
    scanf("%d",&uiteindelijkeBeslissing);

    if (uiteindelijkeBeslissing==1)
    {
        a=40;
    }

    }

        if (wilVoordeel==1) {
        printf("-------------------------------------------------\n");
        printf("voordeelmenu's\n");
        printf("\n");
        printf("Voordeelmenu: €20\n");
        printf("draknje + klein-popcorn + ticket\n");
        printf("\n");
        printf("Voordeelmenu voor Twee: €35\n");
        printf("2x drankje + 2x middel-popcorn + 2x ticket\n");
        printf("\n");
        printf("Speciaal Valentijnsmenu: €40\n");
        printf("2x drankje + mega-popcorn + 2x ticket\n");
        printf("-------------------------------------------------\n");
        printf("Voordeelmenu (1)\n");
        printf("Voordeelmenu voor Twee (2)\n");
        printf("Speciaal Valentijnsmenu (3)\n");
        printf("-------------------------------------------------\n");
        printf("\n");

        printf("Welk menu wilt u? (1)/(2)/(3)\n");
        scanf("%d",&gewenstVoordeelmenu);

        if (gewenstVoordeelmenu==1){
            printf("Hoeveel Voordeelmenu's wilt u hebben?\n");
            scanf("%d",&aantalVoordeelmenu);

            totalePrijs = 20 * aantalVoordeelmenu;
            geldTerug = hoeveelheidGeld - totalePrijs;

            if (geldTerug<0) {
                printf("Onvoldoende Saldo\n");
            }
            if (geldTerug>=0){
                printf("-------------------------------------------\n");
                printf("Aantal Voordeelmenu: %d ",aantalVoordeelmenu);
                printf(" %.2f ",totalePrijs);
                printf("€\n");
                printf("-------------------------------------------\n");
                printf("Totale prijs: %.2f ",totalePrijs);
                printf("€\n");
                printf("Geld terug: %.2f ",geldTerug);
                printf("€\n");
                printf("-------------------------------------------\n");
                printf("We wensen u veel plezier...\n");
                printf("-------------------------------------------\n");
            }
        }
        if (gewenstVoordeelmenu==2){
            printf("Hoeveel (Voordeelmenu voor Twee) wilt u hebben?\n");
            scanf("%d",&aantaalVoordeelmenuVoorTwee);

            totalePrijs = 35 * aantaalVoordeelmenuVoorTwee; 
            geldTerug = hoeveelheidGeld - totalePrijs;

            if (geldTerug<0) {
                printf("Onvoldoende Saldi\n");
            }
            if (geldTerug>=0){
                printf("-------------------------------------------\n");
                printf("Aatal (Voordeelmenu voor Twee): %d ",aantaalVoordeelmenuVoorTwee);
                printf(" %.2f ",totalePrijs);
                printf("€\n");
                printf("-------------------------------------------\n");
                printf("Totale prijs: %.2f ",totalePrijs);
                printf("€\n");
                printf("Geld terug: %.2f ",geldTerug);
                printf("€\n");
                printf("-------------------------------------------\n");
                printf("We wensen u veel plezier...\n");
                printf("-------------------------------------------\n");
            }
        }
        if (gewenstVoordeelmenu==3){
            printf("Hoeveel Speciaal ValentijnsMenu wilt u hebben?\n");
            scanf("%d",&aantalSpeciaalValentijnsmenu);

            totalePrijs = 40 * aantalSpeciaalValentijnsmenu;
            geldTerug = hoeveelheidGeld - totalePrijs;

            if (geldTerug<0) {
                printf("Onvoldoende Saldo\n");
            }
            if (geldTerug>=0){
                printf("-------------------------------------------\n");
                printf("Aantal Speciaal Valentijnsmenu: %d ",aantalSpeciaalValentijnsmenu);
                printf(" %.2f ",totalePrijs);
                printf("€\n");
                printf("-------------------------------------------\n");
                printf("Totale prijs: %.2f ",totalePrijs);
                printf("€\n");
                printf("Geld terug: %.2f ",geldTerug);
                printf("€\n");
                printf("-------------------------------------------\n");
                printf("We wensen u veel plezier...\n");
                printf("-------------------------------------------\n");
        }

        }

        return 0;
        
    }

        if (uiteindelijkeBeslissing==1) {
            printf("Hoeveel ticket wilt u? \n");
            scanf("%d",&aantalTickets);

            printf("U hebt ");
            printf("%d ",aantalTickets);
            printf("tickets gekocht. \n");

            printf("Wilt u popcorn? (1)Ja / (2)Nee \n");
            scanf("%d",&wilPopcorn);

            if (wilPopcorn==2) {
                printf("Wilt u een drinkje? (1)Ja / (2)Nee \n");
                scanf("%d",&wilDrankje);

                ticketPrijs = 12 * aantalTickets;
                totalePrijs = ticketPrijs;
                geldTerug = hoeveelheidGeld - totalePrijs;

                if (wilDrankje==2) {
                    if (geldTerug<0) {
                        printf("Onvoldoende Saldo");
                    }
                    if (geldTerug>=0){
                        printf("---------------------------------\n");
                        printf("Aantal tickets: %d",aantalTickets);
                        printf("   %d",ticketPrijs);
                        printf("€\n");
                        printf("---------------------------------\n");
                        printf("Totale prijs: %.2f ",totalePrijs);
                        printf("€\n");
                        printf("Geld terug: %.2f ",geldTerug);
                        printf("€\n");
                        printf("---------------------------------\n");
                        printf("We wensen u veel plezier...\n");
                        printf("---------------------------------\n");

                        return 0;
                    }

                }
                if (wilDrankje==1) {
                    printf("Hoeveel water wilt u? [als u niet wilt (0)]");
                    scanf("%d",&hoeveelheidWater);

                    printf("Hoeveel Cola wilt u? [als u niet wilt (0)]");
                    scanf("%d",&hoeveelheidCola);

                    printf("Hoeveel Ice Tea wilt u? [als u niet wilt (0)]");
                    scanf("%d",&HoeveelheidIceTea);

                    printf("Hoeveel Sprite wilt u? [als u niet wilt (0)]");
                    scanf("%d",&HoeveelheidSprite);

                    printf("Hoeveel fruit frisdrank wilt u? [als u niet wilt (0)]");
                    scanf("%d",&aantalFruitFrisdrank);

                    printf("Hoeveel frisdrank wilt u? [als u niet wilt (0)]");
                    scanf("%d",&aantalFrisdrank);

                    waterPrijs = 2 * hoeveelheidWater;
                    colaPrijs = 5 * hoeveelheidCola;
                    iceTeaPrijs = 5.75 * HoeveelheidIceTea;
                    spritePrijs = 5 * HoeveelheidSprite;
                    fruitFrisdrankPrijs = 4.50 * aantalFruitFrisdrank;
                    frisdrankPrijs = 3 * aantalFrisdrank;
                    ticketPrijs = 12 * aantalTickets;
                    totalePrijs = waterPrijs + colaPrijs + iceTeaPrijs + spritePrijs + fruitFrisdrankPrijs + frisdrankPrijs + ticketPrijs;
                    geldTerug = hoeveelheidGeld - totalePrijs;

                    if (geldTerug<0) {
                        printf("Onvoldoende Saldo");
                    }
                    if (geldTerug>=0) {
                        printf("---------------------------------\n");
                        printf("Aantal tickets: %d ",aantalTickets);
                        printf("         %.2f ",ticketPrijs);
                        printf("€\n");
                        printf("Aantal water: %d ",hoeveelheidWater);
                        printf("            %.2f ",waterPrijs);
                        printf("€\n");
                        printf("Aantal Cola: %d ",hoeveelheidCola);
                        printf("          %.2f ",colaPrijs);
                        printf("€\n");
                        printf("Aantal Ice Tea: %d ",HoeveelheidIceTea);
                        printf("      %.2f ",iceTeaPrijs);
                        printf("€\n");
                        printf("Aantal Sprite: %d ",HoeveelheidSprite);
                        printf("        %.2f ",spritePrijs);
                        printf("€\n");
                        printf("Aantal fruit frisdrank: %d ",aantalFruitFrisdrank);
                        printf("  %.2f ",fruitFrisdrankPrijs);
                        printf("€\n");
                        printf("Aantal frisdrank: %d ",aantalFrisdrank);
                        printf("          %.2f ",frisdrankPrijs);
                        printf("€\n");
                        printf("---------------------------------\n");
                        printf("Totale prijs: %.2f ",totalePrijs);
                        printf("€\n");
                        printf("Geld terug: %.2f ",geldTerug);
                        printf("€\n");
                        printf("---------------------------------\n");
                        printf("We wensen u veel plezier...\n");
                        printf("---------------------------------\n");
                    }

                }
            }
            if (wilPopcorn==1) {
                printf("Hoeveel mini-popcorn wilt u? [als u niet wilt (0)]");
                scanf("%d",&aantalMiniPopcorn);

                printf("Hoeveel klein-popcorn wilt u? [als u niet wilt (0)]");
                scanf("%d",&aantalKleinePopcorn);

                printf("Hoeveel middel-popcorn wilt u? [als u niet wilt (0)]");
                scanf("%d",&aantalMiddelgrotePopcorn);

                printf("Hoeveel groot-popcorn wilt u? [als u niet wilt (0)]");
                scanf("%d",&aantalGrotePopcorn);

                printf("Hoeveel mega-popcorn wilt u? [als u niet wilt (0)]");
                scanf("%d",&aantalMegaPopcorn);

                printf("Wilt u een drinkje? (1)Ja / (2)Nee \n");
                scanf("%d",&wilDrankje);

                        miniPopcornPrijs = 5 * aantalMiniPopcorn;
                        kleinePopcornPrijs = 7.25 * aantalKleinePopcorn;
                        middelgrotePopcornPrijs = 10 * aantalMiddelgrotePopcorn;
                        grotePopcornPrijs = 12.75 * aantalGrotePopcorn;
                        megaPopcornPrijs = 15 * aantalMegaPopcorn;
                        ticketPrijs = 12 * aantalTickets;
                        totalePrijs = miniPopcornPrijs + kleinePopcornPrijs + middelgrotePopcornPrijs + grotePopcornPrijs + megaPopcornPrijs + 
                        ticketPrijs;
                        geldTerug = hoeveelheidGeld - totalePrijs;

                        if (wilDrankje==2) {
                    if (geldTerug<0) {
                        printf("Onvoldoende Saldo");
                    }
                    if (geldTerug>=0){
                        printf("-------------------------------------------\n");
                        printf("Aantal tickets: %d ",aantalTickets);
                        printf(" %.2f ",ticketPrijs);
                        printf("€\n");
                        printf("Aantal mini-popcorn:  %d ",aantalMiniPopcorn);
                        printf(" %.2f ",miniPopcornPrijs);
                        printf("€\n");
                        printf("Aantal klein-popcorn: %d ",aantalKleinePopcorn);
                        printf(" %.2f €\n",kleinePopcornPrijs);
                        printf("Aantal middel-popcorn:  %d ",aantalMiddelgrotePopcorn);
                        printf(" %.2f €\n",middelgrotePopcornPrijs);
                        printf("Aantal groot-popcorn: %d ",aantalGrotePopcorn);
                        printf(" %.2f ",grotePopcornPrijs);
                        printf("€\n");
                        printf("Aantal mega-popcorn:  %d ",aantalMegaPopcorn);
                        printf(" %.2f ",megaPopcornPrijs);
                        printf("€\n");
                        printf("-------------------------------------------\n");
                        printf("Totale prijs: %.2f ",totalePrijs);
                        printf("€\n");
                        printf("Geld terug: %.2f ",geldTerug);
                        printf("€\n");
                        printf("-------------------------------------------\n");
                        printf("We wensen u veel plezier...\n");
                        printf("-------------------------------------------\n");
                    }

                }
                if (wilDrankje==1) {
                    printf("Hoeveel water wilt u? [Als u niet wilt (0)]");
                    scanf("%d",&hoeveelheidWater);

                    printf("Hoeveel Cola wilt u? [Als u niet wilt (0)]");
                    scanf("%d",&hoeveelheidCola);

                    printf("Hoeveel Ice Tea wilt u? [Als u niet wilt (0)]");
                    scanf("%d",&HoeveelheidIceTea);

                    printf("Hoeveel Sprite wilt u? [Als u niet wilt (0)]");
                    scanf("%d",&HoeveelheidSprite);

                    printf("Hoeveel fruit frisdrank wilt u? [Als u niet wilt (0)]");
                    scanf("%d",&aantalFruitFrisdrank);

                    printf("Hoeveel frisdrank wilt u? [Als u niet wilt (0)]");
                    scanf("%d",&aantalFrisdrank);

                    miniPopcornPrijs = 5 * aantalMiniPopcorn;
                    kleinePopcornPrijs = 7.25 * aantalKleinePopcorn;
                    middelgrotePopcornPrijs = 10 * aantalMiddelgrotePopcorn;
                    grotePopcornPrijs = 12.75 * aantalGrotePopcorn;
                    megaPopcornPrijs = 15 * aantalMegaPopcorn;
                    waterPrijs = 2 * hoeveelheidWater;
                    colaPrijs = 5 * hoeveelheidCola;
                    iceTeaPrijs = 5.75 * HoeveelheidIceTea;
                    spritePrijs = 5 * HoeveelheidSprite;
                    fruitFrisdrankPrijs = 4.50 * aantalFruitFrisdrank;
                    frisdrankPrijs = 3 * aantalFrisdrank;
                    ticketPrijs = 12 * aantalTickets;
                    totalePrijs = miniPopcornPrijs + kleinePopcornPrijs + middelgrotePopcornPrijs + grotePopcornPrijs + megaPopcornPrijs + 
                    waterPrijs + colaPrijs + iceTeaPrijs + spritePrijs + fruitFrisdrankPrijs + frisdrankPrijs + ticketPrijs;
                    geldTerug = hoeveelheidGeld - totalePrijs;

                    if (geldTerug<0) {
                        printf("Onvoldoende Saldo");
                    }
                    if (geldTerug>=0) {
                        printf("-------------------------------------------\n");
                        printf("Aantal tickets: %d ",aantalTickets);
                        printf(" %.2f ",ticketPrijs);
                        printf("€\n");
                        printf("Aantal mini-popcorn:  %d ",aantalMiniPopcorn);
                        printf(" %.2f ",miniPopcornPrijs);
                        printf("€\n");
                        printf("Aantal klein-popcorn: %d ",aantalKleinePopcorn);
                        printf(" %.2f €\n",kleinePopcornPrijs);
                        printf("Aantal middel-popcorn:  %d ",aantalMiddelgrotePopcorn);
                        printf(" %.2f €\n",middelgrotePopcornPrijs);
                        printf("Aantal groot-popcorn: %d ",aantalGrotePopcorn);
                        printf(" %.2f €\n",grotePopcornPrijs);
                        printf("Aantal mega-popcorn:  %d ",aantalMegaPopcorn);
                        printf(" %.2f ",megaPopcornPrijs);
                        printf("€\n");
                        printf("Aantal water: %d ",hoeveelheidWater);
                        printf("            %.2f ",waterPrijs);
                        printf("€\n");
                        printf("Aantal Cola: %d ",hoeveelheidCola);
                        printf("          %.2f ",colaPrijs);
                        printf("€\n");
                        printf("Aantal Ice Tea: %d ",HoeveelheidIceTea);
                        printf("      %.2f ",iceTeaPrijs);
                        printf("€\n");
                        printf("Aantal Sprite: %d ",HoeveelheidSprite);
                        printf("        %.2f ",spritePrijs);
                        printf("€\n");
                        printf("Aantal fruit frisdrank: %d ",aantalFruitFrisdrank);
                        printf("  %.2f ",fruitFrisdrankPrijs);
                        printf("€\n");
                        printf("Aantal frisdrank: %d ",aantalFrisdrank);
                        printf("          %.2f ",frisdrankPrijs);
                        printf("€\n");
                        printf("-------------------------------------------\n");
                        printf("Totale prijs: %.2f ",totalePrijs);
                        printf("€\n");
                        printf("Geld terug: %.2f ",geldTerug);
                        printf("€\n");
                        printf("-------------------------------------------\n");
                        printf("We wensen u veel plezier...\n");
                        printf("-------------------------------------------\n");

                    }
                }
            }
        }

    return 0;
}

