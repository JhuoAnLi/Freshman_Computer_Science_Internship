/*
 * Practice 12
 * Name: 李倬安
 * Student Number: 110403516
 * Course 2022-CE1003-A
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void bfs(int arr[][10], int row, int col)
{
    int ans = 0;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (arr[i][j] == 1)
            {
                ans++;
                arr[i][j] = 0;
                vector<pair<int, int>> v;
                v.push_back(make_pair(i, j));
                while (!v.empty())
                {
                    int x = v.back().first;
                    int y = v.back().second;
                    v.pop_back();
                    if (x - 1 >= 0 && arr[x - 1][y] == 1)
                    {
                        arr[x - 1][y] = 0;
                        v.push_back(make_pair(x - 1, y));
                    }
                    if (x + 1 < row && arr[x + 1][y] == 1)
                    {
                        arr[x + 1][y] = 0;
                        v.push_back(make_pair(x + 1, y));
                    }
                    if (y - 1 >= 0 && arr[x][y - 1] == 1)
                    {
                        arr[x][y - 1] = 0;
                        v.push_back(make_pair(x, y - 1));
                    }
                    if (y + 1 < col && arr[x][y + 1] == 1)
                    {
                        arr[x][y + 1] = 0;
                        v.push_back(make_pair(x, y + 1));
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int row, col, ans;
    cin >> row >> col;

    int arr[10][10];
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cin >> arr[i][j];
        }
    }
    bfs(arr, row, col);

    return 0;
}