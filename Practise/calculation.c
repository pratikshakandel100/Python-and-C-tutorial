 /*# include<stdio.h>

 int main (){
   int a = 4;
   a--;
printf("The value of a = %d", a);
return 0;
 }*/
  /*
  In post-increment, the current value of the variable is uesd in an expression, and the variable is incremented.
  
#include<stdio.h>
int main(){
 int m = 1;
 printf("First step m : Value of m is %d \n", m);
 printf("Second step ++m : Value of m is %d \n", ++m);
 printf("Third step m : Value of m is %d \n", m);
 printf("Second step --m : Value of m is %d \n", --m);
 printf("Third step m : Value of m is %d \n", m);
 return 0;
}


#include<stdio.h>
 int main(){
  int n = 1;
  printf("First step n : Value of n is %d \n", n);
  printf("second step n++ : Value of n is %d \n", n++);
  printf("Third step n : Value of n is %d \n", n);
  printf("Second step n-- : Value of n is %d \n", n--);
  printf("Third step n : Value of n is %d \n", n);
  return 0;
 }


#include<stdio.h>
int main(){
  int a = 5, b = 10;
  int result1 = a > b;
  int result2 = b > a;
  printf("Result1 is %d \n ", result1);
  printf("Result2 is %d \n", result2);
   
   int result3 = a > 0 && b > 0;
   printf("Result3 is %d \n", result3);
    int result4 = a > 6 || b > 0;
    printf("Result4 is %d \n", result4);
     int flag = 1;
     int result5 = !flag;
     printf("Result5 is %d \n", result5);
     return 0;
}


#include<stdio.h>
int main(){
  int x = 10;
  int y = 15;
  int result1 = (x == y);
  printf("Result of result1 is %d \n", result1);
   int result2 = (x != y);
   printf("Result of Result2 is %d \n", result2);
   int result3 = (x > y);
   printf("Result of result3 is %d \n", result3);
   int result4 = (x < y);
   printf("Result of result4 is %d \n", result4);
   int result5 = (x >= y);
   printf("Result of result5 is %d \n", result5);
   int result6 = (x <= y);
   printf("Result of result6 is %d \n", result6);
   return 0;
}


#include<stdio.h>
int main(){
  //1 declare variable
  int age;

  //2 Initialize variable
  age = 18;

  //3 check the condition
  int result = (age >= 18);
  printf("The condition of if is %d \n", result);

  //4 Check if the person can vote
  if (age > 18){
    
    //5 Display if the condition is satisfied
    printf("You are eligible to vote !\n");
  }
   else{
   printf("You are not eligible to vote !\n ");
   }
   return 0;
}   


#include<stdio.h>
int main(){
  // 1 declare value
  int age;
  // 2 initialize value
  age = 10;
  // 3 Check the condition
  int result = (age >= 16);
  printf("The condition of if is %d \n", result);
  //4 Check the person can ride
  if (age >= 16){
    //5 Display if the condition is satified
    printf("You are eligible to ride  !\n");
  }
  else{
    printf(" Yor are not eligible to ride  !\n");
  }

return 0;
}

//Check if a person can get old age pension using if ... else(age >= 70)

#include<stdio.h>
int main (){
  int age;
  age = 75;
  int result = (age >= 70);

  if (age >= 70){
  printf("You can get your pension  \n");
  }
  else{  
  printf("You can't get your pension  \n");
  }

  return 0;
}


#include<stdio.h>
int main(){
  int score, attendence;
  score = 80;
  attendence = 85;
  if (score >= 60){
    //first if(True(1))
    //Nested if(second if)
    if (attendence >= 75){
     printf("Congratulation! The student pass with the good attendence. \n");
    } else {
      // second if(false(0)): Handle if attendence is less than 75%
      printf("The student passed but, need to improve attendence \n");
    }
      //first if -> else part
    }
    //First if (False(0))
  else {
    printf("Sorry, the student did not pass.\n");
  }
  return 0;
  }

/*
#include<stdio.h>
int main(){
  int a,b;
  //Desplaying msg to users
   printf("Enter first number : ");
   scanf("%d", &a);

   printf("Enter second number : ");
   scanf("%d", &b);

   int sum = a + b;
   printf("The sum of two number is %d\n", sum);
   return 0;
}   


#include<stdio.h>
int main(){
  int r;
  printf("Enter the radius of the circle ");
  scanf("%d", &r);
  float area = 3.14 * r * r;
  printf("The radius of the circle is %f\n", area);
  return 0;
}

#include<stdio.h>
int main(){
  int age;
  age = 15;
  if (age >= 18){
    printf("You are an adult \n");
  }
    else if (age > 13 && age < 18) {
      printf("You are a teeneger \n");
    }
    else {
      printf("You are a child");
    }
  return 0;
      
    }
    
   #include<stdio.h>
   int main(){
    float dollars,exchangeRate, nepaleserupees; // Variable declaration
     exchangeRate = 132.73; // declare and initialize value
     printf("Enter the dollars"); 
     scanf("%f", &dollars);
      nepaleserupees = dollars * exchangeRate;
      printf("The Nepalese rupees is %f ", nepaleserupees);
      return 0;
   }
   


        
  

*/



//The while statement

#include<stdio.h>
int main(){ // DECLARE and initializa variable
  int i;
  i = 1;
  int sum = 0;
  while (i <= 100){// condition for loop
  
    printf("%d \n", i);//statement
    sum = sum + i;
    i = i + 1;//counter
}
printf("The sum of 100 numbers is %d\n", sum);
return 0;

}// print even number 1 to 100........


#include<stdio.h>
int main(){
  int i;
   i = 500;
  while(i <= 600){
    if( i % 3 == 0){
      printf("%d \n", i);
    }
      i++;
  
  
  }
  
  return 0;
}


/*
#include<stdio.h>
int main(){
  int i;
  i = 2;
   while(i <= 100){
    printf("%d \n", i);
    i = i + 2;
       }
return;
   

   
}
/*
#include<stdio.h>
int main(){
  int num, i;
  printf("Enter a number : " );
  scanf("%d", &num);
  i = 0;
  while (i <= num){
    printf("%d \n", num);
     i = i + 1;
  }
return 0;


}*/