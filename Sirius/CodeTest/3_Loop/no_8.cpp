#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);   
    int t_num,n1,n2,i=1;
    cin >> t_num;
    while(i<=t_num)
    {
        cin >> n1 >> n2;
        cout << "Case #" << i << ": " << n1 << " + " << n2 << " = " << n1+n2 << '\n';

        i++;
    }
    
    return 0;
}