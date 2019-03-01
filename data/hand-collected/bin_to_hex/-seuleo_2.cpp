typedef union 
{
    u8 CharData[4];
    float FloatData;    
} Hex_Float;


void Float_to_Hex(u8 *s,float data)
{
    Hex_Float HexFloat;
    HexFloat.FloatData= data;
s[3]=HexFloat.CharData[0];
    s[4]=HexFloat.CharData[1];
    s[5]=HexFloat.CharData[2];
    s[6]=HexFloat.CharData[3];
    
}