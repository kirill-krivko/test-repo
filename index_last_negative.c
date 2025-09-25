#include "index_last_negative.h"

int find_last_neg(int arr[], int size) {
    int index_last_negative = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            index_last_negative = i;
        }
    }
    return index_last_negative;
}
