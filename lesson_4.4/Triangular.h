#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Triangular
{
private:
    string _name;
    int _length;
    int _beg_pos;
    int _next;
    static vector<int> _elems;
public:
    Triangular( );
    Triangular(int len, int beg_pos) ;
    ~Triangular();
    
    int length() const { return _length; }

    int beg_pos() const { return _beg_pos; }

    string  name () const {return _name; }

    int elem( int pos ) const ;
    
    bool next(int &val);

    void next_reset() { _next = _beg_pos -1; }

    Triangular& copy ( const Triangular& rhs );
};

Triangular::Triangular( )
{
    _length = 1;
    _beg_pos = 1;
    _next = 0 ;
}
    //　成员初始化列表　，　umember object
Triangular::Triangular(int len , int beg_pos)
    :_name("Triangular")
{
    _length = len > 0 ? len : 1;
    _beg_pos = beg_pos > 0 ? beg_pos : 1;
    _next = _beg_pos - 1;
}

Triangular::~Triangular()
{
}
