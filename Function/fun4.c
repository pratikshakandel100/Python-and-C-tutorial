//Return type(int, float, char)
// No Return type(void)
//Arguments function_name(type1 arg1, type2 arg2)
// No arguments function_name()

//Function with arguments and return type -> int function_name(tpe args)
/*#include<stdio.h>
//1 Function declaration 
int sum(int a, int b);
int main(){
    int a = 500;
    int b = 400;
    //3. Function call
    int final_result = sum(a, b);
    printf("Sum is %d", final_result);
    return 0;
}
//2. Function definition
int sum(int a, int b){
    int result = a + b;
    return result;

}//Homework subtraction a - b;*/
/*
#include<stdio.h>
#include<math.h>
void square(float num);
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("%f\n", pow(num, 2));
    return 0;
}*//*
#include<stdio.h>
int sub(int a, int b);
int main(){
    int a, b;
    a = 40;
    b = 15;
    int result = sub(a, b);
    printf("The subtraction of a and b is %d \n", result);
    return 0;
}
int sub(int a, int b){
    return a - b;
}*/
/*#include<stdio.h>
void greater(int a, int b, int c);
int main(){
    int a, b, c;
    a = 2;
    b = 3;
    c = 4;
     greater(a, b, c);
    
    return 0;
}
void greater(int a, int b, int c){
    if( a > b & a > c){
       printf("a is the greatest number");
  
}
else if ( b > c & b > a){
 printf("b is the greatest number");

}
else ( c > a & c > b);
printf("c is the greatest number");
}
*/
/*
#include<stdio.h>
void prime(int n);
int main(){
    int n = 12;
    
    
    prime(n);
    return 0;
}

void prime(int n){
    int prime =  0;
    for(int i = 1 ; i<=n ; i++){
        if (  n % i == 0){
            prime = prime + 1;
        }
    }
        if (prime == 2 ){
            printf("%d is prime\n", n);
        }else {
             printf("%d is not prime\n", n);
        }
}
*/
#include<stdio.h>
void checkoddeven( int n);
int main(){
    int n;

    printf("Ënter a number : ");
    scanf("%d", &n);
    checkoddeven(n);
    return 0;
}
void checkoddeven(int n){
    
    if(n % 2 == 0){
        printf("n is even number");
    }
    else{
        printf("n is not odd number");
    }
}




           
    

