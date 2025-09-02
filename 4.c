#include <stdio.h>

int main() {
    float k , m;
    const float d=0.27778;
    printf("veuillez saisir la distance  en Kilometres/heures :  ");
    scanf("%f", &k);
    m =  k * d;
    printf (" %.2f en metres/secondes est : %.2f ",k, m);
    return 0;
}