#include <stdio.h>

int main() {
    char nom[100];
    char prenom[100];
    int age;
    char sexe[20];
    char adresse_email[200];
    printf("#################****#################\n");
    printf("veuillez saisir votre nom svp : ");
    scanf("%99s", nom);
    printf("veuillez saisir votre prenom svp : ");
    scanf("%99s", prenom);
    printf("veuillez saisir votre age aussi svp : ");
    scanf("%d", &age);
    printf("veuillez saisir votre sexe svp : ");
    scanf(" %19s", &sexe);
    printf("finalement veuillez saisir votre adresse email svp  : ");
    scanf("%199s", adresse_email);
    printf("#################****#################\n");
    printf("Bonjour %s %s agé(e) de %dB %s et votre mail est %s \n", nom , prenom , age , sexe , adresse_email);
    printf("#################****#################\n");
    return 0;
}
