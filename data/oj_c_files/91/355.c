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
char a[200];
cin.getline(a,101);
int b=strlen(a);
char *p=a;
for(int i=0;i<b;i++)
cout<<(char)(*(p+i)+*(p+(i+1)%b));
}