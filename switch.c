#include<stdio.h>

int main(){
    int num ;
    printf("enter your choice");
    scanf("%d",&num);
    
    switch(num){
        case 1:
            printf("Pizza");
            break;
        case 2:
            printf("Burger");
            break;
        case 3:
            printf("Sandwich");
            break;
        case 4:
            printf("Pasta");
            break;
        default :
            printf("this not in our in menun");
            break;
    }
    
}