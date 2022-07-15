#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    
    BOOL cfile;
    cfile = CopyFile(
        "S:\\Zoho\\Internship\\Windows Component\\fileHandling\\createfile\\createfile.txt",
        "S:\\Zoho\\Internship\\Windows Component\\fileHandling\\copyfile\\copedfile.txt",
        true
    );


    if(cfile == false)
    {
        cout << "copying a file is failed" << GetLastError() << endl;
    }
    else{
        cout << "created successfully" << endl;
    }

}