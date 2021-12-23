#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>
#include <vector>
#include <future>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

mutex m;
mutex m1;
mutex m2;
mutex m3;

template <class T>
class pcout
{
public:
    pcout (T value) {
    lock_guard lg(m);
    cout << "start thread " << value << endl;
    this_thread::sleep_for(1s);
    cout << "stop thread " << value << endl;
    }
~pcout () {}
};

void doSomething(int value) {
pcout p(value);
}

unsigned int primeNumber (unsigned int index)
{
if (index == 1) {
    cout<<endl<<"Result: ";
    return 1;
}
if (index == 2) {
    cout<<endl<<"Result: ";
    return 2;
}
vector <unsigned int> prime_numbers {2, 3};
int number = 4;
bool is_prime = true;
while (prime_numbers.size() != index)
{
        for(unsigned int i=0; i <= sqrt(number); i++){
        if (number%prime_numbers[i] == 0)
        {
            is_prime = false;
            break;
        }
        }
      if (is_prime){
      prime_numbers.push_back(number);
      cout<<*(prime_numbers.end() - 1)<<" ";
      }
      number++;
      is_prime = true;
}
cout<<endl<<"Result: ";
return *(prime_numbers.end() - 1);
}

void printVector (vector<int>& v)
{
    lock_guard lg(m3);
    cout<<"Vector:"<<endl;
    for(auto x : v)
        cout<<x<<" ";
    cout<<endl;
}

void add (vector<int>& v)
{
while (v.size() != 0)
{
m1.lock();
v.push_back(rand());
printVector(v);
m1.unlock();
this_thread::sleep_for(1000ms);
}
cout<<"Vector is empty";
}

void del (vector<int>& v)
{
while (v.size() > 0) {
m2.lock();
v.erase(max_element(v.begin(), v.end()));
if (v.size() != 0)
printVector(v);
m2.unlock();
this_thread::sleep_for(500ms);
}
}

int getNumber ()
{
stringstream myString;
string input;
int number;
string other;

while (true)
{
  cout<<"Enter the index: ";
  getline (cin, input);
  myString << input;
  myString >> number;

  if (!myString.fail() && number > 0)
  {
      myString >> other;
      if (myString.fail())
      {
      return number;
      }
  }
 else {
     cout << "That input is invalid. Please try again!"<<endl;
     myString.str("");
     myString.clear();
      }
}
}

int main()
{
    cout<<"Task 1:"<<endl;
   	thread th1(doSomething, 1);
   	thread th2(doSomething, 2);
   	thread th3(doSomething, 3);
   	th1.join();
   	th2.join();
   	th3.join();
   	cout<<endl;
   	cout<<"Task 2:"<<endl;
   	int x = 0;
   	 x = getNumber();
   	auto p_Number(async(launch::async, primeNumber, x));
   	cout<<p_Number.get()<<endl;
    cout<<endl;
   	cout<<"Task 3:"<<endl;
    vector<int> v {1, 4, 7, 33, 5, 7};
    printVector(v);
    thread owner(add, ref(v));
    thread thief(del, ref(v));
    owner.join();
    thief.join();
    return 0;
}
