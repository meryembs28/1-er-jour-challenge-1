#include <stdio.h>

int main() {
    float k , c;
    const float d=273.15;
    printf("veuillez saisir la temperature  en Celsius  \n");
    scanf("%f", &c);
    k = c + d;
    printf ("la temperature en Kelvin est : %f ", k);
    return 0;
}
