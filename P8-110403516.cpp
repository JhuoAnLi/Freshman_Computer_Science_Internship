 /*
 * Practice 8
 * Name: 李倬安
 * Student Number: 110403516
 * Course 2022-CE1003-A
 */

#include <iostream>
#include <string>
#define ll long long
using namespace std;

int gcd(int a, int b);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
