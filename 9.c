#include<stdio.h>
#include<math.h>
int main(){
    float x1 , x2 , y1 , y2 , z1 , z2 , s1 , s2 , s3, c1 , c2 , c3 ,  r ;
    printf("veuillez saisir la valeur de x1 : ");
    scanf("%f", &x1);
    printf("veuillez saisir la valeur de x2 : ");
    scanf("%f", &x2);
    printf("veuillez saisir la valeur de y1 : ");
    scanf("%f", &y1);
    printf("veuillez saisir la valeur de y2 : ");
    scanf("%f", &y2);
    printf("veuillez saisir la valeur de z1 : ");
    scanf("%f", &z1);
    printf("veuillez saisir la valeur de z2 : ");
    scanf("%f", &z2);
    s1 = x2 - x1;
    s2 = y2 - y1;
    s3 = z2 - z1;
    c1 = pow(s1,2);
    c2 = pow(s2,2);
    c3 = pow(s3,2);
    r =  sqrt(  c1 + c2 + c3);
    printf("la racine = %.2f" , r);
    return 0;

}