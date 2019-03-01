#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



void read_words(char words[][WSIZE], int n)
{
  int i;
  for (i = 0; i < n; i++) {
    scanf("%s", words[i]);
  }
}

int split_lines(char words[][WSIZE], int lines[], int n)
{
  int i = 0;
  int j = 0;
  lines[j] = 0;
  while (i < n) {
    int len = strlen(words[i]);
    while (len <= MAX_LINE) {
      i++;
      if (i < n) {
        len += 1 + strlen(words[i]);
      }
      else break;
    }
    j++;
    lines[j] = i;
  }
  return j;
}

void print_words(char words[][WSIZE], int lines[], int line_num)
{
  int i, e, k;
  for (k = 0; k < line_num; k++) {
    e = lines[k + 1] - 1;
    for (i = lines[k]; i < e; i++) {
      printf("%s ", words[i]);
    }
    printf("%s\n", words[e]);
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  char words[n][WSIZE];
  read_words(words, n);
  int lines[n];
  int line_num = split_lines(words, lines, n);
  print_words(words, lines, line_num);
  return 0;
}