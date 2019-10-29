#include "Familys.h"

Familys::Familys()
{
    familys_member["Jiang"].push_back("xinyu1");
    familys_member["Jiang"].push_back("xinyu2");
    familys_member["Jiang"].push_back("lidong1");
    familys_member["Jiang"].push_back("lidong2");
    familys_member["Jiang"].push_back("lidong3");
    familys_member["Jiang"].push_back("lidong4");
    familys_member["Jiang"].push_back("lidong5");
    familys_member["Qu"].push_back("yating1");
    familys_member["Qu"].push_back("yating2");
    familys_member["Qu"].push_back("yating3");
    familys_member["Qu"].push_back("yating4");
    familys_member["Qu"].push_back("yating5");
    familys_member["Qu"].push_back("yating6");
}
Familys::~Familys(){ }

void Familys::Input_search(string &first_name, string &last_name)
{
    cout << "Input the last name to search..." << endl;
    cin >> last_name;
    cout << "OK" << endl;
    cout << " Input the first name: " << endl;
    cin >> first_name;
    cout << "OK" << endl;
}

void Familys::Input_add(string &first_name, string &last_name)
{
    cout << "Input the last name to add..." << endl;
    cin >> last_name;
    cout << "OK" << endl;
    cout << " Input the first name: " << endl;
    cin >> first_name;
    cout << "OK" << endl;
}

void Familys::add_member (map<string, vector<string>> &familys_member)
{
    Input_add(first_name, last_name);
    first_it = familys_member.begin();
    
    for (; first_it != familys_member.end(); ++first_it)
    {
        if( first_it->first == last_name )
        {
            familys_member[last_name].push_back(first_name); 
            cout << "Complete the adding " << endl;
            return;      
        }
    }
    familys_member[last_name].push_back(first_name);
    cout << "Complete !" << endl;
}

bool Familys::search_member( map<string,vector<string>>& familys_member)
{
    Input_search (first_name, last_name);
    first_it = familys_member.begin();

    for ( ; first_it != familys_member.end(); ++first_it)
    {
        if( first_it->first == last_name)
        {
            vector<string>::iterator iter = first_it->second.begin();
            for( ; iter != first_it->second.end(); ++iter)
            {
                if(*iter == first_name)
                {
                    cout << "Search successful!!!"<< endl;
                    return true;
                }
            }
            cout << "Search failed!!"<< endl;
            return false;
        }
    }
    cout << "Search failed!!" << endl;
    return false;
}

void Familys::print(const map<string,vector<string>>& familys_menber,
                                     ostream &os )
{
    cout << "Input the last name to print:" << endl;
    cin >> last_name;
    vector<string>::const_iterator iter = familys_member[last_name].begin();
    vector<string>::const_iterator end_iter = familys_member[last_name].end();
    for( ; iter!= end_iter;++iter)
    {
        os << "Last name:  " << last_name <<'\t' << "First name:  " << *iter << endl; 
    }
}