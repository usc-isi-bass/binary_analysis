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

//????
int main()
{
	char a[102];
	cin.getline(a,102);
	char boy=a[0];
	char girl;
	int length=strlen(a);
   for(int i=1;i<length;i++)
   {
     if(a[i]==boy) continue;
	 else {girl=a[i];break;}
   }
   int t=0;
   int placeofboy[55];
   for(int i=0;i<length;i++)
   {
     if(a[i]==boy) placeofboy[++t]=i;
	 else 
	 {
	    cout<<placeofboy[t]<<' '<<i<<endl;
		t--;
	 }
   }
   
   return 0;
}
