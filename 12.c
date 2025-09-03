#include <stdio.h>
int main() {
    int N , n1 ,n2 , n3 , n4 ;
    printf("veuillez saisir un nbr de 4 chiffres svp :");
    scanf("%d", &N);
    n1= N % 10;
    n2 = (N / 10) % 10;
    n3 = (N / 100) % 10;
    n4 = (N / 1000);
    printf("l inverse de ce nbr = %d%d%d%d", n1,n2,n3,n4);
    return 0 ;
}