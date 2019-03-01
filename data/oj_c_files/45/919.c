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

void main()
{
int i,j,l1,l2;
char a[20],b[20];
scanf("%s %s",a,b);
l1=strlen(a);
l2=strlen(b);
  for(j=0;j<l2;j++)
    {if(a[0]==b[j])
  { for(i=0;i<l1;i++)
            {if(a[i]!=b[i+j])break;
             else if(a[i]==b[j+i]&&i<l1-1)continue;
             else if(a[i]==b[j+i]&&i==l1-1)  printf("%d",j);return 0;}
  }
  }
}
             
       