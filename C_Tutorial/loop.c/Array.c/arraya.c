/*#include<stdio.h>
int main(){
    //1 Declaration of array with size.
    int array[5];
    //Assigning value to elements of array
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    printf("Array is %d\n", array[3]);
    // Declaring array
    int array2[] = {10, 11, 12};
    printf("%d\n", array2[0]);
    printf("%d\n", array2[1]);
    printf("%d\n", array2[2]);
    return 0;

}*/
/*
#include<stdio.h>
int main(){
    //1. Declaring char in array
    char city[20];
    city[0] = 'k';
    printf("%c\n", city[0]);
    //Declaring and initializing array of characters
    char name[5] = {'k', 'r', 'i', 's', 'h'};
    printf("%c\n", name[4]);
    return 0;
}*/
/*
#include<stdio.h>
int main(){
    //Declaring a string
    //This array can hold up to 19 characters plus the null terminator
    
    //Initializing a string
    char anotherString[10] = "Hello";

    //Printing a string
    printf("anotherString : %s\n", anotherString);

    return 0;
}*/
/*
#include<stdio.h>
int main(){
int values[5];
printf("Enter 5 integers: \n");

// taking input and storing it in an array
for(int i = 0; i < 5; i++ ){
    printf("Enter number %d: \n", i + 1);
    scanf("%d", &values[i]);
}

printf("Displaying integers: \n ");

//printing elements of an array
for(int i = 0; i < 5; i++){
    printf("%d\n", values[i]);

}
return 0;
}*/
 /*
 #include<stdio.h>
 // Function declaration
 int sum(int array[]);
 int main(){
    int array[] = {1, 2, 3, 4, 5};
    //array in function
    printf("Sum of number is %d\n", sum(array));
 }
 int sum(int array[]){
    int sum = 0;
    
    for(int i = 0; i < 5; i++){
    printf("%d\n", array[i]);
    sum = sum + array[i];
    }
 
 return sum;
 }*/


/*
 #include<stdio.h>
 int main(){
    // Declaration and initialization of a 2d array
    int matrix[3][3] = {
        {1, 2, 3}, //First row
        {4, 5, 6}, // Second row
        {7, 8, 9}, // Third row
    };
    //Accessing elements of the 2D array
    printf("Elements of the 2D array:\n");
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        printf("%d\t", matrix[i][j]); // [row][column]

      }
    printf("\n");
        }
    return 0;


 }*/
 //Array of string...
 /*
 #include<stdio.h>
 int main(){
    char arr[3][10] = {"Skills", "Skills", "Skillver"};
    printf("String array Elements are : \n");
    for (int i = 0; i < 3; i++){
        printf("%s\n", arr[i]);
    }
    return 0;
    }
*/
/*
#include<stdio.h>
int main(){
    //Declare an array to store the string
    char name[50];
    printf("Size of array is %lu\n", sizeof(name));
    printf("Enter your name : ");
    // Read name from the user
    //scanf("%s", name);
    fgets(name, sizeof(name), stdin);
    printf("You entered: %s\n", name); //Print the string
    return 0;
} */
/*
#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int a = 5;
    printf("Total size of the array : %lu\n", sizeof(arr));
    //Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Size(length) of the array: %d\n", size);
    
    return 0;
}*/
#include<stdio.h>
#include<string.h>
int main(){
    //1.String length (strlen()) : This function returns the length of a string, excluding the null number.
    char str[] = "Hello";
    int length = strlen(str);
    printf("Length of the string: %d\n", length);
    printf("*******************----------***********\n");
    //2.Concatenate strings (strcat()): This function appends a copy of the source string to the destinination string.
    char dest[20] = "Hello ";
    char src[] = "World!";
    strcat(dest, src);
    printf("Concatenated string: %s\n", dest);
    printf("************--------******\n");

     char source[] = "Hello";
     char destinition[20];
     strcpy(destinition, source);
     printf("Copied string: %s\n", destinition);

char str1[] = "Apple";
char str2[] = "Apple";
int result = strcmp(str1, str2);
printf("Result is %d\n", result);
if(result == 0)
printf("Strings are equal\n");
else if (result < 0)
printf("String 1 comes before string 2\n");
else
printf("String 1 comes after Strings 2\n");
return 0;
}

    





