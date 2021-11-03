#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <fstream>
#include "Timer.h"
using namespace std;

template<class T>
void Swap (T &a, T &b)
{
T tmp = move(a);
a = move(b);
b = move(tmp);
}

template<class T>
void SortPointers (vector<T>& vector)
{
sort (vector.begin(), vector.end(), [] (T i, T j) { return (*i<*j); } );
}

void printVector (vector<int*> vector)
{
    for (auto x : vector)
    cout<<*x;
cout<<endl;
}

int main()
{
cout<<"Task 1:"<<endl;
int *i = new int(5);
int *j = new int(7);
cout<<"i = "<<*i<<" j = "<<*j<<endl;
Swap(i,j);
cout<<"i = "<<*i<<" j = "<<*j<<endl;

cout<<"Task 2:"<<endl;
vector<int*>vector;
for (int i = 5; i > 0; --i)
 {
   int *p = new int(i);
   vector.push_back(p);
 }
printVector(vector);
SortPointers(vector);
printVector(vector);

cout<<endl;
cout<<"Task 3:"<<endl<<endl;
    ifstream file("War and peace.txt");
    file.seekg(0, std::ios::end);
    size_t size = file.tellg();
    file.seekg(0);
    string s(size, ' ');
    file.read(&s[0], size);

string symbols = "aeiouyAEIOUY";

Timer timer("Count_if/Find");
auto count = count_if(s.begin(), s.end(),
[symbols] (char c)
{auto found = find (symbols.begin(), symbols.end(), c);
if (found != symbols.end())
      return true;
 else
 return false;});
 timer.print();
cout<<"Number of letters: "<<count<<endl<<endl;

Timer timer1("Count_if/For");
count = count_if(s.begin(), s.end(),
[symbols] (char c)
{for (auto x : symbols)
if (x == c)
return true;
return false;});
timer1.print();
cout<<"Number of letters: "<<count<<endl<<endl;

count = 0;
Timer timer2("For/Find");
for (auto x : s)
{
auto found = find (symbols.begin(), symbols.end(), x);
if (found != symbols.end())
count++;
}
timer2.print();
cout<<"Number of letters: "<<count<<endl<<endl;

count = 0;
Timer timer3("For/For");
for (auto x : s)
 {
    for (auto y : symbols)
    {
     if(y == x)
     count++;
    }
 }
 timer3.print();
cout<<"Number of letters: "<<count<<endl<<endl;
}
