#include <iostream>
#include "Triangular.cpp"
int main()
{
    Triangular trian (8,9);
    cout << trian.name() << endl;
    Triangular tr1(2,3);
    Triangular tr2;
    tr2.copy(tr1);
    cout << tr2.length() << endl;

    return 0 ;
} 