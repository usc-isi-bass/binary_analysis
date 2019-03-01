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

void sort(int a[],int n)
{
	int t,i;
	t=a[n-1];
	for(i=n-1;i>0;i--)
		a[i]=a[i-1];
    a[0]=t;
}
void main()
{
	char s[300];
	int i,flag=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
		if(s[i]>='0'&&s[i]<='9') {printf("%c",s[i]); flag=1;}
		else if(flag==1) {printf("\n");flag=0;}

}