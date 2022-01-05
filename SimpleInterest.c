#include<stdio.h>
int main(){
    float principal,rate,time;
    printf("Enter Principal ");
    scanf("%f",&principal);
    printf("Enter Rate ");
    scanf("%f",&rate);
    printf("Enter Time Period ");
    scanf("%f",&time);
    float simple_interest=(principal*rate*time)/100;
    printf("You Interest for given time period is %.2f",simple_interest);
    return 0;
}