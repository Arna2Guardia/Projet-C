#include <stdio.h>
#include <stdlib.h>

int estPremier(int n) {
    int cpt = 0;
    if (n < 2) {
        return 0;
    }
    
    for(int i = 2; i < n; i++){
        if (n % i == 0){
            cpt++;
        }
    }
    
    if (cpt == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int n; 
    scanf("%d", &n);
    for(int i = 2; i <= n ;i++){
        if(estPremier(i)){
            printf("\n%d est Premier\n", i);
        } else {
            printf("\n%d n'est pas Premier\n", i);
        }
    }
    system("pause");
    return 0;
}