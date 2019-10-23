#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<int> *const pentagonal_seq(istream &is = cin);
void print(const vector<int> &pen_v, ostream &os = cout);
bool continue_input();
bool get_elem(const vector<int> &v, int &elem);

inline bool checksize(int nsize)
{
    if (nsize < 1 || nsize > 64)
    {
        cerr << "The number of the pentagonal is wrong !!!" << endl;
        return false;
    }
    else
    {
        return true;
    }
}

inline int count(int i)
{
    int k = (i * (3 * i - 1)) / 2;
    return k;
}