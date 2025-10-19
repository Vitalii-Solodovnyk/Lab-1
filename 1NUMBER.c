#include <stdio.h>

int main() {
    float amountPLN;
    float rate;
    float amountUSD;

    printf("KONWERTER WALUT PLN -> USD\n");
    printf("Podaj kwotę w PLN: ");
    scanf("%f", &amountPLN);

    printf("Podaj kurs USD/PLN (np. 4.25): ");
    scanf("%f", &rate);

    if (rate <= 0) {
        printf("Błąd: kurs musi być większy od zera!\n");
        return 1;
    }

    amountUSD = amountPLN / rate;

    printf("\n%.2f PLN = %.2f USD\n", amountPLN, amountUSD);

    return 0;
}