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

int main()
{
    char s[110][20];
    int i=1;
    scanf("%s",s[0]);
    printf("%d",strlen(s[0]));
    while(scanf("%s",s[i])!=EOF)
    {
      printf(",%d",strlen(s[i]));
      i++;
    }
    printf("\n");
}