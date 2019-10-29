#include "Familys.cpp"

int main()
{
    Familys my_family;
    my_family.add_member(my_family.familys_member);
    my_family.print(my_family.familys_member);
    my_family.search_member(my_family.familys_member);
    return 0;
}