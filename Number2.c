#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	float purchaseNet;
	float marginPercent;
	float sellingPrice;


	printf("Program: Marza (cena sprzedazy)\n");

	printf("Podaj cene zakupu netto (np. 100.00): ");
	scanf("%f", &purchaseNet);
	
	printf("Podaj marze w procentach (np. 25): ");
	scanf("%f", &marginPercent);

	sellingPrice = purchaseNet * (1.0f + marginPercent / 100.0f);

	printf("\nCena sprzedazy = %f\n", sellingPrice);

	return 0;
}
