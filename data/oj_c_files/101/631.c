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
    int A,B,C;//???????  
    int As,Bs,Cs;//????????  
    int AnsA,AnsB,AnsC;//????  
    for(A=1; A<4; A++)//??A???  
    {  
        for(B=1; B<4; B++)//??B???  
        {  
            for(C=1; C<4; C++)//??C???  
            {  
                As= (B>A)+(C==A);//A???  
                Bs= (A>B)+(A>C);//B???  
                Cs= (C>B)+(B>A);//C???  
                //????????????????  
                if( !( (A<=B) && (As<=Bs) || (A<=C) && (As<=Cs)||  
                       (B<=A) && (Bs<=As) || (B<=C) && (Bs<=Cs)||  
                       (C<=A) && (Cs<=As) || (C<=B) && (Cs<=Bs)) )  
                {  
                    AnsA=A;  
                    AnsB=B;  
                    AnsC=C;  
                }  
            }  
        }  
    }   
    if(AnsA>=AnsB && AnsB>=AnsC)  
    {  
        cout<<"CBA"<<endl;  
    }  
    if(AnsA>=AnsC && AnsC>=AnsB)  
    {  
        cout<<"BCA"<<endl;  
    }  
    if(AnsB>=AnsA && AnsA>=AnsC)  
    {  
        cout<<"CAB"<<endl;  
    }  
    if(AnsB>=AnsC && AnsC>=AnsA)  
    {  
        cout<<"ACB"<<endl;  
    }  
    if(AnsC>=AnsA && AnsA>=AnsB)  
    {  
        cout<<"BAC"<<endl;  
    }  
    if(AnsC>=AnsB && AnsB>=AnsA)  
    {  
        cout<<"ABC"<<endl;  
    }      return 0;//?????  
}  