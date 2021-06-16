#include <stdio.h>

int main ()
{
  int mark;
  printf ("Enter Mark: ");
  scanf ("%d", &mark);
  (mark > 45) ? printf ("passed") : printf ("Failed");
  return 0;
}
