
#include <stdio.h>

#include "cinema.h"

#define MAX_INPUT_LENGTH 1024

static int handle_command(struct cinema *cinema, char *input) {
    char command;
    if (input[0] == 'g') {
        char genre_name[MAX_STR_LENGTH];
        int res = sscanf(input, "%c %s", &command, genre_name);

        if (res != 2) {
            printf("Invalid command, use 'g <genre-name>'\n");
        } else {
            add_genre(cinema, genre_name);
            printf("Added '%s' to genres!\n", genre_name);
        }
    } else if (input[0] == 'm') {
        char genre_name[MAX_STR_LENGTH];
        char movie_name[MAX_STR_LENGTH];
        int length;
        double rating;

        int res = sscanf(
            input, "%c %s %s %d %lf", &command, genre_name,
            movie_name, &length, &rating
        );

        if (res != 5) {
            printf(""
                "Invalid command, use "
                "'m <genre-name> <movie-name> <length> <rating>'\n"
            );
        } else {
            int success = add_movie(
                cinema, genre_name, movie_name, length, rating
            );
            if (success == SUCCESS) {
                printf("Added '%s' to genre '%s'!\n", movie_name, genre_name);
            } else {
                printf("Genre '%s' was not found!\n", genre_name);   
            }
        }
    } else if (input[0] == 'p') {
        char genre_name[MAX_STR_LENGTH];
        int res = sscanf(input, "%c %s", &command, genre_name);

        if (res != 2) {
            printf("Invalid command, use 'p <genre-name>'\n");
        } else {
            print_genre(cinema, genre_name);
        }
    } else if (input[0] == 'q') {
        printf("Exiting\n");
        return 1;
    } else {
        printf("Unknown command was input.\n");
    }

    return 0;
}

int main(void) {
    char input[MAX_INPUT_LENGTH];

    struct cinema *cinema = create_cinema();

    printf("\nWelcome to the COMP1511 Cinema!\n\n");
    printf("Commands:\n");
    printf("- 'g <genre-name>' ~ Add a Movie Genre\n");
    printf("- 'm <genre-name> <movie-name> <length> <rating>' ~ Add a Movie\n");
    printf("- 'p <genre-name>' ~ Print all Movies in a Genre\n\n");

    int exit = 0;

    printf("--> ");
    while (!exit && fgets(input, MAX_INPUT_LENGTH, stdin) != NULL) {
        exit = handle_command(cinema, input);
        if (!exit) {
            printf("--> ");
        }
    }
}