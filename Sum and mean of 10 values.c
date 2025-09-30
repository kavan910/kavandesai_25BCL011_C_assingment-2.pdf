#include <stdio.h>
int main() {
 int arr[10], sum = 0;
 float mean;
 printf("Enter 10 numbers:\n");
 for(int i = 0; i < 10; i++) {
 scanf("%d", &arr[i]);
 sum += arr[i];
 }
 mean = sum / 10.0f;
 printf("Sum = %d\nMean = %.2f\n", sum, mean);
 return 0;
}
