
#ifndef SETTINGUPGOOGLETEST_CLASSNAME_H
#define SETTINGUPGOOGLETEST_CLASSNAME_H
#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <optional>
#include <algorithm>
#include <any>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <memory>
using namespace std;

struct Person
{
    string surname;
    string name;
    optional<string> patronymic = nullopt;
public:
    Person (string s, string n, string p) : surname(s), name(n),  patronymic(p) {};
    Person (string s, string n) : surname(s), name(n) {};

    friend ostream& operator<< (ostream& out, const Person& person){
        out << person.surname << " " << person.name;
        if (person.patronymic.has_value()) out << " " << person.patronymic.value();
        return out;
    }

    friend bool operator< (const Person& person1, const Person& person2){
        return tie (person1.surname, person1.name, person1.patronymic) < tie (person2.surname, person2.name, person2.patronymic);
    }

    friend bool operator== (const Person& person1, const Person& person2){
        return tie (person1.surname, person1.name, person1.patronymic) == tie (person2.surname, person2.name, person2.patronymic);
    }
};

struct PhoneNumber
{
    int country_code;
    int city_code;
    int number;
    optional<int> extension_number = nullopt;
public:
    PhoneNumber (string phone_number) {
        stringstream myString;
        int insert_number;
        myString << phone_number;
        myString >> insert_number;
        if (!myString.fail())
        {
            country_code = insert_number;
        }
        myString >> insert_number;
        if (!myString.fail())
        {
            city_code = insert_number;
        }
        myString >> insert_number;
        if (!myString.fail())
        {
            number = insert_number;
        }
        myString >> insert_number;
        if (!myString.fail())
        {
            extension_number = insert_number;
        }
    }
    PhoneNumber () {}
    PhoneNumber (int country_c, int city_c, string num, optional<int> extension_num){
        country_code = country_c;
        city_code = city_c;
        stringstream myString;
        int insert_number;
        myString << num;
        myString >> insert_number;
        number = insert_number;
        extension_number = extension_num;
    }

    friend ostream& operator<< (ostream& out, const PhoneNumber& phonenumber){
        out << "+" << phonenumber.country_code << "(" << phonenumber.city_code << ")" << phonenumber.number;
        if (phonenumber.extension_number.has_value()) out << " " << phonenumber.extension_number.value();
        return out;
    }
    friend bool operator< (const PhoneNumber& phonenumber1, const PhoneNumber& phonenumber2){
        return tie (phonenumber1.country_code, phonenumber1.city_code, phonenumber1.number, phonenumber1.extension_number)
               < tie (phonenumber2.country_code, phonenumber2.city_code, phonenumber2.number, phonenumber2.extension_number);
    }
    friend bool operator== (const PhoneNumber& phonenumber1, const PhoneNumber& phonenumber2){
        return tie (phonenumber1.country_code, phonenumber1.city_code, phonenumber1.number, phonenumber1.extension_number)
               == tie (phonenumber2.country_code, phonenumber2.city_code, phonenumber2.number, phonenumber2.extension_number);
    }
};

class PhoneBook
{
    vector<pair<Person, PhoneNumber>> m_phone_book;
public:
    PhoneBook (ifstream  &date) {
        string surname;
        string name;
        string patronymic;
        string number;
        Person *p;
        PhoneNumber *ph;
        while (!date.eof())
        {
            date >> surname;
            date >> name;
            date >> patronymic;
            p = new Person(surname, name, patronymic);
            getline(date, number);
            ph = new PhoneNumber (number);
            pair<Person, PhoneNumber> pair (*p, *ph);
            m_phone_book.push_back(pair);
            delete p;
            delete ph;
        }
    }
    friend ostream& operator<< (ostream& out, const PhoneBook& phone_book){
        for (auto n : phone_book.m_phone_book) {
            pair<Person, PhoneNumber> pair = n;
            out<< pair.first << " " << pair.second << endl;
        }
        return out;
    }
    void SortByName ()
    {
        sort(m_phone_book.begin(), m_phone_book.end(), [](pair<Person, PhoneNumber> pair1, pair<Person, PhoneNumber> pair2)
        {return pair1.first < pair2.first; } );
    }
    void SortByPhone ()
    {
        sort(m_phone_book.begin(), m_phone_book.end(), [](pair<Person, PhoneNumber> pair1, pair<Person, PhoneNumber> pair2)
        {return pair1.second < pair2.second; } );
    }

    tuple<string, PhoneNumber> GetPhoneNumber (string surname)
    {
        int sum = 0;
        string answer;
        PhoneNumber phone_number;
        for (auto n : m_phone_book)
        {
            if (n.first.surname == surname)
            {
                sum++;
                phone_number = n.second;
            }
        }
        if (sum == 1)
        {
            tuple<string, PhoneNumber> tiple1 (answer, phone_number);
            return tiple1;
        } else if (sum > 1)
        {
            answer = "found more than 1";
            tuple<string, PhoneNumber> tiple1 (answer, phone_number);
            return tiple1;
        } else
        {
            answer = "not found";
            tuple<string, PhoneNumber> tiple1 (answer, phone_number);
            return tiple1;
        }
    }
    void ChangePhoneNumber (Person person, PhoneNumber phone_number)
    {
        for (auto &n : m_phone_book)
        {
            if (n.first == person)
                n.second = phone_number;
        }
    }
    vector<pair<Person, PhoneNumber>> GetPhoneBook(){
        return m_phone_book;
    }
    ~PhoneBook () {}
};




#endif //SETTINGUPGOOGLETEST_CLASSNAME_H
