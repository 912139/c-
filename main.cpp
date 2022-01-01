#include <iostream>
#include "students.pb.h"
#include <fstream>
#include <optional>
#include <sstream>
using namespace std;

    class FullName {
        string m_name;
        string m_surname;
        optional<string> m_patronymic = nullopt;
    public:
        FullName(string n, string s, string p) : m_surname(n), m_name(s), m_patronymic(p) {};

        FullName(string n, string s) : m_surname(n), m_name(s) {};

        ~FullName() {}

        friend class StudentsGroup;
    };

    class IRepository {
        virtual void Open() = 0; // бинарная десериализация в файл
        virtual void Save() = 0; // бинарная сериализация в файл
    };

    class IMethods {
        virtual double GetAverageScore(const FullName &name) = 0;

        virtual string GetAllInfo(const FullName &name) = 0;

        virtual string GetAllInfo() = 0;
    };

    class StudentsGroup : public IRepository, public IMethods {
        Student::StudentsGroup studentsGroup;
    public:
        StudentsGroup() {}
        ~StudentsGroup() {}

        void Open() {
            ofstream out("C://Users//x912x//CLionProjects//test_protobuf//studentsgroup.bin", ios_base::binary);
            studentsGroup.SerializeToOstream(&out);
        }

        void Save() {
            ifstream in("C://Users//x912x//CLionProjects//test_protobuf//studentsgroup.bin", ios_base::binary);
            if (studentsGroup.ParseFromIstream(&in)) {
                cout << "ok" << endl;
            } else {
                cout << "Error!" << endl;
            }
        }

        void addStudent(const FullName &name, vector<int32_t> &scores) {
            Student::Student *student = studentsGroup.add_students();
            Student::FullName *newstudent = student->mutable_fullname();
            newstudent->set_name(name.m_name);
            newstudent->set_surname(name.m_surname);
            if (name.m_patronymic) {
                newstudent->set_patronymic(name.m_patronymic.value());
            }
            double average_score = 0;
            for (int i = 0; i < scores.size(); i++) {
                student->add_scores(scores[i]);
                average_score += scores[i];
            }
            average_score = average_score / (scores.size());
            student->set_average_score(average_score);
        }

        double GetAverageScore(const FullName &name) {
            for (int i = 0; i < studentsGroup.students_size(); i++) {
                const Student::Student &person = studentsGroup.students(i);
                if (person.fullname().name() == name.m_name && person.fullname().surname() == name.m_surname &&
                    person.fullname().patronymic() == name.m_patronymic.value())
                    return person.average_score();
            }
            return 0;
        }

        string getStudent(const Student::Student &person) {
            stringstream myString;
            string out;
            out = person.fullname().surname() + " " + person.fullname().name();
            out += " " + person.fullname().patronymic();
            out += "\nScores: ";
            for (int j = 0; j < person.scores_size(); j++) {
                myString << person.scores(j);
                out += myString.str() + " ";
                myString.str("");
            }
            myString << person.average_score();
            out += "\nAverage_score: " + myString.str();
            myString.str("");
            return out;
        }


        string GetAllInfo(const FullName &name) {
            string result;
            for (int i = 0; i < studentsGroup.students_size(); i++) {
                if (studentsGroup.students(i).fullname().surname() == name.m_surname && studentsGroup.students(i).fullname().name() == name.m_name &&
                        studentsGroup.students(i).fullname().patronymic() == name.m_patronymic.value()) {
                    result = result + getStudent(studentsGroup.students(i));
                }
            }
            return result;
        }

        string GetAllInfo() {
            string result;
            for (int i = 0; i < studentsGroup.students_size(); i++) {
                result = result + getStudent(studentsGroup.students(i)) + "\n";
            }
            return result;
        }

    };

int main() {
   FullName student1 ("Knyazev", "Alexey", "Vladimirovich");
   vector <int32_t> scores_student1 {5, 5, 5, 4 ,5};
   FullName student2 ("Ivanov", "Semyon", "Vladimirovich");
   vector <int32_t> scores_student2 {4, 3, 5, 4 ,5};
   StudentsGroup sGroup1;
   sGroup1.addStudent(student1, scores_student1);
   sGroup1.addStudent(student2, scores_student2);
   cout<<"Test GetAverageScore(const FullName& student2): "<<sGroup1.GetAverageScore(student2)<<endl;
   cout<<"Test GetAllInfo(const FullName& student2): "<<endl<<sGroup1.GetAllInfo(student2)<<endl;
   cout<<"Test GetAllInfo(): "<<endl<<sGroup1.GetAllInfo();
   cout<<"Test Open(): "<<endl;
   sGroup1.Open();
   StudentsGroup sGroup2;
    cout<<"Test Save(): "<<endl;
   sGroup2.Save();
    cout<<"Test GetAverageScore(const FullName& student2): "<<sGroup2.GetAverageScore(student2)<<endl;
    cout<<"Test GetAllInfo(const FullName& student2): "<<endl<<sGroup2.GetAllInfo(student2)<<endl;
    cout<<"Test GetAllInfo(): "<<endl<<sGroup2.GetAllInfo();
   google::protobuf::ShutdownProtobufLibrary();
    return 0;
}