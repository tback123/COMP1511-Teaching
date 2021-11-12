
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cinema.h"

struct movie {
    char title[MAX_STR_LENGTH];
    int length;
    double rating;

    struct movie *next;
};

struct genre {
    char name[MAX_STR_LENGTH];

    struct movie *movies;
    struct genre *next;
};

struct cinema {
    struct genre *genres;
};

struct cinema *create_cinema() {
    struct cinema *new = malloc(sizeof(struct cinema));
    new->genres = NULL;

    return new;
}

// Add to end of linked list
void add_genre(struct cinema *cinema, char *genre_name) {
    struct genre *new = malloc(sizeof(struct genre));
    strcpy(new->name, genre_name);
    new->movies = NULL;
    new->next = NULL;

    new->next = cinema->genres;
    cinema->genres = new;
}


int add_movie(struct cinema *cinema, char *genre_name,
                char *movie_name, int length, double rating) {
    // Since trying to add to second dimsison, must first find
    // the second dimension arrray.

    // Find genre to add.
    struct genre *curr_gne = cinema->genres;
    
    // Keep looping while we haven't found the name we're looking for
    while (curr_gne != NULL && strcmp(curr_gne->name, genre_name) != 0) {
        curr_gne = curr_gne->next;
    }

    // Either found what we're looking for
    // OR
    // Reached the end of the list
    
    // Check if end of list (didn't find the correct genre)
    
    if (curr_gne == NULL) {
        // go no further
        return NOT_FOUND;
    }

    // Must have found the genre i was looking for!
    // Add move to end of list of movies
    // (Adding to end of a linked list)

    // Create a new movie & fill with data
    struct movie *new_movie = malloc(sizeof(struct movie));
    new_movie->rating = rating;
    new_movie->length = length;
    new_movie->next = NULL;
    strcpy(new_movie->title, movie_name);

    // Check if no movies in the list
    if (curr_gne->movies == NULL) {
        // Add the new movie directly to the genre
        curr_gne->movies = new_movie;
        return SUCCESS;
    }

    // Find the last movie
    struct movie *curr_movie = curr_gne->movies;
    while (curr_movie->next != NULL) {
        curr_movie = curr_movie->next;
    }

    // curr_movie is now the last movie in the list

    // Link the last movie to the new movie
    curr_movie->next = new_movie;

    return SUCCESS;
}

void print_genre(struct cinema *cinema, char *genre_name) {
    // TODO: Finish this function
}