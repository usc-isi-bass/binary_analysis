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
{  char a[50][20],p[20],r[20];
   int i=0,n=0;
   cin>>a[0];
   while(cin.get()!='\n')
   {
   i++;
   cin>>a[i];n=i;
   }
   cin>>p;cin.get();cin>>r;
   for(i=0;i<=n;i++)
   {
   if(strcmp(a[i],p)==0)strcpy(a[i],r);
   }
   for(i=0;i<n;i++)cout<<a[i]<<" ";
   cout<<a[n]<<endl;
	return 0;
}