#include <stdio.h>
#include <stdlib.h>


int fibo(int n){
    if(n <= 1){
        return 1;
    } else {
        return (fibo(n-1) + fibo(n-2));
    }
}


int main(){
    int n; 
    scanf("%d", &n);

    for(int i = 0; i < n ;i++){
        printf("%d\n",fibo(i));
    }

    system("pause");
    return 0;
}

