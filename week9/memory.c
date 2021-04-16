#include <stdio.h>
#include <stdlib.h>
// a generic linked list node (we could use any struct we want here)
struct colour {
    int red;
    int green;
    int blue; 
};

typedef struct colour *Colour;


void print_colour(Colour colour_to_print);
Colour new_colour(int red, int green, int blue);


int main(void) {

    Colour my_colour = new_colour(100, 50 , 25);

    print_colour(my_colour);

    free(my_colour);

    my_colour->blue = 10;

    return 0;
}

void print_colour(Colour colour_to_print) {
    printf("Colour had values:\n");
    printf("Red: %d\n", colour_to_print->red);
    printf("Green: %d\n", colour_to_print->green);
    printf("Blue: %d\n", colour_to_print->blue);

}


Colour new_colour(int red, int green, int blue) {

    Colour new_colour =  malloc(sizeof(struct colour));

    new_colour->red = red;
    new_colour->green = green;
    new_colour->blue = blue;

    return new_colour;

}