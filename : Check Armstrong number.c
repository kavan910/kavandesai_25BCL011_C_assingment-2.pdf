#include <stdio.h>
#include <math.h>
int main() {
 int num, temp, sum = 0, digit, n = 0;
 printf("Enter a number: ");
 scanf("%d", &num);
 temp = num;
 while(temp > 0) { n++; temp /= 10; }
 temp = num;
 while(temp > 0) {
 digit = temp % 10;
 sum += (int)pow(digit, n);
 temp /= 10;
 }
 if(sum == num) printf("%d is Armstrong\n", num);
 else printf("%d is not Armstrong\n", num);
 return 0;
}
