#include<stdio.h>

int main (){

    // for(int i =1; i<=10;i++){
    //     printf("%d \n",i*5);
    // }

   int num = 275;
   int last;
   int rev =0;
   while(num!=0){
    last = num % 10;
    rev = rev *10 +last;
    num = num / 10;
   }
   printf("%d",rev);
   
}