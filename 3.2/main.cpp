#include "statistics.cpp"

int main()
{
    ifstream i_file("aaa.txt");
    ofstream o_file("output.txt");
    ofstream sorted_file("sorted.txt");
    map<string,int> lwords;
    const int  nsize = 7; 

    string ex_w[nsize] = {"but", "and", "the", "a", "an", "or", "so"};
    const set<string> Exclusion_Word(ex_w, ex_w + nsize);

    // word_list( lwords, Exclusion_Word ,i_file);

    // f_interface(lwords);

    vector<string> *new_v = store_word(lwords,Exclusion_Word,i_file);
    print_v( *new_v, o_file);
    sort_v(  *new_v);
    print_v(*new_v,sorted_file);
     return 0;
}