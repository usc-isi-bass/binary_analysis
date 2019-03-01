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
int i=0;
char ch[100000],tes;

for(;;i++)
{
	ch[i]=getchar();
	if(ch[i]=='\n')break;

}

for(;i>=0;i--)
	cout<<ch[i];
cout<<endl;

	return 0;
}