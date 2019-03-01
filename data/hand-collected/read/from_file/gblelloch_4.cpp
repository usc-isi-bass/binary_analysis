#include <stdio.h>
#include <stdlib.h>


char *old_read_char_array()
{
  int i, l, r;
  char *char_list;
  r = scanf("%d", &l);
  char_list = (char *) malloc(sizeof(char)*l);

  for (i = 0; i < l ; i++) char_list[i] = getchar();

  return char_list;
}
