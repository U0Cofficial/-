#include <iostream>
using namespace std;
int main()
{
    int score,judge;
    cin >> score;
    judge=score/10;
    switch(judge)
    {
        case 10:
            cout <<'A';
            break;
        case 9:
            cout << 'A';
            break;
        case 8:
            cout << 'B';
            break;
        case 7:
            cout << 'C';
            break;
        case 6:
            cout << 'D';
            break;
        default:
            cout << 'F';
            break;
    }
    return 0;
}