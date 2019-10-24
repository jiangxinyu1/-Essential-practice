#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<int> *const pentagonal_seq(istream &is = cin);
void print(const vector<int> &pen_v, ostream &os = cout);
bool continue_input();
bool get_elem(const vector<int> &v, int &elem);
void display(const vector<int> &vec, ostream &os = cout);
template <typename T>
void display_plus(const vector<T> &vec, ostream &os = cout );

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