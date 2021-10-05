#include <stdio.h>
#include <stdlib.h>

int main(){

    int eersteGetal, tweedeGetal, uitkomst, som;
    double sayi, uitkomst2, uitkomst3;
    
    printf("\n\n");
    printf("Wiskunde Menu\n");
    printf("**********************************\n");
    printf("\n");
    printf("1-De oppervlakte en omtrek van een vierkant berekenen\n");
    printf("2-De derde macht van de ingevoerde getallen berekenen\n");
    printf("3-De oppervlakte en omtrek van een cirkel berekenen\n");
    printf("4-Het resulaat van 5x2+7x+9\n");
    printf("5-De oppervlakte en omtrek van een rechthoek berekenen\n");
    printf("6-Het kwadraat van het getal\n");
    printf("7-Een getal kwadrateren\n");
    printf("8-Het getal naar boven en beneden afronden\n");
    printf("9-De macht van het getal\n");
    printf("10-De logartime van het getal\n");
    printf("11-De sinus van het getal\n");
    printf("12-De cosinus van het getal\n");
    printf("Isleminizi secin: ");
    scanf("%d",&som);
    printf("\n\n");

    switch(som){

    case 1:
    printf("Voer de omtrek van het vierkant in: ");
    scanf("%d",&eersteGetal);
    uitkomst = eersteGetal*eersteGetal;
    printf("oppervlakte: %d\n",uitkomst);
    uitkomst = eersteGetal * 4;
    printf("omtrek: %d\n",uitkomst);
    break;

    case 2:
    printf("Eerste getal: ");
    scanf("%d",&eersteGetal);
    printf("TWeede getal: ");
    scanf("%d",&tweedeGetal);
    printf("\n");
    uitkomst = eersteGetal*eersteGetal*eersteGetal;
    printf("De derde macht van het eerste getal: %d\n",uitkomst);
    uitkomst = tweedeGetal*tweedeGetal*tweedeGetal;
    printf("De derde macht van het tweede getal: %d\n",uitkomst);
    break;

    case 3:
    printf("Voer de straal van de cirkel in: ");
    scanf("%d",&eersteGetal);
    uitkomst = 2*3*eersteGetal;
    printf("De omtrek van de cirkel: ");
    printf("%d\n",uitkomst);
    uitkomst = eersteGetal*eersteGetal*3;
    printf("De oppervlakte van de cirkel: ");
    printf("%d",uitkomst);
    break;

    case 4:
    printf("Voer een getal in: ");
    scanf("%d",&eersteGetal);
    uitkomst = 5*2+7*eersteGetal+9;
    printf("Uitkomst= %d",uitkomst);
    break;

    case 5:
    printf("Voer de lengte van de lange zijde van de rechthoek in: ");
    scanf("%d",&eersteGetal);
    printf("Voer de lengte van de korte zijde van de rechthoek in ");
    scanf("%d",&tweedeGetal);
    uitkomst = eersteGetal * 2 + tweedeGetal * 2;
    printf("De omtrek van de rechthoek: %d\n",uitkomst);
    uitkomst = eersteGetal * tweedeGetal;
    printf("De oppervlakte van de rechthoek: %d",uitkomst);
    break;

    case 6:
    printf("Voer een getal in: ");
    scanf("%d",&eersteGetal);
    uitkomst2 = sqrt(eersteGetal);
    printf("Uitkomst: %.2f",uitkomst2);
    break;

    case 7:
    printf("Voer een grondtal in: ");
    scanf("%d",&eersteGetal);
    printf("Voer een exponent in: ");
    scanf("%d",&tweedeGetal);
    uitkomst=pow(eersteGetal,tweedeGetal);
    printf("Uitkomst: %d",uitkomst);
    break;

    case 8:
    printf("Voer een getal met decimalen in: ");
    scanf("%lf",&sayi);
    uitkomst2 = floor(sayi);
    uitkomst3 = ceil(sayi);
    printf("Als ve het getal naar beneden afronden: %.f\n",uitkomst2);
    printf("Als ve het getal naar boven afronden: %.f\n",uitkomst3);
    break;

    case 9:
    printf("Voer een getal in: ");
    scanf("%lf",&sayi);
    uitkomst2 = fabs(sayi);
    printf("Uitkomst: %.lf",uitkomst2);
    break;

    case 10:
    printf("Voer een getal in: ");
    scanf("%lf",&sayi);
    uitkomst2 = log10(sayi);
    printf("Uitkomst: %.7lf",uitkomst2);
    break;

    case11:
    printf("Voer een graad in: ");
    scanf("%lf",&sayi);
    uitkomst2 = sin(sayi);
    printf("Sinus: %lf\n",uitkomst2);
    break;

    case12:
    printf("Voer een graad in: ");
    scanf("%lf",&sayi);
    uitkomst2 = cos(sayi);
    printf("Cosinus: %lf\n",uitkomst2);
    break;

    default: printf("Voer a.u.b een van de nummers in de opties in\n");
    }

    return 0;

}




