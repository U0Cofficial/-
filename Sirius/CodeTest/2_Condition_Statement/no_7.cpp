#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if ( a == b && b == c)
        cout << 10000 + 1000*a;
    else if ( a==b || a==c )
        cout << 1000 + 100 *a;
    else if ( b == c)
        cout << 1000 +100*b;
    else{
        if(a>=b && a>=c)
            cout << 100*a;
        else if (b >=a && b>=c)
            cout << 100*b;
        else 
            cout << 100*c;
    }
    return 0;
}