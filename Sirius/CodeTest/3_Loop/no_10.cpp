#include <iostream>
using namespace std;
int main()
{
    int n_time;
    cin >> n_time;
    int start_time=1,space_time=1;
    while(start_time <= n_time)
    {
        while(space_time<=n_time-start_time)
        {
            cout << " ";
            space_time++;
        }
        while(n_time-space_time>=0)
        {
            cout <<"*";
            space_time++;
        }
        cout << "\n";
        start_time++;
        space_time=1;
    }
    return 0;
}