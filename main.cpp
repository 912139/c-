#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>
#include <numeric>
using namespace std;

void insert_sorted (vector<int> &v, int a)
{
vector<int>::iterator low = lower_bound(v.begin(), v.end(), a);
v.insert(low,a);
}

template <class Container, class T>
void insert_sorted2 (Container &v, T a)
{
typename Container::iterator low = lower_bound(v.begin(), v.end(), a);
v.insert(low,a);   
}

void generate (vector<double> &v)
{
 vector<double>::iterator it = v.begin();   
    for (double i = 0; i < 10 ; i+=0.1)
    {
    *it = i;
    it++;
    }
}

vector<double> digital (vector<double> &v)
    {
        vector<double> v1 (100);
        transform(v.begin(), v.end(), v1.begin(), [](double i){ return static_cast<int>(i);});
        return v1;
    }

template <class T> struct minus_sqrt {
  T operator() (const T& x, const T& y) const {return (x-y)*(x-y);}
  typedef T first_argument_type;
  typedef T second_argument_type;
  typedef T result_type;
};

double error (vector<double> &v1, vector<double> &v2)
{
double s =  inner_product (v1.begin(), v1.end(), v2.begin(), 0.0, plus<double>(), minus_sqrt<double>());
return s;
}

int main()
{
cout<<"Task 1:"<<endl;
 vector<int> vector {1, 2, 5, 10, 11, 14}; 
 insert_sorted2(vector, 7);
 copy(vector.begin(), vector.end(), ostream_iterator<int>{cout, ", "});
 cout<<endl;
 list<int> list1 {1 ,4, 7};
insert_sorted2(list1, 7);
copy(list1.begin(), list1.end(), ostream_iterator<int>{cout, ", "});
cout<<endl;
cout<<"Task 2:"<<endl;
std::vector<double> analog_signal (100, 0);
std::vector<double> digital_signal (100, 0);
generate(analog_signal);
copy(analog_signal.begin(), analog_signal.end(), ostream_iterator<double>{cout, ", "});
cout<<endl;
digital_signal = digital(analog_signal);
copy(digital_signal.begin(), digital_signal.end(), ostream_iterator<double>{cout, ", "});
cout<<endl;
cout<<"Error: "<<error(analog_signal, digital_signal);
}