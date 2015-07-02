#include <stdio.h>
#include <stdint.h>

int main () {
    uint64_t t = 600851475143;
    uint64_t primes [1000000];
    uint64_t sofar;
    uint64_t i, c, div, largest;
    /* Notes
     * -We can ommit any even numbers
     * */
    primes[0] = 3;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;
    primes[4] = 11;
    sofar = 5;

    c = 13;
    while(1) {
        div = 0;
        for(i = 0; i < sofar; i++){
            if(c%primes[i] == 0){
                div = 1;
                break;
            }
        }
        if(!div){
            primes[i] = c;
            if(c > t){
                for( i = sofar - 1; i >= 0 ; i--){
                    if(t % primes[i] == 0){
                        break;
                    }
                }
                largest = i;
                break;
            }
            sofar++;
        }
        c+=2;
    }

    printf("Largest %lu\n", primes[largest]);
    return 0;
}

