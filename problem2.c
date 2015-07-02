#include <stdio.h>
#include <stdint.h>

int main () {
    //Base Case
    uint32_t a = 1;
    uint32_t b = 2;

    uint32_t c;
    uint32_t sum = b;
    while(1){
        
	c = a + b;
	a = b;
	b = c;
	if(c > 4000000)
		break;
	if(c % 2 == 0)
		sum+=c;
    }

    printf("Sum %d\n", sum);
    return 0;
}

