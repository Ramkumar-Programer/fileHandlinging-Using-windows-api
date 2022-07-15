#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

    HANDLE hfile;

    hfile = CreateFile(
        "S:\\Zoho\\Internship\\Windows Component\\fileHandling\\createfile\\createfile.txt",// where to create a file(file path)
        GENERIC_READ|GENERIC_WRITE,                   // requested to access to file like read or write
        FILE_SHARE_READ,                              // shareing mode of the file
        NULL,                                         // security attribute
        CREATE_NEW,                                   // we can use createNew, createAlways, openAlways, openExisting
        FILE_ATTRIBUTE_NORMAL,                        // most common default value for file --> The file does not have other attributes set. This attribute is valid only if used alone.
        NULL
    );


    if(hfile == INVALID_HANDLE_VALUE)
    {
        cout << "Create file failed" << GetLastError() << endl;
    }
    else{
        cout << "created successfully" << endl;
    }
CloseHandle(hfile);

    
    return 0;

}