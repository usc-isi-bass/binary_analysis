typedef union 
{
    u8 CharData[4];
    float FloatData;    
} Hex_Float;


float Hex_to_Float(u8 *hex)
{
    Hex_Float HexFloat;
    
    if(hex==(u8*)0)
        return 0.0;    
    HexFloat.CharData[0]=hex[3];
    HexFloat.CharData[1]=hex[4];
    HexFloat.CharData[2]=hex[5];
    HexFloat.CharData[3]=hex[6];
    return HexFloat.FloatData;
}