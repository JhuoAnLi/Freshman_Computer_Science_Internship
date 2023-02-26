/*
 * Practice 14
 * Name: 李倬安
 * Student Number: 110403516
 * Course 2022-CE1003-A
 */
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int chinese, english, math, science;
    ofstream outf("output.txt", ios::out);
    ifstream inf("score.txt");
    while (inf >> name >> chinese >> english >> math >> science)
    {
        int key = 0;
        if (chinese >= 12)
            key++;
        if (english >= 12)
            key++;
        if (math >= 8)
            key++;
        if (science >= 12)
            key++;
        if (key == 4)
        {
            outf << "Hello " << name << ", welcome to NCU CSIE!" << endl;
        }
        else
        {
            outf << "Sorry, " << name << " can't enter NCU CSIE." << endl;
        }
    }
    inf.close();
    outf.close();
    return 0;
}