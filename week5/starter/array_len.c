// Same program to test if all values
// of an array are positive


int test_all_positive(int length, int nums[]);

int main() {

    int array[5] = {1, 2, 3, 4, 5};

    return 0;
}

int test_all_positive(int length, int nums[]) {

    int counter = 0;
    while (counter < length) {

        // if there is a valuse <= 0, return 0
        if (nums[counter] <= 0) {
            return 0;
        }

        counter++;
    }

    // if everything is >0, return 1
    return 1;
}

