#include <stdio.h>
int main() {
 float gross, allowance, deduction, net;
 printf("Enter Gross Salary: ");
 scanf("%f", &gross);
 if(gross > 10000) {
 allowance = 0.10f * gross;
 deduction = 0.03f * gross;
 } else if(gross > 5000) {
 allowance = 0.07f * gross;
 deduction = 0.02f * gross;
 } else {
 allowance = 0.0f;
 deduction = 0.0f;
 }
 net = gross + allowance - deduction;
 printf("Net Salary = %.2f\n", net);
 return 0;
}
