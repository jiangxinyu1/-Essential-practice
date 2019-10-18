#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;


// vector<int >  pentagonal (int );
bool pentagonal(vector<int> &, int );

//该函数的最后一个参数有默认值
void print_v(const vector<int> &v , const string &title , ostream &os  = cout );


int main(int argc, const char** argv) 
{
    int size ;
    vector<int > m;
    string title = "The pentagonal is  ";
    fstream outfile("write_numbers.txt"); //以输出模式开启文件
    cout << "Input the size :"<< endl;
    cin >> size;
    if (!pentagonal(m,size))
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
bool pentagonal(vector<int>& pentagonal_v , int num_elem)
{
    if (num_elem<1||num_elem>64)
    {
        cerr << "The number of the pentagonal is wrong !!!" << endl;
        return false;
    }
    else
    {
        for (int i = 1; i <= num_elem; ++i)
        {
            int tmp = (i * (3 * i - 1)) / 2;
            pentagonal_v.push_back(tmp);
        }
        return true;
    }
}

/*
    print a vector
 */
void print_v(const vector<int> &v ,  const string &title,  ostream &os )
{
    if(v.size()==0 )
    {
        cerr << "The vector is empty !"<< endl;
    }
    else
    {
        os <<  title << endl;
        for (int j = 0; j < v.size(); ++j)
        {
            os << v[j] << "-";
        }
        os << endl;
    }
}

/* 
vector<int> pentagonal(int num_elem)
{
    vector<int> pentagonal_v ;
    if(num_elem <1 || num_elem >1024)
    {
        cerr << "The number of element is wrong " << "AND"
                << "reset the number is 8 "<< endl;
        num_elem = 8;
    }
    else
    {
        for(int i = 1; i <= num_elem; ++i )
        {
            int tmp = (i*(3*i-1))/2;
            pentagonal_v.push_back(tmp);
        }
    }
    return pentagonal_v;
} */