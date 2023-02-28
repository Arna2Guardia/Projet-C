#include <stdio.h>
#include <stdlib.h>


int odd(int n){
    if(n % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int greater(int a, int b, int c){
    int higher = a; 
    if(a < b){
        higher = b;
    }
    if(b < c){
        higher = c;
    }
    return higher;
}


int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("\nLe nombre le plus haut est %d\n",greater(a,b,c));
    system("pause");
    return 0;
}

