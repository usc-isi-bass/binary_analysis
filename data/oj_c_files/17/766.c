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

char input[150], output[150];
int main()
{
        int n,j;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%s",input);
            memset(output,0,sizeof(output));
            int count1=0,count2=0;
            int i;
            for(i=0;i<strlen(input);++i)
            {
				output[i]=' ';
                if(input[i]==')')                       
				{
					if(count1<=0) output[i]='?';
                    else count1--;
                }
                else if(input[i]=='(') count1++;
            }
            for(i=strlen(input);i>=0;--i)
            {
				if(input[i]=='(')
                {
                    if(count2<=0) output[i]='$';
                    else count2--;
                }
                else if(input[i]==')') count2++;
            }
            printf("%s\n%s\n",input,output);
        }
        return 0;
}