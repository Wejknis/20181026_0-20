#include <stdio.h>

int main() {
    int i = 0;
    int licznik_petli = 0;

    printf("Program podaje liczby, mniejszą od\n");
    printf("podanej przez użytkownika,\n");
    printf("jednocześnie niepodzielną przez 2, 3, 5 i 7.  \n\n");
    printf("Podaj liczbę i: ");
    scanf("%d", &i);
    // zrób nieparzystą
    if (!(i % 2)) --i;

    for (; i > 0; i -= 2) {
        licznik_petli++;

// if ((!i % 3) || !(i % 5) || !(i % 7)) continue;

    if(!(i % 3)) continue;
    if(!(i % 5)) continue;
    if(!(i % 7)) continue;

        printf("%d\n", i);
    }

     printf("\nlicznik pętli wynosiła: %d\n", licznik_petli);
    return 0;
}