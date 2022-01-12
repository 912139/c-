
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ClassName.h"

namespace {

    TEST(Person, Constructor) {
        const Person p("Surname", "Name", "Patronymic");
        const string s = "Surname";
        const string s1 = "Name";
        const string s2 = "Patronymic";
        EXPECT_EQ(0, strcmp(p.surname.c_str(), s.c_str()));
        EXPECT_EQ(sizeof(s)/sizeof(p.surname[0]), sizeof(p.surname));
        EXPECT_EQ(0, strcmp(p.name.c_str(), s1.c_str()));
        EXPECT_EQ(sizeof(s1)/sizeof(p.name[0]), sizeof(p.name));
        EXPECT_EQ(0, strcmp(p.patronymic.value().c_str(), s2.c_str()));
        EXPECT_EQ(sizeof(s2)/sizeof(p.patronymic.value()[0]), sizeof(p.patronymic.value()));
    }

    TEST(Person, CopyConstructor){
        const Person p("Surname", "Name", "Patronymic");
        const Person p1 = p;
        EXPECT_EQ(0, strcmp(p.surname.c_str(), p1.surname.c_str()));
        EXPECT_EQ(0, strcmp(p.name.c_str(), p1.name.c_str()));
        EXPECT_EQ(0, strcmp(p.patronymic.value().c_str(), p1.patronymic.value().c_str()));
    }

    TEST(Person, Methods){
        const Person p("Surname", "Name", "Patronymic");
        const Person p1("Sur", "N", "Patron");
        const Person p2("Surname", "Name", "Patronymic");
        //Test <<
        stringstream st;
        st<<p.surname;
        EXPECT_EQ (0, strcmp(p.surname.c_str(), st.str().data()));
        st.str("");
        st<<p.name;
        EXPECT_EQ (0, strcmp(p.name.c_str(), st.str().data()));
        st.str("");
        st<<p.patronymic.value();
        EXPECT_EQ (0, strcmp(p.patronymic.value().c_str(), st.str().data()));
        //Test <
        EXPECT_LT(p1.surname, p.surname);
        EXPECT_LT(p1.name, p.name);
        EXPECT_LT(p1.patronymic.value(), p.patronymic.value());
        EXPECT_STRNE(p1.surname.c_str(), p.surname.c_str());
        EXPECT_STRNE(p1.name.c_str(), p.name.c_str());
        EXPECT_STRNE(p1.patronymic.value().c_str(), p.patronymic.value().c_str());
        //Test ==
        EXPECT_EQ(p.surname, p2.surname);
        EXPECT_EQ(p.name, p2.name);
        EXPECT_EQ(p.patronymic.value(), p2.patronymic.value());
    }

    TEST(PhoneNumber, Constructor_1){
        const PhoneNumber phoneNumber(77, 4521, "8880876", 333);
        EXPECT_EQ(phoneNumber.country_code, 77);
        EXPECT_EQ(phoneNumber.city_code, 4521);
        EXPECT_EQ(phoneNumber.number, 8880876);
        EXPECT_EQ(phoneNumber.extension_number, 333);
    }

    TEST(PhoneNumber, Constructor_2){
        const PhoneNumber phoneNumber("4 940 2556793 -");
        EXPECT_EQ(phoneNumber.country_code, 4);
        EXPECT_EQ(phoneNumber.city_code, 940);
        EXPECT_EQ(phoneNumber.number, 2556793);
        EXPECT_EQ(phoneNumber.extension_number, nullopt);
    }

    TEST(PhoneNumber, CopyConstructor_1){
        const PhoneNumber phoneNumber(77, 4521, "8880876", nullopt);
        const PhoneNumber phoneNumber1 = phoneNumber;
        EXPECT_EQ(phoneNumber1.country_code, 77);
        EXPECT_EQ(phoneNumber1.city_code, 4521);
        EXPECT_EQ(phoneNumber1.number, 8880876);
        EXPECT_EQ(phoneNumber1.extension_number, nullopt);
    }

    TEST(PhoneNumber, CopyConstructor_2){
        const PhoneNumber phoneNumber("4 940 2556793 -");
        const PhoneNumber phoneNumber1 = phoneNumber;
        EXPECT_EQ(phoneNumber1.country_code, 4);
        EXPECT_EQ(phoneNumber1.city_code, 940);
        EXPECT_EQ(phoneNumber1.number, 2556793);
        EXPECT_EQ(phoneNumber1.extension_number, nullopt);
    }

