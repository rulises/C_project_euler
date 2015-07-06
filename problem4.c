#include <stdio.h>
#include <stdint.h>
#include <string.h>

int isPalindrome(uint32_t n){
	char str[255];
	sprintf(str,"%d",n);
	int i,j = 0;
	int size = strlen(str);
	j = size-1;
	for(i = 0; i < size/2; i++){
		if(str[i] != str[j--]){
			return 0;
		}
	}
	return 1;
}
int main () {
    uint32_t num = 9009;
	//Sanity Check
	if(isPalindrome(num))
		printf("Yes\n");
	else
		printf("No\n");

	uint32_t p = 999;
	uint32_t q = 999;
	uint32_t max_q = 999;
	uint32_t max_p = 999;
	uint32_t largest = 0;
	char p_str[3];
	char q_str[3];
	sprintf(p_str,"%d",p);
	sprintf(q_str,"%d",p);
	while(strlen(q_str) == 3) {
		num = p * q;
		if (isPalindrome(num))
			if(num > largest){
				largest = num;
				max_q = q;
				max_p = p;
			}
		p--;
		sprintf(p_str,"%d",p);
		if(strlen(p_str)<3){
			p = 999;
			q--;
		}
		sprintf(q_str,"%d",q);
	}
	printf("%d x %d = %d\n", max_p, max_q, largest);
    return 0;
}

