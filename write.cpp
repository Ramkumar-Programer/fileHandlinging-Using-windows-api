#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE hfile;

    hfile = CreateFile(
        "S:\\Zoho\\Internship\\Windows Component\\fileHandling\\createfile\\createfile.txt",              // file path
        GENERIC_READ|GENERIC_WRITE,                                                                     // read or write mode
        FILE_SHARE_READ,                                                                                // share mode in read 
        NULL,
        OPEN_EXISTING,                                                                                     // opening a file
        FILE_ATTRIBUTE_NORMAL,
        NULL
    );
    char chbuffer[] = "Hai I am ramkumar";                                                              // content to write in a file
    DWORD noOfBytes = strlen(chbuffer);                                                                 // size of the content
    BOOL wfile;
    wfile = WriteFile(
        hfile,                                                                                          // handle
        chbuffer,                                                                                       // content 
        noOfBytes,                                                                                      // size of the content
        NULL,
        NULL
    );


    if(wfile == FALSE)
    {
        cout << "TO write file is failed" << GetLastError() << endl;
    }
    else{
        cout << "Written successfully" << endl;
    }

    return 0;
}