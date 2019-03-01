#include <stdio.h>

char * ConvertToString(int Number, char *String, int Base)
{
    char *returnString = NULL;
    
    int tempNum;
    
    unsigned int length = 0, index, unitsDigit;
    
    //
    // Validate Input
    //
    
    if (String == NULL)
    {
        goto Exit;
    }
    
    if (Number == 0)
    {
        String[0] = '0';
        
        String[1] = '\0';
        
        returnString = String;
        
        goto Exit;
    }
    
    //
    // If Base 10 and if the number is in two's complement
    // then convert to positive number.
    //
    
    if (Number & (0x1 << 0x1f))
    {
        if (Base == 10)
        {
            Number = ~Number + 0x1;
            
            String[0] = '-';
            
            length++;
        }
        else
        {
            goto Exit;
        }
    }
    
    //
    // Find the length of the number
    //
    
    tempNum = Number;
    
    while (tempNum != 0)
    {
        tempNum = tempNum / Base;
        
        length++;
    }
    
    index = length - 1;
    
    //
    // Convert To String
    //
    
    while (Number != 0)
    {
        unitsDigit = Number % Base;
        
        Number = Number / Base;
        
        if (unitsDigit >= 10)
        {
            String[index] = (unitsDigit - 10) + 'A';
        }
        else
        {
            String[index] = unitsDigit + '0';
        }
        
        index--;
    }
    
    String[length] = '\0';
    
    returnString = String;
    
Exit:

    return returnString;

}
