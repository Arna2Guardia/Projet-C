#include <stdio.h>
#include <stdlib.h>


int strlen(char* string){
    int cpt = 0 ;
    for(int i = 0; string[i] != '\0'; i++){
        cpt++;
    }
    return cpt;

}

 int strstr(char* string, char* verif){
    for(int i = 0; string[i] != '\0'; i++){
            
    }
}

void strcopy(char* string, int lenString, char* copy){
    if (string == NULL) {
        copy = string;
    }
    for(int i = 0; i <= lenString; i++){
        copy[i] = string[i];
    }
}


int main(){
    char tab[] = "Le C c'est super cool";
    printf("\n La longueur est: %d \n",strlen(tab));
    char newstr[strlen(tab)];
    strcopy(tab,strlen(tab),newstr);
    printf("\nLa copie est: '%s'\n", newstr);
    system("pause");
    return 0;
}

