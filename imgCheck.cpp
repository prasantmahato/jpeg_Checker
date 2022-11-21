#include <fstream>
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
        cout<<"JPG/JPEG File\n";
    else if(bytes[0] == 0x89 && bytes[1] == 0x50 && bytes[2] == 0x4e)
        cout<<"PNG File\n";
    else if(bytes[0] == 0x47 && bytes[1] == 0x49 && bytes[2] == 0x46)
        cout<<"GIF File\n";
    else if(bytes[0] == 0x42 && bytes[1] == 0x4D)
        cout<<"BMP File\n";
    else
        cout<<"Error: Recognizing file type.\n";


    fclose(file);
    file=NULL;

    return 0;
}