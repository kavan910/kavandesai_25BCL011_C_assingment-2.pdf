#include <stdio.h>
int main() {
 int num, flag = 1;
 printf("Enter a number: ");
 scanf("%d", &num);
 if(num <= 1) flag = 0;
 for(int i = 2; i <= num/2; i++) {
 if(num % i == 0) { flag = 0; break; }
 }
 if(flag) printf("%d is Prime\n", num);
 else printf("%d is not Prime\n", num);
 return 0;
}
