#include <stdio.h>

/* count characters in input; 2nd version */
main()
{
  long nc;
  int c;
  
  nc = 0;
  for(c = getchar(); c != EOF; c = getchar())
    ++nc;
  printf("%ld\n", nc);
}
