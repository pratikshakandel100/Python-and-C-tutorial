// calculate to find area of a square, a rectangle and a circle
/*#include<stdio.h>


int square(int s);
int rectangle(int l, int b);
float circle(float r);

int main(){
    int  b, s,  l;
    float r, c;
    printf("Enter length of a square : ");
    scanf("%d", &s);
    printf("Enter length of a rectagle : ");
    scanf("%d", &l);
    printf("Enter breadth of a rectangle : ");
    scanf("%d", &b);
    printf("Enter radius of a circle :");
    scanf("%f", &r);
    s = square(s);
    r = rectangle( l, b);
    c = circle(r);
    printf("The area of a square is %d\n", s);
    printf("The area of a rectangle is %d\n", r);
    printf("The area of a circle is %f\n", c );
    return 0;*/

    #include<stdio.h>
    int BMI(int m, int h);
    int main(){
        int m, h;
        printf("Enter mass in kg: ");
        scanf("%d", &m);
        printf("Enter height in meter : ");
        scanf("%d", &h);
        int result = BMI(m, h);
        printf("The BMI is %d\n", result);
        return 0;
    }
    int BMI(int m, int h){
        int BMI = m / (h * h);
        return BMI;
    }




    