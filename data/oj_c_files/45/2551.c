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

int check(char *cf,char *cs,int l)
{int flag=7,i;
 for (i=0;i<l;i++,cf++,cs++)
     if (*cf!=*cs) flag=0;
 return flag;
}
int main()
{int i=-1,j,k,l,n,m,flag=0;
 char cf[500]={' '},cs[500]={' '};
 scanf("%s%s",cs,cf);
 while (flag!=7)
 {   i++; 
	 flag=check(cf+i,cs,strlen(cs));
 }
 printf("%d",i);
 return 7;

}
