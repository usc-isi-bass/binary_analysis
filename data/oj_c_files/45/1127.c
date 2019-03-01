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
    char s[50],w[50];
    int i,j;
    scanf("%s%s",s,w);
    for(i=0;i<=strlen(w)-strlen(s);i++)
    {
                                      for(j=0;j<strlen(s);j++)
                                      {
                                                              if(s[j]!=w[j+i])
                                                              break;
									  }
									if(j==strlen(s))
									{
															printf("%d",i);
															return 0;
									}
									
	}
    return 0;
}