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
	char A[26]={0};
    char a[26]={0};
    char temp=0;
    int   test=1;
    for(i=0;i<300;i++)
    {
        temp=getchar();
        if('\n'==temp)
			break;\
	 if(temp>='A'&&temp<='Z')
	 {
		temp=temp-'A'; 
        if(0<=temp&&temp<26)
			A[(int)temp]++;
	 }
      if(temp>='a'&&temp<='z')
	  {
        temp=temp-'a'; 
        if(0<=temp&&temp<26)
			a[(int)temp]++;
	  }
    }
	 for(i=0;i<26;i++)
    {
   
        if(A[i])
        {
            printf("%c=%d\n",('A'+i),A[i]);
            test=0;
        }
	 }
	for(i=0;i<26;i++)
    {
        if(a[i])
        {
            printf("%c=%d\n",('a'+i),a[i]);
            test=0;
        }
    }
    if(test)
	printf("No\n");
    return 0;
}