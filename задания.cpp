
#include <iostream>
#include <string>
using namespace std;
int main()
{   //задание1
    int i = 0, j = 5, k = 4, l = 16, d = 9;
    int a = i + d;
    int b = l - k;
    int c = l * k;
    int c1 = l / k;
    int c2 = l % d;
    cout << "i=0 +d=9   = " << a << endl;
    cout << "l=16 - k=4  = " << b << endl;
    cout << "l=16 * k=4  = " << c << endl;
    cout << "l=16 / k=4  = " << c1 << endl;
    cout << "l=16 % d=9  = " << c2 << endl;
    //задание2
    cout << boolalpha;

    int i1 = 5, j1 = 0, k1 = 4, l1 = 5, d1=0;
    cout << "true = " << (i1 == l1) << endl;
    cout << "false = " << (i1 == k1) << endl;
    cout << "false = " << (i1 != l1) << endl;
    cout << "true = " << (i1 != k1) << endl;
    cout << "true = " << (i1 > k1) << endl;
    cout << "false = " << (k1 > l1 ) << endl;
    cout << "true = " << (j1 < k1) << endl;
    cout << "false = " << (i1 < k1) << endl;
    cout << "true = " << (i1 >= i1) << endl;
    cout << "false = " << (k1 >= i1) << endl;
    cout << "false = " << (i1 <= k1) << endl;
    cout << "true = " << (j1 <= k1) << endl; 
    //задание3
    cout << "true = " << (i1 == l1 && j1 == d1) << endl;
    cout << "true = " << (i1 != k1 && l1 != d1) << endl;
    cout << "true = " << (i1 == k1 || j1 == d1) << endl;
    cout << "true = " << (i1 == l1 || j1 == d1) << endl;
    cout << "true = " << !(d1>l1) << endl;
    
}
