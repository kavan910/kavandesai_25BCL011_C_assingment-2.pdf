#include <stdio.h>
int main() {
 int sum = 0;
 for(int i = 13; i <= 100; i += 13) {
 sum += i;
 }
 printf("Sum = %d\n", sum);
 return 0;
}