    TEST(PhoneNumber, Methods){
        const PhoneNumber phoneNumber(77, 4521, "8880876", 12);
        const PhoneNumber phoneNumber1(7, 452, "888087", 11);
        const PhoneNumber phoneNumber2(77, 4521, "8880876", 12);
        //Test <<
        int i;
        stringstream st;
        st<<phoneNumber.country_code;
        st>>i;
        EXPECT_EQ (phoneNumber.country_code, i);
        st.str("");
        st.clear();
        st<<phoneNumber.city_code;
        st>>i;
        EXPECT_EQ (phoneNumber.city_code, i);
        st.str("");
        st.clear();
        st<<phoneNumber.number;
        st>>i;
        EXPECT_EQ (phoneNumber.number, i);
        st.str("");
        st.clear();
        st<<phoneNumber.extension_number.value();
        st>>i;
        EXPECT_EQ (phoneNumber.extension_number.value(), i);
        //Test <
        EXPECT_LT(phoneNumber1.country_code, phoneNumber.country_code);
        EXPECT_LT(phoneNumber1.city_code, phoneNumber.city_code);
        EXPECT_LT(phoneNumber1.number, phoneNumber.number);
        EXPECT_LT(phoneNumber1.extension_number, phoneNumber.extension_number);
        //Test ==
        EXPECT_EQ(phoneNumber2.country_code, phoneNumber.country_code);
        EXPECT_EQ(phoneNumber2.city_code, phoneNumber.city_code);
        EXPECT_EQ(phoneNumber2.number, phoneNumber.number);
        EXPECT_EQ(phoneNumber2.extension_number, phoneNumber.extension_number);
    }

    TEST(PhoneBook, Constructor) {
        ifstream file("C:/Users/x912x/CLionProjects/HW_1 Google_Test/PhoneBook.txt"); // ïóòü ê ôàéëó PhoneBook.txt
        PhoneBook book(file);
        file.close();
        ifstream file1("C:/Users/x912x/CLionProjects/HW_1 Google_Test/PhoneBook.txt");
        string comparison_string;
        int i = 0;
        int comparison_int;
        PhoneNumber *ph;
        while (!file1.eof()) {
        file1 >> comparison_string;
        EXPECT_EQ(0, strcmp(book.GetPhoneBook()[i].first.surname.c_str(), comparison_string.c_str()));
        ASSERT_EQ(book.GetPhoneBook()[i].first.surname, comparison_string);
        file1 >> comparison_string;
        EXPECT_EQ(0, strcmp(book.GetPhoneBook()[i].first.name.c_str(), comparison_string.c_str()));
        ASSERT_EQ(book.GetPhoneBook()[i].first.name, comparison_string);
        file1 >> comparison_string;
        EXPECT_EQ(0, strcmp(book.GetPhoneBook()[i].first.patronymic.value().c_str(), comparison_string.c_str()));
        ASSERT_EQ(book.GetPhoneBook()[i].first.patronymic.value(), comparison_string);
        getline(file1, comparison_string);
        ph = new PhoneNumber (comparison_string);
        ASSERT_EQ(book.GetPhoneBook()[i].second.country_code, ph->country_code);
        ASSERT_EQ(book.GetPhoneBook()[i].second.city_code, ph->city_code);
        ASSERT_EQ(book.GetPhoneBook()[i].second.number, ph->number);
        ASSERT_EQ(book.GetPhoneBook()[i].second.extension_number, ph->extension_number);
        delete ph;
        i++;
        }
        file1.close();
    }

    TEST(PhoneBook, GetPhoneBook) {
        ifstream file("C:/Users/x912x/CLionProjects/HW_1 Google_Test/PhoneBook.txt"); // ïóòü ê ôàéëó PhoneBook.txt
        PhoneBook book(file);
        file.close();
        vector<pair<Person, PhoneNumber>> test_book = book.GetPhoneBook();
        ASSERT_EQ(test_book[2].first.surname, "Dubinin");
        ASSERT_EQ(test_book[2].first.name, "Aleksei");
        ASSERT_EQ(test_book[2].first.patronymic.value(), "Mikhailovich");
        ASSERT_EQ(test_book[2].second.country_code, 7);
        ASSERT_EQ(test_book[2].second.city_code, 473);
        ASSERT_EQ(test_book[2].second.number, 7449054);
        ASSERT_EQ(test_book[2].second.extension_number, nullopt);
    }

