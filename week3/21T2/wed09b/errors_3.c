// Find the errors in this program
// Taken from COMP1511 21T1 Tut3 questions
// Tom Killigback

int main(void) {

    int i = 0;
    int n = 10;
    while (i < n) {
        printf("%d\n", i);
        n = n + i;
        i = i + 1;
    }

    return 0;
}

