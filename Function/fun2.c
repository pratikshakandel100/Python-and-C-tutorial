//Function with no arguments but return value(int)
// int sum()
//1. Function declaration
/*#include<stdio.h>
int sum();
int main(){
    //3. Function call
    int result = sum();
    printf("Sum is %d", result);
    return 0;

}
//2. Function definition
int sum(){
    int a = 100;
    int b = 200;
    return a + b;

}*/
#include<stdio.h>
int s();
int main(){
    int a, b;
     int result = s();
   printf("The subtraction of a - b is %d\n ", result);
   return 0; 
}
int s(){
    int a, b;
    a = 5;
    b = 3;
    return a - b;
}
