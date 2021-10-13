// Same program to test if all values
// of an array are positive


int test_all_pos(int length, int nums[]);

int main() {

    int array[5] = {0, 2, 3};

    return 0;
}

int test_all_pos(int length, int nums[]) {

    int counter_of_pos = 0;
    int index = 0;
    while (index < length) {
        
        if (nums[index] > 0) {
            counter_of_pos++;
        }

        index++;
    }

    if (length == counter_of_pos) {
        return 1;
    } else {
        return 0;
    }

}

