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
{   int start=0;
    int max_start, max_end, min_start, min_end;
    int max_len=-1, min_len=100, cur_len, len,n;
    int end, i;
    scanf("%d\n",&n);
    char input[1000];
    gets(input);
    len=strlen(input);
    for(;start<len;)
    {     end=start;
          while(end<len&&input[end]!=' ')
          {   end++;
          }
          cur_len=end-start;
          if(max_len<cur_len)
          {    max_start=start;
               max_end=end;
               max_len=cur_len;
          }
          if(min_len>cur_len)
          {  min_start=start;
             min_end=end;
             min_len=cur_len;
          }
          start=end+1;

    }
    for(i=max_start;i<max_end;i++)
    printf("%c",input[i]);
    printf("\n");
    for(i=min_start;i<min_end;i++)
    printf("%c",input[i]);
    return 0;
}
