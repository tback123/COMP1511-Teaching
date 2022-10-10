// colours
// Written by Tom's Tut

#include <stdio.h>

struct colour
{
    int red;
    int green;
    int blue;
};

struct colour make_colour(int red, int green, int blue);


int main(void) {

    // Make a colour
    struct colour my_colour = make_colour(100, 0, 50);

    // Print the colour
    printf("Red: %d\n", my_colour.red);
    printf("Green: %d\n", my_colour.green);
    printf("Blue: %d\n", my_colour.blue);

    return 0;
}

struct colour make_colour(int red, int green, int blue) {
    struct colour new_colour;

    new_colour.red = red;
    new_colour.green = green;
    new_colour.blue = blue;

    return new_colour;
}