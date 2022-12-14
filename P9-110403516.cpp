/*
 * Practice 9
 * Name: 李倬安
 * Student Number: 110403516
 * Course 2022-CE1003-A
 */

#include <iostream>
using namespace std;
int which_date(int, int, int);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int year, month, day, ans;
    cin >> year >> month >> day;
    ans = which_date(year, month, day);
    switch (ans)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 0:
        cout << "Sunday" << endl;
        break;
    }
    return 0;
}
int which_date(int year, int month, int day)
{
    int ans = 0;
    int a, b, d;
    int c;
    a = year / 100;
    b = year % 100;
    c = month;
    d = day;
    a = 2 * (3 - (a % 4));
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {

        if (month == 1 || month == 2)
        {
            if (b == 0)
            {
                b = 6;
            }
            else
            {
                b--;
                int y = (b % 28) % 4;
                int k = (b % 28) / 4;
                if (y)
                {
                    k += 1;
                }
                b = (b % 28 + k) % 7;
            }
        }
        else
        {
            b = (b % 28 + (b % 28 / 4)) % 7;
        }
    }
    else
    {
        b = (b % 28 + (b % 28 / 4)) % 7;
    }
    switch (c)
    {
    case 1:
        c = 0;
        break;
    case 2:
        c = 3;
        break;
    case 3:
        c = 3;
        break;
    case 4:
        c = 6;
        break;
    case 5:
        c = 1;
        break;
    case 6:
        c = 4;
        break;
    case 7:
        c = 6;
        break;
    case 8:
        c = 2;
        break;
    case 9:
        c = 5;
        break;
    case 10:
        c = 0;
        break;
    case 11:
        c = 3;
        break;
    case 12:
        c = 5;
        break;
    }
    d = d % 7;
    ans = (a + b + c + d) % 7;
    return ans;
}