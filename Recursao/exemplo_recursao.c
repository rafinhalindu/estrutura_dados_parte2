#include <stdio.h>

float fatorial(int n){
    if( n <= 1) return 1;
    return n * fatorial(n - 1);
}
int fibonacci (int n){
    if( n <= 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    // int i;
    // for(i=0; i <14; i++){
    //     printf("Fatorial de %d: %.0f\n", i, fatorial(i));
    // }
    int i;
    for(i = 0; i <= 50; i++){
        printf("Fibonacci de %d: %d\n", i, fibonacci(i));
    }
    return 0;
}