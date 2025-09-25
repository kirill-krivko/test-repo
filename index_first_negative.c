#include "index_first_negative.h"

int find_first_neg(int arr[], int size) {
    int index_first_negative = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            index_first_negative = i;
            break;
        }
    }
    return index_first_negative;
}
