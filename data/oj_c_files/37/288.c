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
   char a[100000];
   int i,t,len;
   int j,k,cont;
   int OK=0;
   char x;
   cin>>t;
   cin.get();
   for(i=0;i<t;i++)
       {OK=0;
        cin>>a;
        cin.get();
        len=strlen(a);
        for(j=0;j<len;j++)
            {if(a[j]!='0')
		           {x=a[j];
                    a[j]='0';
                    cont=1;
                    for(k=j;k<len;k++)
						if(a[k]==x){a[k]='0';cont++;}
					if(cont==1){cout<<x<<endl;OK=1;break;}}
			else continue;}
         if(OK==0)cout<<"no"<<endl;}
   
   return 0;
}