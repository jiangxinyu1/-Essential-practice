#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iterator>
#include <fstream>
#include <algorithm>

using namespace std;

/*  
    定义一个函数对象Less_Than
*/
class Less_Than {
public:
    bool operator()(const string &s1, const string &s2)
    {
        if( s1.size()<s2.size() )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
/*   
    检查Word是否在"排除集合"里的bool型函数
*/
bool word_check (const set<string> &exclusion_words , string single_word);
/*  
    把文件中的word读入map的函数
*/
void word_list(map<string, int> &words, const set<string> &exclusion_words,istream &is = cin);
/*   
    把map里的元素打印出来
*/
void dispaly(const map<string, int> &words, ostream &os = cout );
/* 
    查询单字是否在map中
*/
bool inquire(const map<string,int> &words, ostream &os = cout );
/*
     打印或者是查询单字的接口函数
*/
void  f_interface(const map<string,int> &words); 
/*  
    把文件中的内容储存到vector的函数
*/
vector<string> *store_word(map<string, int> &words,  const set<string> &exclusion_words,
                           istream &is);
/*  
    打印vector并进行排序，打印
*/
void  print_v(const  vector<string> &words_v,ostream &os);
/*  
    排序vector
*/
void sort_v(vector<string> &words_v);