/*#include<stdio.h>
int main(){
    int sum=0;
   int i = 2;
    while(i <= 100){
        if(i % 2 == 0){
            printf("%d \n", i);
        }
        i++;
         sum = sum + i;
            
               
    }
    printf("The sum of even number is %d \n", sum);
    return 0;
} 

#include<stdio.h>
int main(){
    int i=1;
    int num=7;
    while(i <= 10){

        printf("%d x %d = %d \n",num ,i,num*i);
        
        i++;
    }

    return 0;
}*/

//factoril of 10


/*

#include<stdio.h>

int main(){
    // Variable initialization
    int num = 10;
    int factorial = 1;
    int i = 1;
    while (i <= num){ //2. expression
    //3. logoc
        factorial = factorial * i;
        //4 counter
        i++;
    }
    printf("factorial is %d \n", factorial);



return 0;
}*/
/*
#include<stdio.h>
int main(){
int num = 13;
int is_prime = 0;
int j = 1;
while(j <= num){
    if(num % j == 0){
        is_prime = is_prime + 1;

    }
    j = j + 1;
}
if(is_prime == 2){
    printf("%d is a prime number \n", num);
    }else {
        printf("%d is  not a prime number \n", num);
    }
return 0;
}
*/
/*
#include<stdio.h>
int main(){
    //Outer loop
    int outer = 1;
    while (outer <= 3){
        //Inner loop
        int inner = 1;
        while (inner <= 3){
            printf("Öuter : %d loop, Inner : %d loop \n", outer, inner);
            inner++;
     }
     outer++;
    }
    return 0;
}*/
/*
#include<stdio.h>
int main(){
int num, i;
num = 100;
i = 0;
int is_prime = 0;
while(i <= num){
    if(num % i == 0 ){
        is_prime = is_prime + 1;
        
}
}
i++;
num--;
if(is_prime == 2){
printf("%d are prime number \n");
}

return 0;
}
  */
 /*
 #include<stdio.h>
 int main(){
    int num, i;
    int sum = 0;
    printf("Enter a num : ");
    scanf("%d", &i);
    for(i = 1; i <= num; i++ ){
        sum = sum + i;
              
    }
printf("The sum of numbers is %d \n");
return 0;
 }  
*/
/*
#include<stdio.h>
int main(){
    int num, j;
    printf("Enter a number = ");
    scanf("%d", &num);
    int i = 1;
    while(i <= 10){
        j = num * i;
        printf("%d * %d = %d", num, i, j);
            }
            i++;
    return 0;
}*/

//Print all the odd number 5 to 50
/*
#include<stdio.h>
int main(){
    int o;
    o = 5;
    while(o <= 50){
    if (o % 2 != 0){
        printf("%d\n", o);
        
        
    }
    o++;
    
    }
    return 0;

}*//*
#include<stdio.h>
int main(){
    int i, num, j;
    printf("Enter a number : ");
    scanf("%d", &num);
    i = 1;
    while(i <= 10 ){
        
   j = num * i;    
    printf("%d * %d = %d\n", num, i, j);
    }
    i++;
    return 0;
}*/
