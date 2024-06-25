#include <iostream>
using namespace std;
int main()
{
    short h,m;
    int re_m;
    cin >> h >> m;
    re_m=m-45;
    if (re_m >=0) cout << h <<' ' << re_m;
    else
    {
        re_m+=60;
        h-=1;
        if(h<0) cout << 23 <<' ' <<re_m;
        else cout << h << ' ' << re_m;
    }
    return 0;

}