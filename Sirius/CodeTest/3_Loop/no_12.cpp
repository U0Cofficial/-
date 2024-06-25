
#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    while(true)
    {
        cin >> n1 >> n2;
        if(cin.eof() == true)
        {
            break;
        }
        cout << n1+n2 << endl;
    }
}