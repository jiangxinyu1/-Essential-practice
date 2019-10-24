#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

#include"pentagonal.cpp"

int main()
{
    int element = 0;
    vector<int > *const p_pen = pentagonal_seq();
    display_plus(*p_pen);
    while(continue_input())
    {
        pentagonal_seq();
        display_plus(*p_pen);
    }
    cout << "Inputing Ending " << endl;

    if(get_elem(*p_pen , element))
    {
        cout <<"The element on the position  is :  " << element << endl ;
    }
    return 0;
}

