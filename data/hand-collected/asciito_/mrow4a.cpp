/* dummy implementation of strtol */
#include <errno.h>
#include <limits.h>
#include <stdio.h>    
#include <stdlib.h> 

int convertchar(char nPtr)/*converts characters to integers*/
{
    int i;
    if ('0' <= nPtr && nPtr <= '9') 
    {
        i = nPtr - '0';
    } 
    else if ('a' <= nPtr && nPtr <= 'z') 
    {
        i = 10 + nPtr - 'a';
    } 
    else if ('A' <= nPtr && nPtr <= 'Z') 
    {
        i = 10 + nPtr - 'A';
    } 
    else 
    {
        i=37;/*not supported sign, returns something greater than possible base*/
    }
    return i;
}
int ifchar(char nPtr)/*check if proper character*/
{
    
    if ('0' <= nPtr && nPtr <= '9') { return 1; } 
    else if ('a' <= nPtr && nPtr <= 'z') { return 1; } 
    else if ('A' <= nPtr && nPtr <= 'Z') { return 1; } 
    else { return 0; } 
    
}
int ifspace(char nPtr)/*check if there is any spacing*/
{
    if(nPtr==' ' || nPtr=='\n' || nPtr=='\t') { return 1; }
    else { return 0; }
}

int ifoverflow(int result,int base,int sign,char nPtr)
{
    if(sign==1)
    {
        if( result<=((LONG_MAX - convertchar(nPtr))/base) )
        {
            return 0;
        }
        else { return 1; }
    }
    else if(sign==-1)
    {
        if( result>=((LONG_MIN + convertchar(nPtr))/base) )
        {
            return 0;
        }
        else { return 1; }
    }
    return 0;
}




long strtol (const char *nPtr, char **endPtr, int base)
{
    int sign=1,result=0;
    /*base is improper, returns 0 and set errno to EINVAL*/
    if (base>=37 || base==1 || base<=-1)
    {
        errno=EINVAL;
        if (endPtr) { *endPtr = (char*)nPtr; }
        return 0;
    }
    
    while(ifspace(*nPtr)==1)
    {
    nPtr++;
    }
    
    if (*nPtr=='-' && ifchar(*(nPtr+1))==1) 
    {
        sign=-1;
        nPtr++;
    } 
    else if (*nPtr=='+' && ifchar(*(nPtr+1))==1) 
    {
        sign=1;
        nPtr++;
    }
    else if ((*nPtr=='+' || *nPtr=='-') && ifchar(*(nPtr+1))==0 && ifspace(*(nPtr+1))==0)
    {
        if (endPtr) *endPtr= (char*)nPtr; 
        return 0;
    }
    
    if (base==0 || base==16) /*choosing the base and moving pointer to their proper positions*/
    {
        if( *nPtr=='0' && (*(nPtr+1)=='x' || *(nPtr+1)=='X'))
        {
            base=16;
            if(convertchar(*(nPtr+2))<base)
            {
                nPtr=nPtr+2;
            }
            else 
            {   
                nPtr=nPtr+1;
                if (endPtr) *endPtr= (char*)nPtr; 
                return 0;
            }
        }
        else if(*nPtr=='0' && ifchar(*(nPtr+1))==1)
        {
            base=8;
            if(convertchar(*(nPtr+1))<base)
            {
                nPtr=nPtr+1;
            }
            else 
            {   
                nPtr=nPtr+1;
                if (endPtr) *endPtr= (char*)nPtr; 
                return 0;
            }
        }
        else if (base!=16) { base=10; }
    }
    
    while(ifchar(*nPtr)==1)/*counting characters till there is improper character or overflow*/
    {
        
        if(sign==1)
        {
            if(ifoverflow(result,base,sign,*nPtr)==0)
            {
                result=result*base + convertchar(*nPtr);
            }
            else 
            { 
                errno=ERANGE;
                while (ifchar(*nPtr)==1)
                {
                    nPtr++;
                }
                if (endPtr) *endPtr= (char*)nPtr;
                return LONG_MAX;
            }
        }
        if(sign==-1)
        {
            if(ifoverflow(result,base,sign,*nPtr)==0)
            {
                result=result*base - convertchar(*nPtr);
            }
            else 
            {
                errno=ERANGE;
                while (ifchar(*nPtr)==1)
                {
                    nPtr++;
                }
                if (endPtr) *endPtr= (char*)nPtr;
                return LONG_MIN;
            }
        }
        
        nPtr++;
    }
    
    

    /*finaly defining endPtr*/
    if (endPtr) *endPtr= (char*)nPtr;
    return result;
}   