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
    int num,j,i,n,max,count,a[100];
	//int order[100];
    char s[100][10];
    scanf("%d",&num);
    for( i = 0;i < num;i++)
    {
      scanf("%s %d",s[i],&a[i]);//???s[i][10](?????)??s[i](??????)
    }
	n = 0;
    for(count = 0;count < num;count++)
    {
       max = 59;
       for(i = 0;i<num; i++)
      { 
        if(a[i] > max&&a[i] < 200)//??????
        {
                max = a[i];
                j = i;
         }
      }
	   if(max == 59)//??????????????60?????
		   break;
      printf("%s\n", s[j]); //???s[i][10](?????)??s[i](??????) ???????max
	  a[j] = 300;//??????
     }
     for( i = 0;i < num; i++)
     {
          if(a[i] < 60)
          printf("%s\n", s[i]); //???s[i][10](?????)??s[i](??????)
    }
    //getchar();
    //getchar();???vc6.0?????
    return 0;
}