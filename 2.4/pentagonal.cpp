#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
#include "pentagonal.h"


/*
    　从os对象输入数列的元素个数
        返回一个　const指针（常量指针）
        指向数列的数组的第一个元素
*/
vector<int> *const pentagonal_seq(istream &is)
{
    static vector<int> pen_v;
    //vector<int >::iterator  iter;
    int nsize = 0;
    is >> nsize;
    if (!checksize(nsize))
    {
        return &pen_v;
    }
    if (pen_v.size() < nsize)
    {
        for (int i = pen_v.size() + 1; i <= nsize; ++i)
        {
            pen_v.push_back(count(i));
        }
        return &pen_v;
    }
    else
    {
        return &pen_v;
    }
}
/*
    打印
*/
void print(const vector<int> &pen_v, ostream &os)
{
    // if(pen_v.empty() || pen_v.size()==0)
    //     cerr << "The vector is empty. " << endl;
    for (int i = 0; i < pen_v.size(); ++i)
    {
        os << pen_v[i] << '\t';
    }
    os << endl;
}
bool continue_input()
{
    string str_y = "yes";
    string str_n = "no";
    string an;
    cout << "Continue? yes or no" << endl;
    cin >> an;
    while (an != str_y && an != str_n)
    {
        cerr << "input again" << endl;
        cin >> an;
    }
    if (an == str_y)
    {
        return true;
    }
    if (an == str_n)
    {
        return false;
    }
}

bool get_elem( const vector<int> &v,  int &elem)
{
    int pos = 0;
    cout << "Input the position to get the element in the vector:" << endl;
    cin >> pos;
    if( pos > v.size() || pos < 0)
    {
        return false;
    }
    else
    {
        elem = v [pos];
        return true;
    }

}
