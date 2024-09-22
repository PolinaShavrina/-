#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
    int i, j, N = 50;
    int c = N / 2;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i <= c)
            {
               
                if (j >= c - i && j <= c + i)
                    cout << "+";
                else
                    cout << " ";
            }
            else
            {
            
                if (j >= c + i - N + 1 && j <= c - i + N - 1)
                    cout << "+";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
  
    return 0;
    
}
