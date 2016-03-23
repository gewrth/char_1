#include <iostream>

using namespace std;

int main()
{
    char arr[10];
    for ( int i=0;i<10;++i )
        { cout << sizeof(arr[i]) << " ";
        }
    cout << endl;
    cout << sizeof(arr);

    return 0;
}
