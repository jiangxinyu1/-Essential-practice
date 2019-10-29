#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
 
class  Familys 
{
private:
    string last_name;
    string first_name;
public:
    Familys();
    ~Familys();
    map<string, vector<string>> familys_member;
    map<string, vector<string>>::iterator first_it;
    map<string, vector<string>>::iterator end_it ;

    /*
        增加家族成员的函数
    */
    void add_member(map<string, vector<string>> & );
    /*
        通过姓氏检索家族成员的函数  
    */
    bool search_member(map<string, vector<string>> &);
    /*  
        打印
    */
    void print(const map<string, vector<string>> & ,
                        ostream &os = cout);
    /*  
        由标准输入姓氏和名字的函数
    */
   void Input_search(string &first_name , string &last_name);
   void Input_add(string &first_name, string &last_name);

};