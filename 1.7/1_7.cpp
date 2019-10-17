#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<string> read_file(void);

void rewrite_file( vector<string> );

void print_vector( const vector<string> );

int main ()

{

    vector<string> V;

    V = read_file();

    print_vector(V);

    rewrite_file(V);

    return 0;

}

vector<string> read_file(void)

{

    vector<string> v;

    string word;

    fstream io_file("say_sth.txt",ios_base::in|ios_base::app);

    if(!io_file)

        cerr << "Unable to open the file" << endl;

    else

    {

        io_file.seekg(0);

        while (io_file >> word)

        {

            v.push_back(word);

        }

    }
38
    return v;
39
}
40
41
void print_vector( const vector<string> &v)
42
{
43
    for (int i = 0; i < v.size(); ++i)
44
    {
45
        cout << v[i] << " " ;
46
    }
47
    cout << endl;
48
}
49
50
51
void rewrite_file(vector<string> &v)
52
{
53
    sort (v.begin() , v.end());
54
55
    ofstream new_file("sorted_file.txt");
56
57
    if(!new_file)
58
        cerr << "Unable to open the file"<<endl;
59
    else
60
    {
61
        for (int k = 0; k < v.size(); ++k)
62
        {
63
            new_file << v[k] << " ";
64
        }
65
    }
66
}