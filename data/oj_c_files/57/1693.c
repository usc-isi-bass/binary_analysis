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
	int n,b;
	char a[50];
    cin>>n;
	while(n>0)
	{
    cin>>a;
    b=strlen(a);
    if(a[b-1]=='g'&&a[b-2]=='n'&&a[b-3]=='i'){
    	a[b-3]='\0';
    	cout<<a<<endl;
    }
    if(a[b-1]=='r'&&a[b-2]=='e'){
    	a[b-2]='\0';
       cout<<a<<endl;
    }
    if(a[b-1]=='y'&&a[b-2]=='l'){
    	a[b-2]='\0';
    	cout<<a<<endl;
    }
    n--;
	}
	 return 0;
}






	