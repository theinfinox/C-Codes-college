//pogram to reverse a number
#include <stdio.h>

int main ()
{
  int n,i,s=0;
  printf ("Enter number: ");
  scanf ("%d", &n);
  
  add:
    i=n%10;
    s=s*10+i;
    n=n/10;
  if(n>0)
  goto add;
 printf("%d",s);
  return 0;
}
