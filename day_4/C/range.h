#include <stdlib.h>
#include "utils.h"

typedef struct {
    int start;
    int end;
} Range;

int range_contains(Range r1, Range r2) {
    return r1.start <= r2.start && r2.end <= r1.end;
}

int range_intersects(Range r1, Range r2) {
    return ((r1.start <= r2.start) && (r2.start <= r1.end)) || ((r1.start <= r2.end) && (r2.end <= r1.end))
        || ((r2.start <= r1.start) && (r1.start <= r2.end)) || ((r2.start <= r1.end) && (r1.end <= r2.end));
}

Range range_from_string(char* str, char end_char) {
    char num[2]; // 2 should be enough
    null_string(num, 2);
    int curr_digit = 0;
    int start;
    while (*str != end_char) {
        if (*str == '-') {
            start = atoi(num);
            curr_digit = 0;
            null_string(num, 2);
        }
        else {
            num[curr_digit] = *str;
            curr_digit++;
        }
        str++;
    }
    int end = atoi(num);

    Range ret = { start, end };

    return ret;
}
