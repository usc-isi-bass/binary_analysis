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
int n,i,o,j,w,b;
char shuzu[1000];
scanf("%d",&n);
getchar();
for(i=0,b=1;i<n;i++,b=1)
{
  gets(shuzu);
  w=strlen(shuzu);
  if(shuzu[0]>='0'&&shuzu[0]<='9')  {printf("no\n");b=0;}
  else for(o=0;o<w;o++) 
       {
        if(!((shuzu[o]>='a'&&shuzu[o]<='z')||(shuzu[o]>='A'&&shuzu[o]<='Z')||(shuzu[o]=='_')||(shuzu[o]>='0'&&shuzu[o]<='9'))) {printf("no\n");b=0;break;}
       }
  if(b==1) printf("yes\n");
}
return 0;
}
   


