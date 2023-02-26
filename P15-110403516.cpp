/*
 * Practice 15
 * Name: 李倬安
 * Student Number: 110403516
 * Course 2022-CE1003-A
 */
#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <set>
using namespace std;
char arr_c[4];
void show_card(string *p_card)
{
    ofstream output_file("output.txt", ios::out);
    int y = 0;
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        if (arr_c[i] == 'S' && y == 0)
        {
            output_file << arr_c[i] << ": ";
            for (int j = 0; j < 13; j++)
            {
                output_file << *(p_card + j + 13 * i) << " ";
            }
            output_file << endl;
            y++;
            i = -1;
        }

        else if (arr_c[i] == 'W' && y == 1)
        {
            output_file << arr_c[i] << ": ";
            for (int j = 0; j < 13; j++)
            {
                output_file << *(p_card + j + 13 * i) << " ";
            }
            output_file << endl;
            y++;
            i = -1;
        }
        else if (arr_c[i] == 'N' && y == 2)
        {
            output_file << arr_c[i] << ": ";
            for (int j = 0; j < 13; j++)
            {
                output_file << *(p_card + j + 13 * i) << " ";
            }
            output_file << endl;
            y++;
            i = -1;
        }
        else if (arr_c[i] == 'E' && y == 3)
        {
            output_file << arr_c[i] << ": ";
            for (int j = 0; j < 13; j++)
            {
                output_file << *(p_card + j + 13 * i) << " ";
            }
            output_file << endl;
            i = 3;
        }
    }
    output_file.close();
}
int main()
{
    char first;
    string card_one;
    string card[4][13];
    ifstream input_file("input.txt", ios::in);
    input_file >> first;
    if (first == 'N')
        first = 'E';
    else if (first == 'E')
        first = 'S';
    else if (first == 'S')
        first = 'W';
    else if (first == 'W')
        first = 'N';
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            input_file >> card_one;
            card[j][i] = card_one;
            arr_c[j] = first;
            if (first == 'N')
                first = 'E';
            else if (first == 'E')
                first = 'S';
            else if (first == 'S')
                first = 'W';
            else if (first == 'W')
                first = 'N';
        }
    }
    show_card(&card[0][0]);
    input_file.close();

    return 0;
}