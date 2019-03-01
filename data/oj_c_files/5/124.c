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

void main()
{
    float x,fenzi=0;
    int lena,lenb,i,j=0;
    char a[505],b[505],ch;
    scanf("%f",&x);
    scanf("%c",&ch);
    gets(a);

    gets(b);
 
    lena=strlen(a);
    lenb=strlen(b);
    if(lena!=lenb)
    printf("error\n");
    else
    {
    	 for(i=0;i<lena;i++)
    	 {
    	      if((a[i]=='A'||a[i]=='T'||a[i]=='G'||a[i]=='C')&&
    	      (b[i]=='A'||b[i]=='T'||b[i]=='G'||b[i]=='C'))
    	        {
    		    if(a[i]==b[i]) fenzi++;
    	        }
    	      else {j=1;printf("error\n");break;}
    	 }
         if(j==0&&fenzi>=x*lena) printf("yes\n");
         else if(j==0) printf("no\n");
    }
    		
}