// A secret program with a secret function

#include <stdio.h>

int secret_function(char *word);

int main(void) {

    char my_word[] = "Hello!";

    // What does result represent (i.e. what does secret_function return?)
    int result = secret_function(my_word);

    printf("The result was: %d\n", result);

    return 0;
}

int secret_function(char *word) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}