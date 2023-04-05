//
// Created by sanga on 05/04/2023.
//
#include <stdio.h>
#include <math.h>

/**
 * Format specifiers and more
*/
int floating(){
    float item1 = 90.89f;
    float item2 = 62.09f;

    // Declaring a constant(a read-only value)

    // this value can't be overridden, only read
    const double PI = 3.14;

    printf("This is a read only value: %.2f\n",PI);
    printf("$%.1f\n", item1);
    printf("$%.1f", item2);
    return 0;
}


int userInput(){
    int age;
    char name[20];

    printf("What is your name?\n");

    // Another way to initialize scanf()
    fgets(name, 20, stdin);

    printf("How old are ?");
    scanf("%d", &age);

    printf("Your name is %s and you are %d years old",name, age);
    return 0;
}

int mathy(){
    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.64);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);



    printf("Square root of 9: %.1f\n", A);
    printf("2 to the power of 4 is: %.1f\n", B);
    printf("The floor number of 3.99 is: %d\n", E);
    printf("The ceiling number of 3.64 is: %d", D);
    return 0;
}

// formula is Area = PI * radius *radius
double area_circumference(const double PI, double radius){
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f", area);
    return 0;
}

// This calculates the hypotenuse of a right angle triangle
double hypotenuse(double A, double B){
    return sqrt(A*A + B*B);
}