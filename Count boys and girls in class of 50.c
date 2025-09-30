#include <stdio.h>
int main() {
 int code, boys = 0, girls = 0;
 printf("Enter sex code for 50 students (1=Boy, 2=Girl):\n");
 for(int i = 0; i < 50; i++) {
 scanf("%d", &code);
 if(code == 1) boys++;
 else if(code == 2) girls++;
 }
 printf("Boys = %d\nGirls = %d\n", boys, girls);
 return 0;
}
