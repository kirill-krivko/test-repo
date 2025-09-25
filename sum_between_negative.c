#include <stdlib.h>
#include "sum_between_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"

int calc_between_sum(int arr[], int size) {
    int sum_between_negative = 0;
    for (int i = find_first_neg(arr, size); i < find_last_neg(arr, size); i++) {
        sum_between_negative += abs(arr[i]);
    }
    return sum_between_negative;
}
