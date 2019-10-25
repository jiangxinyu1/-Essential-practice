#include <iostream>
#include <vector>
#include <iterator>
#include <list>

using namespace std;

template <typename T> 
 T  get_max(T a, T b);

template <typename T>
T get_max(const vector<T> &v);

template <typename T>
T get_max(const T *arr, int szie);
