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
    int z,q,s,l;
    for(z=10;z<60;z=z+10)
    {
        for(q=10;q<60;q=q+10)
        {
            for(s=10;s<60;s=s+10)
            {
                for(l=10;l<60;l=l+10)
                {
                    if(z+q==s+l&&z+l>s+q&&z+s<q)    //?????????
                    {
                        if(l>q>s>z)
                            cout<<"l "<<l<<endl<<"q "<<q<<endl<<"s "<<s<<endl<<"z "<<z;
                        else if(q>l&&l>s&&s>z)
                            cout<<"q "<<q<<endl<<"l "<<l<<endl<<"s "<<s<<endl<<"z "<<z;
                        else if(q>l&&l>z&&z>s)
                            cout<<"q "<<q<<endl<<"l "<<l<<endl<<"z "<<z<<endl<<"s "<<s;
                        else if(l>q&&q>z&&z>s)
                            cout<<"l "<<l<<endl<<"q "<<q<<endl<<"z "<<z<<endl<<"s "<<s;
                        else if(q>z&&z>l&&l>s)
                            cout<<"q "<<q<<endl<<"z "<<z<<endl<<"l "<<l<<endl<<"s "<<s;
                        else if(q>s&&s>l&&l>z)
                            cout<<"q "<<q<<endl<<"s "<<s<<endl<<"l "<<l<<endl<<"z "<<z;
                        else if(q>z&&z>s&&s>l)
                            cout<<"q "<<q<<endl<<"z "<<z<<endl<<"s "<<s<<endl<<"l "<<l;
                        else if(q>s&&s>z&&z>l)
                            cout<<"q "<<q<<endl<<"s "<<s<<endl<<"z "<<z<<endl<<"l "<<l; //????
                    }
                }
            }
        }
    }
    return 0;
}