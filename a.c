#include <stdio.h>
int main()
{
  int i;
  i = 1;
  char *s = "One";
  while(s[i])
  {
    *(s + i) = 'x';
    printf ("%c", *(s + i));
    i++;
  }
  return 0;
}
