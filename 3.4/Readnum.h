#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
/*
    从is对象输入整数，用vector储存
*/
inline void read_num(vector<int> & NUM_V , istream & is = cin)
{   
    cout << "Input the int number(ctrl+D to end):  " << endl;
    istream_iterator<int> is_it(is);
    istream_iterator<int> end_f;
    copy(is_it,end_f,back_inserter(NUM_V));
    cout << "End of storage . " << endl;
}

/*
    把vector打印到os对象的函数
*/
inline void print(const vector<int> &NUM_V, ostream &os = cout)
{
    cout << "Print vector to os ." << endl;
    vector<int>::const_iterator iter = NUM_V.begin();
    vector<int>::const_iterator end_it = NUM_V.end();
    for (; iter != end_it; ++iter)
    {
        os << *iter << endl;
    }
    cout << "End of printing . " << endl;
}

/*
    把vector写入文件，数值以空格分割
*/
inline void write_to_file(const vector<int > &NUM_V , ostream & os = cout )
{
    ostream_iterator<int> os_it( os , "\n");
    copy(NUM_V.begin(),NUM_V.end(), os_it);    
}

/*
    把vector里的偶数和奇数取出来，存进新的vector
*/
inline void  classification(const vector<int> &NUM_V  , vector<int> &odd_v , 
                                                vector<int> &even_v)
{
    vector<int>::const_iterator iter  = NUM_V.begin();
    vector<int>::const_iterator end_it = NUM_V.end();
    for( ; iter!=end_it; ++iter)
    {
        if((*iter)%2 == 0 )
        {
            odd_v.push_back(*iter);
        }
        else if ((*iter) % 2 == 1)
        {
            even_v.push_back(*iter);
        }
        else
        {
            cerr << "The number-"<< *iter <<"-is invaild . " << endl;
        }
    }
}

