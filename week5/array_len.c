

int test_all_positive(int length, int nums[]);

int main() {


    return 0;
}

int test_all_positive(int length, int nums[]) {

    int counter = 0;
    while (counter < length) {

        if ( nums[counter] < 0) {
            return 0;
        }

    }

    return 1;

}