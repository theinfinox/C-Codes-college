//pogram to sum of first n natural num
#include <stdio.h>

int main ()
{
  int pat,i=1,s=0;
  printf ("Enter number of number of numbers: ");
  scanf ("%d", &pat);
  
  add:
  
  s=s+i;
  i++;
  if(i<=pat)
  goto add;
 printf("%d",s);
  return 0;
}
