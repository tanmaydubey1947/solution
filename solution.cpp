#include <iostream>
using namespace std;

int main()
{

    int num;
    cin>>num;
    int socks[101] = {0};
    for(int i = 0; i < num; i++)
    {
            int c;
            cin >> c;
            socks[c]++;
    }

    int result = 0;
    for(int i = 0; i <= 100; i++)
    {
         result = result+socks[i] / 2;
    }
    cout <<result;
    return 0;
}
