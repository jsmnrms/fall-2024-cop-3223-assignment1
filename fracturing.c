//********************************************************
// fracturing.c
// Author: Jasmin Ramos
// Date: 9/7/24
// UCF ID: 5235505
// Class: COP 3223, Professor Parra
// Purpose: This program asks users to input values which
// are then used across within several functions.
// Input: numerical values associated with corrdinates
//
// Output: summary of points and using those points to calculate
// distance, perimeter, area, width, and height of a city. yup
// //********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// OBJECTIVE: calculate the distance between two points given by the user
double calculateDistance() {
    double x1, x2, y1, y2;
    // ask user for point 1
    printf("Enter the coordinates for Point #1 (x1,x2): \n");
    printf("Enter a value: ");
    scanf("%lf", &x1);
    printf("Enter a value: ");
    scanf("%lf", &x2);
    // ask user for point 2
    printf("Enter the coordinates for Point #2 (y1,y2): \n");
    printf("Enter a value: ");
    scanf("%lf", &y1);
    printf("Enter a value: ");
    scanf("%lf", &y2);
    // summary of points
    printf("Point #1 entered: x1 = %.3f, y1 = %.3f\n", x1, y1);
    printf("Point #2 entered: x2 = %.3f, y2 = %.3f\n", x2, y2);

    //math
    double distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("The distance between the two points is %.3f\n", distance);

    return distance;
}

// OBJECTIVE: use points to calculate perimeter around city
double calculatePerimeter() {
    // call calculateDistance function to then calculate perimeter
    double distance = calculateDistance();
    double perimeter = PI*distance;
    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);

    return perimeter;
}

// OBJECTIVE: use points to calculate area of city
double calculateArea() {
    //call calculateDistance function to calculate the radius and then the area of city
    double distance = calculateDistance();
    double radius = distance/2;
    double area = PI*(pow(radius,2));
    printf("The area of the city encompassed by your request is %.3f\n", area);

    return area;
}

// OBJECTIVE: use points to calculate width
double calculateWidth() {
    //call calculateDistance to measure width
    double distance = calculateDistance();
    double width = distance;
    printf("The width of the city encompassed by your request is %.3f\n", width);

    return width;
}

// OBJECTIVE: use points to calculate height
double calculateHeight() {
    //call calculateDistance to measure height
    double distance = calculateDistance();
    double height = distance;
    printf("The height of the city encompassed by your request is %.3f\n", height);

    return height;
}

// main function used to call other functions
int main(int argc, char **argv) {
    double distance = calculateDistance();
    double perimeter = calculatePerimeter();
    double area = calculateArea();
    double width = calculateWidth();
    double height = calculateHeight();
    return 0;
}