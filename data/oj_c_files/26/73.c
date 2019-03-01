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

	char Sentence[100]={0};    //?????????????????
        int i=0;                  //?????i
        gets (Sentence);          //????
              for (i=0;i<100;i++)
                {  if(Sentence[i]==' ')               //???????''????????''??????????????
                       {  if(Sentence[i+1]!=' ')
	                    {cout<<' ';}
                        }
			 if (Sentence[i]==0)            //?????????????????
		             {break;}
     	                 if (Sentence[i]!=' ')         //???????????????''????
		            {cout<<Sentence[i];}
	 
                }
cout<<endl;
return 0;
}

