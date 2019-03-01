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
{ char s1[20],s2[20];
  int i,j,lab=0;
  scanf("%s %s",s1,s2);
  if(strlen(s1)!=strlen(s2)) printf("NO");else{
  for(i=0;i<strlen(s1);i++)
	 { for(j=0;j<strlen(s1);j++)
		  if(s1[i]==s2[j]) {s2[j]='\0';lab=1;break;}
		  if(lab==0) {printf("NO");lab=1;break;}
		  lab=0;
  }


  if(lab==0) printf("YES");}
return 0;
}