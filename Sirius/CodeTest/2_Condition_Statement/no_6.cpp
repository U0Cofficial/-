#include <iostream>
using namespace std;
int main()
{
    int h,m, recipe,re_m;
    cin >> h >> m >> recipe;
    re_m= m+recipe;
    if(re_m < 60) cout << h << ' ' << re_m;
    else
    {
        int ad_h=re_m/60;
        re_m%=60;
        h+=ad_h;
        if(h>=24) h-=24;
        cout << h << ' ' << re_m;
    }
    return 0;
}