#include <iostream>
#include <set>
#include <list>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <tuple>
#include <algorithm>
#include <map>
#include <exception>
#include <vector>
#include <fstream>
#include <iterator>
#include <sstream>
#include <any>

using namespace std;

bool isChar (const any& a)
{
 if (a.type() == typeid(char))
        return true;
 else return false;
}


template <typename IT>
void uniqueWords(IT it, IT end)
{
    set<string> unique_words;
    string s;
    stringstream ss;
    for (; it != end; ++it){
    ss<<*it;
    if (!isChar(*it))
    ss<<" ";
    }
    while(ss >> s){
        unique_words.insert(s);
    }
   cout<<"Output: ";
   copy(unique_words.begin(), unique_words.end(), ostream_iterator<string>(cout, " "));
	}

 template <typename IT>
 void evaluate_rpn(IT it, IT end)
{
    for (; it != end; ++it) {
    if (*it == ".")
    cout<<"ok";
}
}

 template <typename IT>
 void sentences(IT it, IT end)
{
    multimap<int, vector<string>> result;
    vector<string> words;
    for (; it != end; ++it) {
    words.push_back(*it);
    string c = *it;
    if(*(c.end() - 1) == '.')
    {
    result.insert({words.size(), words});
    words.clear();
    }
}
    for_each(result.begin(), result.end(),
             [](pair<int, vector<string>> item){
        cout <<"Number of words: "<<item.first << endl;
        cout<<"Words: ";
        copy(item.second.begin(), item.second.end(), std::ostream_iterator<string>(std::cout, " "));
        cout<<endl;
    });
}

int main()
{
cout<<"Task 1:"<<endl;
string input {"i i main program main"};
cout<<"Input to test iterator 1: "<<input<<endl;
uniqueWords(input.begin(), input.end());
cout<<endl;
cout<<"Input to test iterator 2: ";
vector<string> v {"i", "i", "main", "program", "main"};
copy(v.begin(), v.end(), ostream_iterator<string>(cout, " "));
cout<<endl;
uniqueWords(v.begin(), v.end());
cout<<endl;
cout<<"Input to test iterator 3: ";
list<string>list1 {"i", "i", "main", "program", "main"};
copy(list1.begin(), list1.end(), ostream_iterator<string>(cout, " "));
cout<<endl;
uniqueWords(list1.begin(), list1.end());
cout<<endl;
cout<<"Task 2:"<<endl;
	try {
		sentences(istream_iterator<string>{cin}, {});
	}
	catch (const exception& ex) {
		cout << ex.what() << '\n';
	}
}
