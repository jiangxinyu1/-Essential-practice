#include <iostream>
#include "max.cpp"
using namespace std;



int main()
{
    int x = 2; 
    int y = 3;
    double x_d = 2.0;
    double y_d = 3.0;
    string str_x = "aaa";
    string str_y = "bbb";
    const int size = 6;
    int seq[size] = {1,2,3,4,5};
    vector<double> vec ( seq, seq+size);

    // cout << get_max(vec) << endl;
    // cout <<  get_max(x,y) << endl;
    // cout <<  get_max(x_d,y_d) << endl;
    // cout << get_max(str_x,str_y)<< endl;
    cout << get_max(seq,size) << endl;


    return 0;
}