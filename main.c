#include <stdio.h>
#include <math.h>

int main() {
    int tablica[200];
    char wartosc = 0;
    int dlugosc = 0;
    int i;
    int wynik = 0;

    printf("Program liczy wartość dziesiętną\n "
           "dla ciągu binarnego\n");
    printf("Podaj ciąg binarny (0/1):\n ");

    do{
        scanf(" %c", &wartosc);
        if(wartosc == '0'  || wartosc == '1'){
            tablica[dlugosc] = wartosc - '0';
            dlugosc++;
        }
    }while(wartosc == '0'  || wartosc == '1');

    printf("Długość ciągu %d\n", dlugosc);
    printf("Ciąg binarny: ");
    for (int i = 0; i < dlugosc; ++i) {
        printf("%d", tablica[i]);
    }

    for (int i = 0; i < dlugosc; ++i) {
        wynik += tablica[i] * pow(2.0, i);
    }

    printf("\nWynik: %d", wynik);

    return 0;
}