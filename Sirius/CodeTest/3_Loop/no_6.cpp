#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); // c와 c++ 버퍼의 연결을 해제
    cin.tie(NULL);  // cin 과 cout간 연결을 해제하여 입력 전에 출력버퍼 클리어하는 현상 제거

    int t_num,num1,num2;
    cin >> t_num;
    for(int i=0;i<t_num;i++)
    {
        cin >> num1 >> num2;
        cout << num1+num2 << '\n';
    }
    
    return 0;
}