    TEST(PhoneBook, Output) {
        ifstream file("C:/Users/x912x/CLionProjects/HW_1 Google_Test/PhoneBook.txt"); // ïóòü ê ôàéëó PhoneBook.txt
        PhoneBook book(file);
        file.close();
        stringstream st;
        int number;
        st<<book.GetPhoneBook()[3].first.surname;
        ASSERT_EQ(st.str(), "Solovev");
        st.str("");
        st.clear();
        st<<book.GetPhoneBook()[3].first.name;
        ASSERT_EQ(st.str(), "Artur");
        st.str("");
        st.clear();
        st<<book.GetPhoneBook()[3].first.patronymic.value().c_str();
        ASSERT_EQ(st.str(), "Mikhailovich");
        st.str("");
        st.clear();
        st<<book.GetPhoneBook()[3].second.country_code;
        st>>number;
        ASSERT_EQ(number, 4);
        st.str("");
        st.clear();
        st<<book.GetPhoneBook()[3].second.city_code;
        st>>number;
        EXPECT_EQ(number, 940);
        st.str("");
        st.clear();
        st<<book.GetPhoneBook()[3].second.number;
        st>>number;
        ASSERT_EQ(number, 2556793);
        ASSERT_EQ(book.GetPhoneBook()[3].second.extension_number, nullopt);
        //Test SortByName
    }

    TEST(PhoneBook, SortByName){
        ifstream file("C:/Users/x912x/CLionProjects/HW_1 Google_Test/PhoneBook.txt"); // ïóòü ê ôàéëó PhoneBook.txt
        PhoneBook book(file);
        file.close();
        book.SortByName();
        ASSERT_EQ(book.GetPhoneBook()[3].first.surname, "Egorov");
        ASSERT_EQ(book.GetPhoneBook()[3].first.name, "Savelii");
        ASSERT_EQ(book.GetPhoneBook()[3].first.patronymic.value(), "Stanislavovich");
        ASSERT_EQ(book.GetPhoneBook()[3].second.country_code, 77);
        ASSERT_EQ(book.GetPhoneBook()[3].second.city_code, 4521);
        ASSERT_EQ(book.GetPhoneBook()[3].second.number, 8880876);
        ASSERT_EQ(book.GetPhoneBook()[3].second.extension_number, 99);
    }

    TEST(PhoneBook, SortByPhone){
        ifstream file("C:/Users/x912x/CLionProjects/HW_1 Google_Test/PhoneBook.txt"); // ïóòü ê ôàéëó PhoneBook.txt
        PhoneBook book(file);
        file.close();
        book.SortByPhone();
        ASSERT_EQ(book.GetPhoneBook()[3].first.surname, "Davydov");
        ASSERT_EQ(book.GetPhoneBook()[3].first.name, "Filipp");
        ASSERT_EQ(book.GetPhoneBook()[3].first.patronymic.value(), "Grigorevich");
        ASSERT_EQ(book.GetPhoneBook()[3].second.country_code, 7);
        ASSERT_EQ(book.GetPhoneBook()[3].second.city_code, 247);
        ASSERT_EQ(book.GetPhoneBook()[3].second.number, 1377660);
        ASSERT_EQ(book.GetPhoneBook()[3].second.extension_number, nullopt);
    }

    TEST(PhoneBook, GetPhoneNumber){
        ifstream file("C:/Users/x912x/CLionProjects/HW_1 Google_Test/PhoneBook.txt"); // ïóòü ê ôàéëó PhoneBook.txt
        PhoneBook book(file);
        file.close();
        string s;
        PhoneNumber ph;
        tie(s,ph) = book.GetPhoneNumber("Titova");
        ASSERT_EQ(s, ""); //the string should be empty if only one person is found
        ASSERT_EQ(ph.country_code, 93);
        ASSERT_EQ(ph.city_code, 163);
        ASSERT_EQ(ph.number, 1992257);
        ASSERT_EQ(ph.extension_number, 9);
    }

    TEST(PhoneBook, ChangePhoneNumber){
        ifstream file("C:/Users/x912x/CLionProjects/HW_1 Google_Test/PhoneBook.txt"); // ïóòü ê ôàéëó PhoneBook.txt
        PhoneBook book(file);
        file.close();
        book.ChangePhoneNumber(Person{ "Makeev", "Marat", "-" },PhoneNumber{77, 4521, "8880876", 999});
        ASSERT_EQ(book.GetPhoneBook()[5].first.surname, "Makeev");
        ASSERT_EQ(book.GetPhoneBook()[5].first.name, "Marat");
        ASSERT_EQ(book.GetPhoneBook()[5].first.patronymic, "-");
        ASSERT_EQ(book.GetPhoneBook()[5].second.country_code, 77);
        ASSERT_EQ(book.GetPhoneBook()[5].second.city_code, 4521);
        ASSERT_EQ(book.GetPhoneBook()[5].second.number, 8880876);
        ASSERT_EQ(book.GetPhoneBook()[5].second.extension_number.value(), 999);
    }
}

