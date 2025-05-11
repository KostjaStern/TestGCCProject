#include <iostream>
#include <vector>
#include <string>
#include <CoreFoundation/CFString.h>

using namespace std;


int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    CFStringRef utf8 = CFStringCreateWithCString(NULL, "Test string func", kCFStringEncodingUTF8);
    int buflen = CFStringGetMaximumSizeOfFileSystemRepresentation(utf8);
    cout << "buflen = " << buflen << endl;

    return 0;
}
