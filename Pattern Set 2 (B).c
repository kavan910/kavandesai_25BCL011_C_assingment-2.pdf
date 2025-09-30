#include <stdio.h>
int main() {
 int i;
 printf("5\n\n"); // printing 5 first
 for(i = 1; i <= 3; i++) {
 printf("%d %d\n", i, 6 - i);
 printf("%d %d\n", i, 6 - i);
 }
 return 0;
}
