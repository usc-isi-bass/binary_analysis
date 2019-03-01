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
    int a[10],n=0,k=1,i=0,b=1;
    cin>>n;
	if(!n) cout<<n<<endl;
    for(i=0;n!=0;i++)
    {
        a[i]=n%10;
	cout<<a[i];
        n=(n-a[i])/10;
    }
    return 0;
}