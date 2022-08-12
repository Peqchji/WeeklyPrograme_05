#include <stdio.h>
int main(){
    double num, constant;
    int i;
    scanf("%lf", &num);
    constant = num;
    if(num < 0) { printf("Error"); }
    for(i = 0 ; i < num*2; i++){
        num = (num + (constant/num))/2;
    }
    printf("Approximate results = %.4lf", num); 
    return 0;
}