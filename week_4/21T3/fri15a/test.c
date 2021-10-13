#include <stdio.h>

double divide(double numerator, double denominator);

int main(void) {

    double rooms = 50;
    double people = 310;

    double after_divide = divide(rooms, people);
    printf("%lf\n", after_divide);

    return 0;
}

double divide(double numerator, double denominator) {

    double result = numerator / denominator;

    return result;

}