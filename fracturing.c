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

// main function used to call other functions
int main(int argc, char **argv) {
    calculateDistance();
    return 0;
}

// OBJECTIVE: calculate the distance between two points given by the user
double calculateDistance() {
    double x1, y1, x2, y2;
    // ask user for points
    printf("Point #1 entered: ");
    x1 = askForUserInput();
    y1 = askForUserInput();
    printf("Point #2 entered: ");
    x2 = askForUserInput();
    y2 = askForUserInput();

    //math
    double distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("The distance between the two points is %.2f\n", distance);

}

// OBJECTIVE: this seperate function esentially replaces use of scanf
double askForUserInput() {
    double input;
    scanf("%1f", &input);
    return input;
}