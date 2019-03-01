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
  char ch[MAX][50],tmp;
  int n;
  int i=0,j=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
    scanf("%s",ch[i]);
    }
  for(i=0;i<n;i++)
    {tmp=ch[i][0];
     if((tmp>='A'&&tmp<='Z')||(tmp>='a'&&tmp<='z')||(tmp=='_'));
     else
       {
  printf("no\n");
  continue;
       }
     j=1;
     while(ch[i][j]!='\0')
       {  tmp=ch[i][j];
  if((tmp>='A'&&tmp<='Z')||(tmp>='a'&&tmp<='z')||(tmp=='_')||(tmp>='0'&&tmp<='9'));
  else  {printf("no\n");   break;}
  j++;
       }
     if(ch[i][j]=='\0')  printf("yes\n");
    }
} 