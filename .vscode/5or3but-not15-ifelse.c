#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    //if(n%5==0 || n%3==0){
       // if(n%15!=0){
          //  printf("number is divisible by 5 or 3 but not by 15");
       // }
       // else{
         //   printf("number is divisible by 15");
       // }
    //}
    if((n%5==0 || n%3==0) && n%15!=0){
        printf("number is divisible by 5 or 3 but not by 15");
    }
    else{
        printf("number is divisible by 15");
    }
    return 0;
}