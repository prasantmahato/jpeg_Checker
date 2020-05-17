#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    if(argc!=2)
        return 1;
    
    FILE *file = fopen(argv[1], "r");
    
    if(file == NULL)
        return 1;
    
    unsigned char bytes[3];
    fread(bytes,3,1,file);

    //Check if bytes are 0xff 0xd8 0xff
    if(bytes[0]== 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
        cout<<"MAybe\n";
    else
        cout<<"No\n";
    return 0;
    
}