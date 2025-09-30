#include <stdio.h>
int main() {
 int arr[100], largest, smallest;
 printf("Enter 100 numbers:\n");
 for(int i = 0; i < 100; i++) scanf("%d", &arr[i]);
 largest = smallest = arr[0];
 for(int i = 1; i < 100; i++) {
 if(arr[i] > largest) largest = arr[i];
 if(arr[i] < smallest) smallest = arr[i];
 }
 printf("Largest = %d\nSmallest = %d\n", largest, smallest);
 return 0;
}
