/*#include<stdio.h>
int main(){
    int count = 10;
    do
    {
     printf("Welcome to C programming !\n");
     count++;   
    } while (count < 2);
    return 0;
    
    
}*/
//program to check if the number is prime number or not.
/*
#include<stdio.h>
int main(){
    int even;
    even = 2;
    do
    {
     printf("%d \n", even);
     even = even + 2;   
        
    } while ( even <= 100 );
    return 0 ;

    
}*/


/*#include<stdio.h>
int main(){
    int n;
     do{
        printf("Enter a number : ");
        scanf("%d\n", &n);
        printf("%d\n", n);
    if(n % 2 != 0){
        break;
    }

     }while(1);
     printf("Thank you!");

    


return 0;
}*/
#include<stdio.h>
int main(){
    int num;
    do{
        printf("Enter a number : ");
        scanf("%d", &num);
        printf("%d \n", num);
        if (num % 7 == 0){
        break;
        }
        
    }while(1);
    printf("Thank you!");
    }
