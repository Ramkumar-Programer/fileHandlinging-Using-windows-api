#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE hfile;

    hfile = CreateFileA(
        "S:\\Zoho\\Internship\\Windows Component\\fileHandling\\createfile\\createfile.txt",     // file path
        GENERIC_READ,                                                                          // read mode 
        FILE_SHARE_READ,                                                                       // share mode in read mode
        NULL,
        OPEN_EXISTING,                                                                          // opening a file
        FILE_ATTRIBUTE_NORMAL,
        NULL
    );
    char chbuffer[101];
    DWORD noOfBytes = 100;
    BOOL wfile;
    wfile = ReadFile(
        hfile,                                                                                  // handle 
        chbuffer,                                                                               // fetching the content and storing in chbuffer
        noOfBytes,                                                                              // length of the chbuffer
        NULL,
        NULL
    );
    cout << chbuffer;                                                                            // printing the content
    return 0;
}