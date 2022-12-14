/*
 * Practice 11
 * Name: 李倬安
 * Student Number: 110403516
 * Course 2022-CE1003-A
 */
#include <iostream>
#include <map>
#include <vector>
using namespace std;
    
map<int, int> get_input(map<int, int> doll_map)
{
    // Please write your code here
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        doll_map[a]++;
    }
    return doll_map;
    //
}

void calculate_doll(map<int, int> &doll_map)
{
    // Please write your code here
    int temp = 0;
    for (auto i : doll_map)
    {
        if (i.second > temp)
            temp = i.second;
    }
    cout << temp << endl;
    //
}

int main()
{
    // Please write your code here
    map<int, int> doll_map;
    doll_map = get_input(doll_map);
    calculate_doll(doll_map);
    //
}
