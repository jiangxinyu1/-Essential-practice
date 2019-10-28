#include "statistics.cpp"

int main()
{
    ifstream i_file("aaa.txt");
    map<string,int> lwords;
    const int  nsize = 7; 

    string ex_w[nsize] = {"but", "and", "the", "a", "an", "or", "so"};
    const set<string> Exclusion_Word(ex_w, ex_w + nsize);

    word_list( lwords, Exclusion_Word ,i_file);

    f_interface(lwords);
     return 0;
}