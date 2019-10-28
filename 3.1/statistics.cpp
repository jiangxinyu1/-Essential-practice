#include "statistics.h"

bool word_check (const set<string> &exclusion_words, string single_word)
{
    set<string>::const_iterator iter = exclusion_words.begin();

    for( ; iter != exclusion_words.end();++iter)
    {
        if(single_word == *iter)
        {
            cout << " The word -" << *iter << "- is rejected ! " << endl;
            return false;
        }
    }
    return true;    
}

void word_list(map<string, int> &words, const set<string> &exclusion_words, 
                            istream &is )
{
    string single_word;
    while( is >> single_word)
    {
        if(word_check( exclusion_words , single_word))
        {
            words[single_word]++;
        }
    }
    cout << "End of file reading ~" << endl;
}

void  dispaly (const map<string,int > &words , ostream & os) 
{
    map<string,int>::const_iterator iter = words.begin();
    for( ; iter != words.end(); ++iter )
    {
        os << "The key word is:" << '\t' << iter->first << '\t'
                                                     << "The value is :" << iter->second << endl;
    }
}

bool  inquire(const map<string,int> &words, ostream &os)
{
    string single_word;
    cout << "Input the word to inquie: "<< endl;
    cin >> single_word;
    map<string,int>::const_iterator iter = words.begin();
    for ( ; iter != words.end(); ++iter)
    {
        if(single_word == iter->first)
        {
            os << "Search successful !" <<endl;
            os << "The value is : " << iter->second << endl; 
            return true;
        }
    }
    os << "Search failed!" << endl;
    return false;
}

void f_interface(const map<string, int> &words)
{
    const string str_p = "print";
    const string str_i = "inquire";
    string str;
    cout << "Choose ! print or inquire? " << endl;
    while (cin >> str)
    {
        if (str == str_p)
        {
            dispaly(words);
            break;
        }
        if (str == str_i)
        {
            inquire(words);
            break;
        }
        else
        {
            cout << "Input again:" << endl;
        }
    }
}
