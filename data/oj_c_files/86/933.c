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
        int n;
        int fail[60];

        cin>>n;

        while(n--)
        {
                int m;
                int i;
                cin>>m;
                for(i=0;i<m;i++)
                        cin>>fail[i];

                int count;

                if(m==0)
                {
                        cout<<60<<endl;
                        continue;
                }
                for(i=0;i<m;i++)
                {
                        if(fail[i]+3*i>=60)
                        {
                                cout<<60-3*i<<endl;
                                break;
                        }
                        if(fail[i]+3*(i+1)>60)
                        {
                                cout<<fail[i]<<endl;
                                break;
                        }
                }

                if(i==m)
                        cout<<60-3*m<<endl;
        }
        return 0;
}