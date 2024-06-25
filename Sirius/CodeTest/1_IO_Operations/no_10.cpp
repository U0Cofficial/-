// 문제
// (세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.



// (1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가, 둘째 줄에 (2)의 위치에 들어갈 세자리 자연수가 주어진다.

// 출력
// 첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int var0,var1,var2, cnt = 0;
    cin >> var1 >> var2;
    for(int i=0;i<3;i++)
    {   
        var0=((var2/int(pow(10,i)))%10)*var1*(pow(10,i));
        cout << var0/int(pow(10,i)) << endl;
        cnt+=var0;
    }
    cout << cnt << endl;
    

    return 0;
}