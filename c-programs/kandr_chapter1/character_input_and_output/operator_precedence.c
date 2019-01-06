#include <stdio.h>

/* check whether = or != has greater precedence */

main()
{
  int c;

  printf("%d %d\n", (c = getchar()) != EOF, c);
  printf("%d %d\n", c = getchar() != EOF, c);    
}

// This program only prompts for input once. Why?
