#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Creez un programme qui :
// 1 prend pour input "Titre", "Prix /u", "Quantité"
// 2 apres avoir rentré ces informations, le programme vous demande 
// si vous souhaitez continuer
// Si oui : Retournez a l'etape 1
// Si non, le programme affiche l'ensemble des lignes rentrées
// précédement dans un format "tableau"
// ex : "| Mon super titre | 4 €/u | 45 | 180 | ~135€ |"
// plus une ligne de total, affichant la somme des prix susmentionnés
// ex : "|TOTAL| | | 180 € | ~135€|"
#define SIZE 100
#define SIZE2 200

typedef enum{
    VRAI = 1, FAUX = 0
}Booleen;


struct data{
    char title[SIZE];
    float price;
    int quantity;
};


int main(){

    float total = 0.0;
    float totalTaxed = 0.0;
    int cond = 1;
    struct data item[SIZE2];

    for(int i =0; i < SIZE2; i++){

        printf("Le titre\n");
        scanf(" %[^\n]", &item[i].title[0]);
        printf("Le prix\n");
        scanf("%f", &item[i].price);
        printf("La quantite\n");
        scanf("%d", &item[i].quantity);
        printf("\nVoulez vous continuer ?(0/1)\n");
        scanf("%d",&cond);
        if(cond != 1){
            for(int j =0; j <= i; j++){
                printf("| %s | %d | %.2f \xE2\x82\xAC |\n", item[j].title, item[j].quantity, item[j].price);
                total = total + (item[j].quantity) * (item[j].price);
                
            }
            
            totalTaxed = totalTaxed + (total * 0.76);
            printf("| TOTAL | %.2f \xE2\x82\xAC| %.2f \xE2\x82\xAC|\n",total,totalTaxed);
            break;
        }

    }

    system("pause");
    return 0;
}


// void demande(char* t, int* p, int* q){
//     printf("Le titre\n");
//     scanf(" %[^\n]", t);
//     printf("Le prix\n");
//     scanf("%d", p);
//     printf("La quantite\n");
//     scanf("%d", q);
// }

// void addItemInt(int* tab, int* val, int size){
//     tab[size-1] = *val;
// }

// void addItemChar(char* tab, char* val, int size){
//     strcpy(tab, val); // copy the string into the array
// }

// int main(){
//     int cond = 1;
//     char tabTitres[1000][2000];
//     int tabPrix[1000];
//     int tabQuant[1000];
//     int size = 0;
//     while(cond == 1){
//         char t[1000];
//         int p;
//         int q;
//         demande(t, &p, &q);
//         addItemInt(tabPrix,&p,size+1);
//         addItemInt(tabQuant,&q,size+1);
//         addItemChar(tabTitres[1000], t, size+1);
//         size++;
//         printf("\n Voulez vous continuer ?1:Oui 2:Non\n");
//         scanf("%d",&cond);
//     }
//     printf("\nLe tableau:\n");   
//     for(int i = 0; i < size; i++) {
//         printf("%s |%d | %d",tabTitres[i],tabPrix[i],tabQuant[i]);
//         printf("\n");
//     }

//     system("pause");
//     return 0;
// }