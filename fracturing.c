//********************************************************
// fracturing.c
// Author: Rasheed Chenet
// UCF ID: 5665845
// Class: COP 3223, Professor Parra
// Purpose: The objective of this assignment is to familiarize myself with fracturing
// Input: Values for points on a circle
// Output: Messages prompting user to enter values, and displaying calculations of distance, perimeter, area, and more
// //********************************************************


#include <stdio.h>
#include <math.h>

#define PI 3.14159


//gets user input
double askForUserInput()
{
    double input;
    scanf("%lf", &input);

    return input;
}

//Allows the user to enter points
double enterPoint(char pointAxis, int pointNum)
{
    printf("%c%d: ", pointAxis, pointNum);
    
    return askForUserInput();
}

//displays point to user
void pointMessage(int pointNum, double x, double y)
{
    printf("Point #%d entered: x%d = %.3lf; y%d = %.3lf\n", pointNum, pointNum, x, pointNum, y);
}


//Calculates the diameter between 2 points entered by the user
double calculateDiameter()
{
    //gets points from user input
    printf("\nPlease enter your points\n");
    double x1 = enterPoint('x', 1);
    double x2 = enterPoint('x', 2);
    double y1 = enterPoint('y', 1);
    double y2 = enterPoint('y', 2);

    //displays points to user
    printf("\n");
    pointMessage(1,x1,y1);
    pointMessage(2,x2,y2);

    //calculates the diameter
    double diameter = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    //Allows for diameter to be used by other functions
    return diameter;
}

//calculates the distance of a circle based on two points chosen by the user
double calculateDistance()
{
    //The distance of the circle is the same as it's diameter
    double distance = calculateDiameter();

    //displays distance
    printf("\nThe distance between the two points is %.3lf\n", distance);
}

//calculates the perimeter of a circle based on two points chosen by the user
double calculatePerimeter()
{
    //runs calculateDiameter to find the diameter
    double diameter = calculateDiameter();

    //calculates the perimeter
    double perimeter = diameter * PI;

    //displays perimeter
    printf("\nThe perimeter of the city encompassed by your request is %.3lf\n", perimeter);

    return 2;
}

//calculates the area of a circle based on two points chosen by the user
double calculateArea()
{
    //divides the diameter by 2 to get the radius
    double radius = calculateDiameter()/2;
    
    //calculates the area
    double area = PI * pow(radius, 2);

    //displays area
    printf("\nThe area of the city encompassed by your request is %.3lf\n", area);

    return 1;
}

//calculates the width of a circle based on two points chosen by the user
double calculateWidth()
{
    //The width of the circle is the same as it's diameter
    double width = calculateDiameter();

    //displays width
    printf("\nThe width of the city encompassed by your request is %.3lf\n", width);

    return 1;
}

//calculates the height of a circle based on two points chosen by the user
double calculateHeight()
{
    //The height of the circle is the same as it's diameter
    double height = calculateDiameter();

    //displays height
    printf("\nThe height of the city encompassed by your request is %.3lf\n", height);

    return 1;
}


//runs all the functions
int main (int argc, char** arv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}