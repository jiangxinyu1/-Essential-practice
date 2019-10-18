#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

inline bool checksize(int num_elem)
{
    if (num_elem < 1 || num_elem > 64)
    {
        cerr << "The number of the pentagonal is wrong !!!" << endl;
        return false;
    }
    else
    {
        return true;
    }
}

inline int count(int i  )
{
    int k = (i * (3 * i - 1)) / 2;
    return k;
}

/* 
get the pentagonal  
*/
bool pentagonal(vector<int> &, int );

/* 
print the vector (default to cout ) 
the last para has default set
*/
void print_v(const vector<int> &v, const string &title, ostream &os = cout);

int main(int argc, const char **argv)
{
    int size;
    vector<int> m;
    string title = "The pentagonal is  ";
    ofstream outfile("write_number.txt", ios_base::app ); //以输出模式开启文件
    cout << "Input the size :" << endl;
    cin >> size;
    if (!pentagonal(m, size))
    {
        return -1;
    }
    else
    {
        print_v(m, title, outfile);
    }
    return 0;
}

/*
    pentagonal_v
 */
bool pentagonal(vector<int> &pentagonal_v,int num_elem)
{
    if (!checksize(num_elem))
    {
        return false;
    }
    else
    {
        for (int i = 1; i <= num_elem; ++i)
        {
            int tmp = count (i);
            pentagonal_v.push_back(tmp);
        }
        return true;
    }
}

/*
    print a vector
 */
void print_v(const vector<int> &v, const string &title, ostream &os)
{
    if (v.size() == 0)
    {
        cerr << "The vector is empty !" << endl;
    }
    else
    {
        if (!os)
        {
            cerr << "open the file failed" << endl;
        }
        os << title << endl;
        for (int j = 0; j < v.size(); ++j)
        {
            os << v[j] << "-";
        }
        os << endl;
    }
}
