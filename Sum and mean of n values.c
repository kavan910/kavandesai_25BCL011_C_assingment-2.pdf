#include <stdio.h>
#include <stdlib.h>
int main() {
 int n, sum = 0;
 float mean;
 printf("Enter number of values: ");
 scanf("%d", &n);
 int *arr = malloc(n * sizeof(int));
 printf("Enter %d numbers:\n", n);
 for(int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 sum += arr[i];
 }
 mean = sum / (float)n;
 printf("Sum = %d\nMean = %.2f\n", sum, mean);
 free(arr);
 return 0;
}
