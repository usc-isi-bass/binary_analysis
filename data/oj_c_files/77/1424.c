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
    char ch[100];
    cin>>ch;
    int len=(int)strlen(ch);
    for (int i=0;i<len;i++)
    {
        if (ch[i]==')'||ch[i]=='}'||ch[i]==']'||ch[i]=='>')
        {
            int j=i;
            while (ch[j]!='('&&ch[j]!='{'&&ch[j]!='['&&ch[j]!='<')
                j--;
            cout<<j<<" "<<i<<endl;
            ch[i]='%';
            ch[j]='%';
        }
    }
	return 0;
}