#include<stdio.h>
int main()
{
  int n, temp, rem, result = 0;
  printf("enter a number\n");
  scanf("%d", &n);
  temp = n;
  while(n!=0)
    rem = temp % 10;
  result = result + (rem * rem * rem);
  temp = temp / 10;
  if(result == n)
    printf("armstrong number\n");
  else
    printf("not an armstrong number\n");
  return 0;
}