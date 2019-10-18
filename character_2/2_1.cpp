#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;


vector<int >  pentagonal (int );
void print_v(const vector<int> &v , const string & title , ostream &os  = cout );

int main(int argc, const char** argv) 
{
    int size ;
    string title = "The pentagonal is  ";
    fstream outfile ("write_numbers.txt");
    cout << "Input the size :"<< endl;
    cin >> size;
    print_v(pentagonal(size), title,outfile);

    return 0; 
}

/*
    pentagonal_v
 */
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
}
/*
    print a vector
 */
void print_v(const vector<int> & v ,  const string &title,  ostream& os )
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