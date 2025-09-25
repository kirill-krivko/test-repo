#include <stdio.h>
#include <stdlib.h>
#include "index_first_negative.h"
#include "index_last_negative.h"
#include "sum_between_negative.h"
#include "sum_before_and_after_negative.h"

int main() {
    int cnt = 0;
    int data[100];
    int todo;
    scanf("%d", &todo);
    do {
        scanf("%d", &data[cnt]);
        cnt++;
    } while (getchar() != '\n' && cnt < 100);

    switch(todo){
        case 0:
            printf("%d\n", find_first_neg(data, cnt));
            break;
        case 1:
            printf("%d\n", find_last_neg(data, cnt));
            break;
        case 2:
            printf("%d\n", calc_between_sum(data, cnt));
            break;
        case 3:
            printf("%d\n", calc_around_sum(data, cnt));
            break;
        default:
            printf("Данные некорректны\n");
            break;
    }
    return 0;
}
