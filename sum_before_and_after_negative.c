#include <stdlib.h>
#include "sum_before_and_after_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"

int calc_around_sum(int arr[], int size) {
    int sum_around_negative = 0;
    for (int i = 0; i < size; i++) {
        if (find_first_neg(arr, size) > i || i >= find_last_neg(arr, size)) {
            sum_around_negative += abs(arr[i]);
        }
    }
    return sum_around_negative;
}
