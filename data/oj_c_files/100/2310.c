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
    int i=0;//?????????
    char a[26]={0},b[26]={0};//?????????????a[0]=x,??????a???
    //x??
    char temp=0;//????
    int   test=1;//???????????????
    for(i=0;i<300;i++)
    {
        temp=getchar();//??????.
        //??????????300??????????
        //??????????,????????????
        if('\n'==temp)break;
		if(temp>='A'&&temp<='Z')
        {temp=temp-'A';
        b[(int)temp]++;}
		if(temp>='a'&&temp<='z')
        {temp=temp-'a';
        a[(int)temp]++;}
    }
    for(i=0;i<26;i++)
    {
        //???????????????test=1,???0
        if(b[i])
        {
            printf("%c=%d\n",('A'+i),b[i]);
            test=0;
        }
	}
    for(i=0;i<26;i++) 
	{	if(a[i])
        {
            printf("%c=%d\n",('a'+i),a[i]);
            test=0;
        }
    }
    if(test)printf("No\n");
    return 0;
}