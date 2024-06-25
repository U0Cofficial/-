#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n_byte;
    cin >> n_byte;
    n_byte=ceil(n_byte/4.0);
    for(int i=1;i<=n_byte;i++)
    {
        cout << "long ";

    }
    cout << "int";
    return 0;
}