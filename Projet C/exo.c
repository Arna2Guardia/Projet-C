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

void demande(char* t, int* p, int* q){
    printf("Le titre\n");
    scanf(" %[^\n]", t);
    printf("Le prix\n");
    scanf("%d", p);
    printf("La quantité\n");
    scanf("%d", q);
}

void addItemInt(int* tab, int* val, int size){
    tab[size-1] = *val;
}

void addItemChar(char** tab, char* val, int size){
    tab[size-1] = val;
}

int main(){
    int cond = 1;
    char *tabTitres[10000];
    int tabPrix[10000];
    int tabQuant[10000];
    int size = 0;
    while(cond == 1){
        char t[1000];
        int p;
        int q;
        demande(t, &p, &q);
        addItemInt(tabPrix,&p,size+1);
        addItemInt(tabQuant,&q,size+1);
        char s[1000];
        strcpy(s, t);
        addItemChar(tabTitres, s, size+1);
        size++;
        printf("\n Voulez vous continuer ?1:Oui 2:Non\n");
        scanf("%d",&cond);
    }
    printf("\nLE TABLEAU DES PRIX ICI:\n");   
    for(int i = 0; i < size; i++) {
        printf("%d\n",tabPrix[i]);
    }
    printf("\nLE TABLEAU DES QUANT ICI:\n");
    for(int j = 0; j < size; j++) {
        printf("%d\n",tabQuant[j]);
    }
    printf("\nLE TABLEAU DES TITRES ICI:\n");
    for(int k = 0; k < size; k++) {
        for(int l = 0; l < 1000; l++){
            if (tabTitres[k][l] == '\0'){
                break;
            }
            printf("%c",tabTitres[k][l]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}