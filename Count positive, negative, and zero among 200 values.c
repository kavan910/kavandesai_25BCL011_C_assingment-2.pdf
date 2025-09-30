#include <stdio.h>
int main() {
 int arr[200], pos = 0, neg = 0, zero = 0;
 printf("Enter 200 numbers:\n");
 for(int i = 0; i < 200; i++) {
 scanf("%d", &arr[i]);
 if(arr[i] > 0) pos++;
 else if(arr[i] < 0) neg++;
 else zero++;
 }
 printf("Positive = %d\nNegative = %d\nZero = %d\n", pos, neg, zero);
 return 0;
}
