#include <iostream>
using namespace std;
int main()
{
    int v1,v2;
    cin >> v1 >> v2;
    
    if(v1>v2) cout << ">";
    else if (v2>v1) cout << "<";
    else cout << "==";
    return 0;

}