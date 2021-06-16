//pogram to print the sequence 5 10 15 20 25 ...
#include <stdio.h>

int main ()
{
  int pat,i;
  printf ("Enter number of patterns: ");
  scanf ("%d", &pat);
  for(i=1;i<=pat;i++)
 {
     printf("%d\t",i*5);
     
 }
  return 0;
}
