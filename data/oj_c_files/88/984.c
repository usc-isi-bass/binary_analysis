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
			char s[1000],f[200];
			cin.getline(s,200);
			char *p;int i,t;
			p=s;i=0;
			while (*p!='\000')
					{
						while (((*p<48)||(*p>57))&&(*p!='\000')) p++;
						while ((*p>=48)&&(*p<=57)&&(*p!='\000')) {cout<<*p;p++;}
      cout<<endl;
					}
}
