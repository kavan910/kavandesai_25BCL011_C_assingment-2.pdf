#include <stdio.h>
int main() {
 int i, j, flag, count = 0;
 for(i = 2; i <= 500; i++) {
 flag = 1;
 for(j = 2; j <= i/2; j++) {
 if(i % j == 0) { flag = 0; break; }
 }
 if(flag) count++;
 }
 printf("Number of primes = %d\n", count);
 return 0;
}
