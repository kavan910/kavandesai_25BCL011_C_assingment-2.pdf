#include <stdio.h>
int main() {
 int num, temp, rev = 0;
 printf("Enter a number: ");
 scanf("%d", &num);
 temp = num;
 while(temp > 0) {
 rev = rev * 10 + temp % 10;
 temp /= 10;
 }
 if(num == rev) printf("%d is Palindrome\n", num);
 else printf("%d is not Palindrome\n", num);
 return 0;
}
