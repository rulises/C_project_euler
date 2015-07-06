#include <stdio.h>
#include <stdint.h>

uint64_t primes [1000000];
uint64_t size;

uint64_t next_prime(){
	uint64_t largest_prime = primes[size-1];
	uint64_t result, i, div;

 	result = largest_prime + 2; /* skip even nums */
	while(1){
		div = 0;
		for(i = 0; i < size; i++){
			if(result%primes[i] == 0){
				div = 1;
				break;
			}
		}
		if(div)
			result+=2;
		else
			break;
	}
	primes[size++] = result;
	return result;
}

int main () {
    uint64_t t = 600851475143;
    uint64_t result, largest, prime;
    /* Notes
     * -We can ommit any even numbers
     * */
    primes[0] = 2;
    primes[1] = 3;
    size = 2;

	result = t;

	if(result % primes[0]==0){
		result = result / primes[0];
		largest = primes[0];
	}
	if(result % primes[1]==0){
		result = result / primes[1];
		largest = primes[1];
	}
	while(result != 1){
		prime = next_prime();
		if(result % prime==0){
			result = result / prime;
			largest = prime;
		}
	}

    printf("Largest %lu\n", largest);
    return 0;
}

