#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
start:
    cout << n << endl;
        if (n==1)
        {
            return 0 ;
        }
        else if(n%2 == 1)
        {
            n=3*n+1;
        }
        else
        {
            n=n/2;
        }
    goto start;
    return 0;
}

