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
{int a,b,i,y,x;
 char c,am[10]={0},bm[10]={0};
 for(i=0;;i++)
 {c=getchar();if(c=='\n')break;
 if(c!='\n')am[i]=c;}
 for(x=0;x<i;x++)
 {bm[x]=am[i-1-x];}
 for(x=0;x<i;x++)printf("%c",bm[x]);
 
 
 


return 0;


}