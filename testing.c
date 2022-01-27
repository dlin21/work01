#include <stdio.h>

int main(){
  printf("testing simple stuff for fun...\n");
  
  //testing ints
  int a = 10;
  int b = 20;
  int c = 30;
  int d = (a + b + c) / 3;
  printf("average of a, b, and c is %d\n", d);
  
  //testing chars
  char s0[10] = "system ";
  char s1[10] = "level ";
  char s2[15] = "programming";
  printf("this course is called %s%s%s and it is very fun\n", s0, s1, s2);
  
  return 0;
}
