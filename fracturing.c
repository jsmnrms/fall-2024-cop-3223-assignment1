//********************************************************
// fracturing.c
// Author: Jasmin Ramos
// Date: 9/7/24
// Class: COP 3223, Professor Parra
// Purpose: This program asks users to input 
// Input: 
//
// Output: 
// //********************************************************

#include <stdio.h>
#include <math.h>

// OBJECTIVE: calculate the distance between two points given by the user
double calculateDistance() {
    double x1, y1, x2, y2;
    // ask user for point 1
    printf("Enter the coordinates for Point #1 (x1,y1): \n");
    printf("Enter a value: ");
    scanf("%lf", &x1);
    printf("Enter a value: ");
    scanf("%lf", &y1);
    // ask user for point 2
    printf("Enter the coordinates for Point #2 (x2,y2): \n");
    printf("Enter a value: ");
    scanf("%lf", &x2);
    printf("Enter a value: ");
    scanf("%lf", &y2);
    // summary of points
    printf("Point #1 entered: x1 = %.2f, y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f, y2 = %.2f\n", x2, y2);

    //math
    double distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// OBJECTIVE: use points to calculate perimeter around city
double calculatePerimeter() {
    double x1, y1, x2, y2;
    // ask user for point 1
    printf("Enter the coordinates for Point #1 (x1,y1): \n");
    printf("Enter a value: ");
    scanf("%lf", &x1);
    printf("Enter a value: ");
    scanf("%lf", &y1);
    // ask user for point 2
    printf("Enter the coordinates for Point #2 (x2,y2): \n");
    printf("Enter a value: ");
    scanf("%lf", &x2);
    printf("Enter a value: ");
    scanf("%lf", &y2);
    // summary of points
    printf("Point #1 entered: x1 = %.2f, y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f, y2 = %.2f\n", x2, y2);

    //math
    double perimeter = (2*(y2-y1)+2*(x2-x1));
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return perimeter;
}

// OBJECTIVE: use points to calculate area of city
double calculateArea() {
    double x1, y1, x2, y2;
    // ask user for point 1
    printf("Enter the coordinates for Point #1 (x1,y1): \n");
    printf("Enter a value: ");
    scanf("%lf", &x1);
    printf("Enter a value: ");
    scanf("%lf", &y1);
    // ask user for point 2
    printf("Enter the coordinates for Point #2 (x2,y2): \n");
    printf("Enter a value: ");
    scanf("%lf", &x2);
    printf("Enter a value: ");
    scanf("%lf", &y2);
    // summary of points
    printf("Point #1 entered: x1 = %.2f, y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f, y2 = %.2f\n", x2, y2);

    //math
    double area = ((y2-y1)*(x2-x1));
    printf("The area of the city encompassed by your request is %2f\n", area);

    return area;
}

// OBJECTIVE: use points to calculate width
double calculateWidth() {
    double x1, y1, x2, y2;
    // ask user for point 1
    printf("Enter the coordinates for Point #1 (x1,y1): \n");
    printf("Enter a value: ");
    scanf("%lf", &x1);
    printf("Enter a value: ");
    scanf("%lf", &y1);
    // ask user for point 2
    printf("Enter the coordinates for Point #2 (x2,y2): \n");
    printf("Enter a value: ");
    scanf("%lf", &x2);
    printf("Enter a value: ");
    scanf("%lf", &y2);
    // summary of points
    printf("Point #1 entered: x1 = %.2f, y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f, y2 = %.2f\n", x2, y2);

    //math
    double width = (x2-x1);
    printf("The width of the city encompassed by your request is %2f\n", width);

    return width;
}

// OBJECTIVE: use points to calculate height
double calculateHeight() {
    double x1, y1, x2, y2;
    // ask user for point 1
    printf("Enter the coordinates for Point #1 (x1,y1): \n");
    printf("Enter a value: ");
    scanf("%lf", &x1);
    printf("Enter a value: ");
    scanf("%lf", &y1);
    // ask user for point 2
    printf("Enter the coordinates for Point #2 (x2,y2): \n");
    printf("Enter a value: ");
    scanf("%lf", &x2);
    printf("Enter a value: ");
    scanf("%lf", &y2);
    // summary of points
    printf("Point #1 entered: x1 = %.2f, y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f, y2 = %.2f\n", x2, y2);

    //math
    double height = (y2-y1);
    printf("The height of the city encompassed by your request is %2f\n", height);

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