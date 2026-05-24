#include <stdio.h> //Standard input ouput header(to use I/O fucntions)
#include <math.h>  //To use Maths operations/Functions(eg:- sqrt(), sqrlf()).

//1. Function to read input
    double getInput() {
    double x;
    printf("Enter a value between 0 and 1: \n");
    scanf("%lf", &x);
    return x;
}

//2. Function to validate input
    int isValid(double x) {
    return (x > 0 && x < 1);
}


//3. Function to compute sine
    double computeSine(double x) {
    return sin(x);
}

//4. Function to display result
    void displayResult(double x, double result) {
    printf("sin(%.2lf) = %.2lf\n", x, result);
}

    int main(void) {
    double x = getInput();

    if (isValid(x)) {
        double result = computeSine(x);
        displayResult(x, result);
    } else {
        printf("Input must be between 0 and 1.\n");
    }

    return 0;
}




