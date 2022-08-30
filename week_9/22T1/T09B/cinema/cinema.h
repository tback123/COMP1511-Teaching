
#ifndef _CINEMA_H
#define _CINEMA_H

#define MAX_STR_LENGTH 256

#define SUCCESS 0
#define NOT_FOUND 1

//
// Creates a new `struct cinema` and returns it.
//
// `create_cinema` takes in no parameters.
//
// `create_cinema` will return a pointer to a new `struct cinema`.
//
struct cinema *create_cinema();

//
// Adds a genre to the head of the provided cinema of `genre_name`
//
// `add_genre` takes in these parameters:
// - `cinema` a pointer to the `struct cinema` to add the genre to
// - `genre_name` name of the genre to add to the cinema
//
// `add_genre` returns nothing.
//
// ASSUMPTIONS:
// - `cinema` will always be a valid pointer
// - `genre_name` will always be a valid string of `MAX_STR_LENGTH` size
//
void add_genre(struct cinema *cinema, char *genre_name);

//
// Adds a movie to the end of the desired genre in the desired cinema.
//
// `add_movie` takes in these parameters:
// - `cinema` - a pointer to the `struct cinema` to add the movie to
// - `genre_name` - name of the desired genre for the movie to add to the cinema
// - `movie_name` - name of the movie to add to the genre
// - `length` - Length (in minutes) of the provided movie
// - `rating` - Rating /10 of the provided movie
//
// `add_movie` returns, in order of precedence:
// `NOT_FOUND` if genre was not found in cinema
// `SUCCESS` if movie is added
//
// ASSUMPTIONS:
// - `cinema` will always be a valid pointer
// - `genre_name` will always be a valid string of `MAX_STR_LENGTH` size
// - `movie_title` will always be a valid string of `MAX_STR_LENGTH` size
// - `length` will always be a positive integer
// - `rating` will always be a number between [0, 10] inclusive
//
int add_movie(
    struct cinema *cinema,
    char *genre_name,
    char *movie_title,
    int length,
    double rating
);

//
// Prints all the movies in the desired genre
//
// Each movie of the genre is printed on a new line in the format:
//
// <movie1-title>, <movie1-rating>/10 (<movie1-length>)
// <movie2-title>, <movie2-rating>/10 (<movie2-length>)
// <movie3-title>, <movie3-rating>/10 (<movie3-length>)
// ...
//
// `print_genre` takes in these parameters:
// - `cinema` a pointer to the `struct cinema` to print the genre
// - `genre_name` name of the desired genre to print in the cinema
//
// `print_genre` returns nothing.
//
// ASSUMPTIONS:
// - `cinema` will always be a valid pointer
// - `genre_name` will always be a valid string of `MAX_STR_LENGTH` size

void print_genre(struct cinema *cinema, char *genre_name);

#endif