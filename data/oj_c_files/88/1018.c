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
			char s[40],f[40];
			cin.getline(s,40);
			char *p;
                        int i,t;
			p=s;
                        i=0;
			while (*p!='\0')
					{
						while (*p>=48&&*p<=57) {f[i]=*p;i++;p++;}
						while ((*p<48||*p>57)&&(*p!='\0')) p++;
						if (*p=='\0') break;
                                                f[i]=' ';i++;
					}
					for(t=0;t<i;t++)
			{
                         if (f[t]!=' ') 
                               cout<<f[t];
                         else cout<<endl;
                        }
                        return 0;
}