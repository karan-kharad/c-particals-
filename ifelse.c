#include<stdio.h>

int main(){
    int marks;

    printf("Enter your marks\n");
    scanf("%d",&marks);

    // if(age>=18){
    //     printf("you can vate");
    // }
    // else{
    //     printf("your not 18+ ");
    // }

    if(marks>90)
    {
        printf("grade A");
    }
    else if (marks>80)
    {
        /* code */printf("grade b");
    }
    else if (marks >70)
    {
        /* code */printf("grade c");
    }
    else{
        printf("grade fail");
    }
    
    

}