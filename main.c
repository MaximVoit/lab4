#include <stdio.h>
#include "convert.h"

int main() {
    float dollars, rate, uah;
    printf("Enter the amount in dollars: ");
    scanf("%f", &dollars);
    printf("Enter the exchange rate (NBU): ");
    scanf("%f", &rate);

    uah = convert_dollars_to_uah(dollars, rate);
    printf("Amount in UAH: %.2f\n", uah);

    return 0;
}