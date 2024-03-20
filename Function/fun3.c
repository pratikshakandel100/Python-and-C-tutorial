//Function with arguments with no return value
#include<stdio.h>
//1. Function declaration
/*void sum(int a, int b);
int main(){
    int a = 10, b = 40;
    //3. Function call
    sum(a, b);
    return 0;
}
//2. Function definition
void sum(int a, int b){
    int result = a + b;
    printf("Sum is %d\n", result);
}*/
#include<stdio.h>
void sub(int a, int b);
int main(){
    int a, b;
    a = 2;
     b = 1;
    sub(a, b);
}
void sub(int a, int b){
    printf("The sub of a and b is %d\n", a - b);
}