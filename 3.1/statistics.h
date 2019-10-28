#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iterator>
#include <fstream>

using namespace std;

/*   
    检查Word是否在"排除集合"里的bool型函数
    如果在，返回false；不在集合里返回true
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