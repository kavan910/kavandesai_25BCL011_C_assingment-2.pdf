#include <stdio.h>
int main() {
 int m1, m2, m3, total;
 float avg;
 printf("Enter marks of three subjects: ");
 scanf("%d %d %d", &m1, &m2, &m3);
 if(m1 < 35 || m2 < 35 || m3 < 35) {
 printf("Fail\n");
 return 0;
 }
 total = m1 + m2 + m3;
 avg = total / 3.0f;
 printf("Total = %d\nAverage = %.2f\n", total, avg);
 if(avg >= 70)
 printf("Distinction\n");
 else if(avg >= 60)
 printf("First Class\n");
 else if(avg >= 50)
 printf("Second Class\n");
 else if(avg >= 35)
 printf("Third Class\n");
 else
 printf("Fail\n");
 return 0;
}
