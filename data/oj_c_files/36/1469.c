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




int  main()
{ 
  int i,j,t=1,x[100],y[100];
  memset(x,0,100*sizeof(int));
  memset(y,0,100*sizeof(int));
  char a[100],b[100];
  cin>>a>>b;
  for(i=0;i<strlen(a);i++)
  { x[a[i]-32]++;}
   for(i=0;i<strlen(b);i++)
  { y[b[i]-32]++;}
   for(i=0;i<100;i++)
   {if(x[i]!=y[i])t=0;}
   if(t==0)
	cout<<"NO"<<endl;
   else
	 cout<<"YES"<<endl;
	return 0;
}