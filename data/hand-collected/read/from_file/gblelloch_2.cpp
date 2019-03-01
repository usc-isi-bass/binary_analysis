#include <stdio.h>
#include <stdlib.h>


int get_number()
{
  int i,r;
  r = scanf("%d", &i);
  if (r < 1) fprintf(stderr,"Bad input to xneslplot (get_number).\n");
  return i;
}

char *get_string()
{
  int l,i,c;
  char* str;
  l = get_number();
  l = get_number();
  c = 0; 
  i = 0;
  str = (char *) malloc(sizeof(char)*l + 1);
  while (i < l && c != EOF)  {
    c = getchar();
    str[i++] = c;
  }
  if (c == EOF) 
    fprintf(stderr,"Bad input to xneslplot (get_string).\n");
  str[i] = '\0';
  return str;
}