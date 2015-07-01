#include <stdio.h>
#include <stdint.h>

void multiples (uint32_t upper){
    uint32_t sum;
    uint32_t x = 0;
    for (x = 0 ; x < upper ; x++){
        if ((x % 5 == 0) || (x % 3 == 0)) {
            sum += x;
        }
    }
    printf("Sum: %u\n", sum);
}

int main () {
    //Base Case
    multiples(10);

    multiples(1000);

    return 0;
}

