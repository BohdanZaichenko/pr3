#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    printf("Zaichenko Bohdan IPZ-22008b\n");

    int p;

    printf("\nInput the number of digits (p) (p <= 30): ");
    scanf("%d", &p);

    int count = 0;

    if (p>=2&&p<=30) {
        if (p>=3) {
            count=pow(2, p)-2*pow(2, p-3);
        } else {
            count=pow(2, p);
        }
    } else {
        printf("\n!!ERROR!!\n");
        return 1;
    }

    printf("\nNumber of numbers with %d digits: %d\n", p, count);

    return 0;
}
