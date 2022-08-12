#include <stdio.h>
#include <stdlib.h>
int main(){
    double Fx, dFx, num, x = 1; // คือ รอบที่
    int i;
    scanf("%lf", &num);
    if(num < 0) { printf("Error"); } 
    if(num == 0){
        printf("Approximate results = 0");
        exit(0);
    } 
    for(i = 0; i <= 2*num; i++){
        Fx = (x * x) - num;
        dFx = 2 * x;
        x = x - (Fx/dFx);
    }
    printf("Approximate results = %.4lf", x);
    return 0;
}