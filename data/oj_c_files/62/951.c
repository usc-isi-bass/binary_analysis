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
    char a[10000];
    cin.getline(a,10000);
    int L=strlen(a);
    char *p=a;
    int num=0;
    for(int i=0;*(p+i)!='\0';i++)
    {
    	if(*(p+i)==' ' && *(p+i+1)==' ' )
    	{
    		for(int j=i;j<L-1-num;j++)
    		*(p+j)=*(p+j+1);
    		i--;
    		num++;
    	}
    }
    for(int i=0;i<L-num;i++)
     cout<<*(p+i);
   cout<<endl;
	return 0;
}
