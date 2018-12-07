#include <stdio.h>

int main() {
    int tablica[200];
    char wartosc = 0;
    int index = 0;

    printf("Program liczy wartość dziesiętną\n "
           "dla ciągu binarnego\n");
    printf("Podaj ciąg binarny (0/1): ");

    do{
        scanf(" %c", &wartosc);
        if(wartosc == '0'  || wartosc == '1'){
            tablica[index] = wartosc - '0';
            index++;
        }
    }while(wartosc == '0'  || wartosc == '1');

    printf("Długość ciągu %d", index);

    return 0;
}