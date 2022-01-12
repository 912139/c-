#include <iostream>
#include "Tests/ClassName.h"
#include <gtest/gtest.h>

int main()
{
    testing::InitGoogleTest();
    cout<<"Task 1:"<<endl;
    Person p("a","a");
    Person p1("a","a");
    cout<<boolalpha<<(p1==p)<<endl;
    cout<<"Task 2:"<<endl;
    PhoneNumber number ("+7 911 1234567 12");
    cout<<number;
    PhoneNumber number1 ("+8 911 1234567 12");
    cout<<boolalpha<<(number<number1)<<endl;
    cout<<"Task 3:"<<endl;
    ifstream file("C:/Users/x912x/CLionProjects/HW_1 Google_Test/PhoneBook.txt"); // ïóòü ê ôàéëó PhoneBook.txt
    PhoneBook book(file);
    file.close();
    cout << book;
    cout << "------SortByName-------" << endl;
    book.SortByName();
    cout << book;
    cout << "------SortByPhone-------" << endl;
    book.SortByPhone();
    cout << book;
    cout << "-----GetPhoneNumber-----" << endl;
    // ëÿìáäà ôóíêöèÿ, êîòîðàÿ ïðèíèìàåò ôàìèëèþ è âûâîäèò íîìåð òåëåôîíà ýòîãî    	÷åëîâåêà, ëèáî ñòðîêó ñ îøèáêîé
    auto print_phone_number = [&book](const string& surname) {
        cout << surname << "\t";
        auto answer = book.GetPhoneNumber(surname);
        if (get<0>(answer).empty())
            cout << get<1>(answer);
        else
            cout << get<0>(answer);
        cout << endl;
    };
    print_phone_number("Ivanov");
    print_phone_number("Petrov");
    cout << "----ChangePhoneNumber----" << endl;
    book.ChangePhoneNumber(Person{ "Kotov", "Vasilii", "Eliseevich" }, PhoneNumber{7, 123, "15344458", nullopt});
    book.ChangePhoneNumber(Person{ "Mironova", "Margarita", "Vladimirovna" }, PhoneNumber{ 16, 465, "9155448", 13 });
    cout << book;
    return RUN_ALL_TESTS();
}
