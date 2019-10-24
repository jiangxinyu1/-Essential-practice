#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
#include "pentagonal.h"


/*
        给定元素个数，求解pentagonal数列
    　从os对象输入数列的元素个数
        返回一个“常量指针”指向该数
*/
vector<int> *const pentagonal_seq(istream &is)
{
    static vector<int> pen_v;

    int nsize = 0;
    cout << "Input the size of the vector :" << endl;
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
    从os打印vector的函数（通过下标遍历）
*/
void print(const vector<int> &pen_v, ostream &os)
{
    if( pen_v.empty() || pen_v.size()==0)
    {
        cerr << "The vector which waits to print   is empty. " << endl;
        return ;
    }
    for (int i = 0; i < pen_v.size(); ++i)
    {
        os << pen_v[i] << '\t';
    }
    os << endl;
}

/*  
    从os打印vector的函数（通过迭代器便利）
    tip：由于传入的vector是const型的，因此要使用const类型的迭代器
*/
void display ( const  vector<int>& vec , ostream & os )
{
    vector<int>::const_iterator iter =  vec.begin();
    vector<int>::const_iterator end_it = vec.end();
    os << "Display : " << endl;
    for( ; iter != end_it; iter++ )
    {
        os << *iter << '\t';
    }
    os << endl;
 }

/* 
    写一个输出模板函数来从os打印vector
    vector里面的元素类型由编译器通过用户传入的参数猜测
*/
template <typename T>
void display_plus( const vector<T> &vec , ostream &os )
{
    typename vector<T>::const_iterator iter = vec.begin();
    typename vector<T>::const_iterator end_it = vec.end();
    os << "Display : " << endl;
    for( ;  iter != end_it; ++iter)
    {
        os << *iter << '\t';
    }
    os << endl;
}


/*  
    询问用户是否继续输入的bool型函数
    用户输入yes就返回true
    用户输入no就返回false
*/
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

/*  
    输出特定index上的数列元素的bool型函数
*/
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
