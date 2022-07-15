#include <iostream>
#include <windef.h>
#include <windows.h>

using namespace std;

int main()
{
    
    BOOL cfile;
    cfile = DeleteFileA(
        "S:\\Zoho\\Internship\\Windows Component\\fileHandling\\copyfile\\copedfile.txt"  // file path to delete
    );

    if(cfile == FALSE)
    {
       cout << "File is not deleted and  code = " << GetLastError() << endl;
    }
    else
    {
        cout << "Successfully deleted the file" << endl;
    }

    return 0;
}