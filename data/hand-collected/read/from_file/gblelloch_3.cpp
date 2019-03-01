#include <stdio.h>
#include <stdlib.h>

void begin_paren_vector()
{
  char c1, c2;
  c1 = getchar();
  c2 = getchar();
  if (c2 == EOF) return;
  if (!((c1 == '(' || c1 == '[') && c2 == ' ')) {
    return;
  }
}

void end_paren_vector()
{
  char c1, c2;
  c1 = getchar();
  c2 = getchar();
  if (!((c1 == ')' || c1 == ']') && c2 == '\n')) {
    return;
  }
}


int read_int()
{
  int c,r;
  r = 0;
  c = getchar();
  while (c == ' ' || c == '\n') 
    c = getchar();
  if (c == '-') {
    c = getchar();
    while (c >= '0' && c <= '9') {
      r = 10*r - (c - '0');
      c = getchar();
    }
  }
  else
    while (c >= '0' && c <= '9') {
      r = 10*r + c - '0';
      c = getchar();
    }
  return r;
}


int *read_int_array(int l)
{
  int i, *int_list;

  int_list = (int *) malloc(sizeof(int)*l);

  begin_paren_vector();
  for (i = 0; i < l ; i++) 
    int_list[i] = read_int();
  end_paren_vector();

  return int_list;
}