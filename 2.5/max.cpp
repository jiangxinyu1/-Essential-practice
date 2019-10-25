#include "max.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <list>
/*  
    两个变量比较大小（只要两个变量定义了>,<）
 */
template <typename T>
T get_max(T a, T b)
{
    T max_elem;
    if(a >= b )
    {
        max_elem = a;
    }
    else
    {
        max_elem = b;
    }
    return max_elem;
}
/*  
    vector
*/
template <typename T>
T  get_max(const vector<T> &v)
{
    typename vector<T>::const_iterator iter = v.begin();
    typename vector<T>::const_iterator end_it = v.end();

    T max = v[0];
    for( ; iter != end_it; ++iter)
    {
        if(*iter >= max)
        {
            max = *iter;
        }
    }
    return max;
}
/*  
    Aarry
*/
// template <typename T>
// T get_max( const T *arr ,int nsize)
// {
//     T max = arr[0];
//     list<T> list_arr ( arr, arr +nsize );

//     typename list <T>::const_iterator it1 ;

//     for (it1 = list_arr.begin(); it1 != list_arr.end(); ++it1)
//     {
//         if ( *it1>=  max)
//         {
//             max = *it1;
//         }
//     }
//     return max;
// }

/*  
    list 
*/
// template <typename T>
// T get_max(const T *arr, int nsize)
// {
//     T max = arr[0];
//     list<T> list_arr(arr, arr + nsize);
//     typename list<T>::const_iterator it1;
//     typename list<T>::const_iterator it2;
//     it1 = list_arr.begin();
//     it2 = list_arr.end();

//     for ( ; it1 != it2; ++it1)
//     {
//         cout << *it1 << '\t';
//         if (*it1 >= max)
//         {
//             max = *it1;
//         }
//     }
//     return max;
// }
/*  

*/
template <typename T>
T get_max(const T *arr, int nsize)
{
    T max = arr[0];
    list<T> list_arr(arr, arr + nsize);
    
    typename list<T>::const_iterator it1 = list_arr.begin();
    typename list<T>::const_iterator it2 = list_arr.end();

    for (; it1 != it2; ++it1)
    {
        if (*it1 >= max)
        {
            max = *it1;
        }
    }
    return max;
}