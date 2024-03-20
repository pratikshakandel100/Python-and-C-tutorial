/*#include<stdio.h>
int main(){
    float principle_amount, rateofinterest, time, simpleInterest;
    printf("Enter Principle_amount:");
    scanf("%f", &principle_amount);

    printf("Enter rateofinterest:");
    scanf("%f", &rateofinterest);

    printf("Enter time:");
    scanf("%f", &time);
    
    simpleInterest = (principle_amount * rateofinterest * time) / 100;
    printf("The simple interest is %f  ", simpleInterest);
    return 0;
}
// c  = c * 1.8 +32
//tutorial hell

#include<stdio.h>
int main(){
 float c,f;
 printf("Enter the temperature in celsius : ");
 scanf("%f", &c);
 f = (c*1.8) + 32;
 printf("The fahrenhiet temperature is %f ", f);
 return 0;
}

#include<stdio.h>
int main(){
    int v;   
    printf("Enter a number : ");
    scanf("%d", &v);
    int result = (v%2);
     
    if(result == 0){
        printf("The given number is even");
    }
        else{
            printf("The given number is odd");
        }
        return 0;
    }


#include<stdio.h>
int main(){
    // 1. Declare variable
    int age;
    // 2. take input
    printf("Enter the age of a person :");
    scanf("%d", &age);
    // 3. check the condition
    if(age >= 18){
    if(age<=23){
       printf("You are also eligible to Nepal army .\n");
    }
    else {
    printf("You are not eligible to Nepal army. \n");
    } 
    }

    else {
    printf("Yor are underage");
    }
    return 0;  
    
}

#include<stdio.h>
int main(){
int age;
printf("Enter the age of a person : ");
scanf("%d", &age);
if(age >= 18 && age <= 23){ 
    printf("You are eligible : ");
}
else{
  printf("You are not eligible for Nepal Army");
}
  return 0;
}
/*
#include<stdio.h>
int main(){
int a, b, c;
printf("Enter first number : ");
scanf("%d", &a);

printf("Enter second number : ");
scanf("%d", &b);

printf("Enter third number : ");
scanf("%d", &c);

if (a > b && a > c){
    printf("a is the greatest number");
}
if(b > a && b > c){
    printf("b is the greatest number");
}
else{
    printf("c is the greatest number");
}
return 0;
}*/




  



