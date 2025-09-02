#include <stdio.h>

int main() {
    float k , y;
    const float d=1093.61;
    printf("veuillez saisir la distance  en Kilometres :  ");
    scanf("%f", &k);
    y =  k * d;
    printf (" la distance  en Yards est : %.2f ", y);
    return 0;
}
