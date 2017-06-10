#include <stdio.h>

int const SIZE = 10;

void insert_sort(int* input) {
    int key, i = 0;
    for (int j = 1; j < SIZE; j ++) {
        key = input[j];
        i = j - 1;

        while (i >= 0 && input[i] > key) {
            input[i + 1] = input[i];
            i = i - 1;
        }
        input[i + 1] = key;
    }
}

void display(int* i) {
    for (int j = 0; j < SIZE; j++) {
        if (j != 9) {
            printf("%d,", i[j]);
        } else {
            printf("%d\n", i[j]);
        }
    }
}

int main() {
    int input[SIZE] = {84, 34, 94, 53, 12, 9, 75, 28, 44, 29};
    insert_sort(input);
    display(input);
    return 0;
}
