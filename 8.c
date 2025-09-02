#include <stdio.h>
#include <math.h>
int main() {
 float a , b, c , m , r ;
 printf("veuillez saisir la valeur du premier nbr svp : ");
 scanf("%f", &a);
 printf("veuillez saisir la valeur du deuxieme nbr svp : ");
 scanf("%f", &b);
 printf("veuillez saisir la valeur du troisieme nbr svp : ");
 scanf("%f", &c);
 m = a * b * c ;
 r= cbrt(m);
 printf("la moyenne geometrique = %.2f ", r);
 return 0;

}