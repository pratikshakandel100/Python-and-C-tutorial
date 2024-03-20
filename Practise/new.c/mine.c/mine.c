/*#include<stdio.h>
int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if(age >= 18){
        printf("You are an adult.\n");
        printf("You can drive.\n" );
        printf("You can go to club.\n");
    } else{
        printf("You are not an adult.\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age :" );
    scanf("%d", &age);
    if(age >= 60){
        printf("You belongs to an older people. \n");
    } else if(age >=18 ){
        printf("you are an adult. \n");
    } else{
        printf("You are a child. \n");
    }     
return 0;    
        
    
}


#include<stdio.h>
int main(){
    int age;
    printf("Ënter your age : ");
    scanf("%d", &age);
    age >= 18? printf("You are an adult.\n ") : printf("You are not an adult.\n ");
    return 0;


}

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    switch(num){
        case 1: printf("Sunday");
        break;
        case 2 : printf("Monday");
        break;
        case 3 : printf("Tuesday");
        break;
        case 4 : printf("Wednesday");
        break;
        case 5 : printf("Thursday");
        break;
        case 6 : printf("Friday");
        break;
        case 7 : printf("Saturday");
        break;
        default: printf("Error");
    }
    return 0;     

    
}

#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);
    if( marks >= 30){
        printf("You passed the exam. \n");
    } else {
        printf("You failed the exam.");
    }
    return 0;
}

#include<Stdio.h>
int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    marks >= 35? printf("You passed the exam") : printf("You failed the exam");
    return 0;
}

#include<stdio.h>
int main(){
    int x;
    x = 2;
    if( x = 1){
        printf("x is equal to 1");
    }
    else{
        printf("x is not equal to 1");
    }
    return 0;
    

    #include<stdio.h>
    int main (){
        int marks;
        marks = 85;
        if(marks > 100){
            printf("Your marks is greater than 100 which is not possible. \n");
        } 
        else if (marks >= 100 && marks < 90){
            printf("Your got A+ ");
        }
        else if (marks >80 && marks <= 90){
            printf("You got A \n");
        }
        else if (marks > 70 && marks <= 80){
            printf("You got B+");
        }
        else if (marks >= 60 && marks <= 70){
            printf("You got B");
        }
        else if (marks >= 50 && marks <= 60){
            printf("You got C+");
        }
        else if (marks >= 40 && marks < 50 ){
        printf("You got C");
        }
        else if (marks >= 30 && marks <= 40){
            printf("You got D");
        }
        return 0;/ deep work by cal network
    }

*/
#include<stdio.h>
int main(){
int day = 4;

switch (day) {
    case 1 :
     printf("Sunday");
     break;
     case 2 :
     printf("Monday");
     break;
     case 3 :
     printf("Tuesday");
     break;
     case 4 :
     printf("Wednesday");
     break;
     case 5:
     printf("Thursday");
     break;
     case 6:
     printf("Friday");
     break;
     case 7:
    printf("Saturday");
    break;

    default:
    printf("Default");
}
return 0;
}



        
