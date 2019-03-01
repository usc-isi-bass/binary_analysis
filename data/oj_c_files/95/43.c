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

int main(){
	 int m,n,max;
     char p[80],q[80];
	 gets(p);
	 gets(q);
     m=strlen(p);
	 n=strlen(q);
	 if(m>n)  max=m;
	 else max=n;
	 for(int i=0;i<max;i++)
	 {
	      if(p[i]>='a'&&p[i]<='z')
			  p[i]=p[i]-32;
	 }
     for(int j=0;j<max;j++)
	 {
	      if(q[j]>='a'&&q[j]<='z')
			  q[j]=q[j]-32;
	 }
	 int a=strcmp(p,q);
	     if(a>0)printf(">");
		 else if(a<0)printf("<");
		 else if(a==0)printf("=");
	 return 0;
}