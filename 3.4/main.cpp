#include "Readnum.cpp"

int main()
{
    vector<int> all_int;
    vector<int> odd_int;
    vector<int> even_int;
    ofstream out_file("odd.txt");

    read_num(all_int);
    classification(all_int,odd_int,even_int);
    write_to_file(odd_int,out_file);

    return 0;
}