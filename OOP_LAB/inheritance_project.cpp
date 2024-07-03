#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name, ID;
    int age;
    float CGPA;
    int subject_1, subject_2, subject_3;

    void input() {
        cout << "Enter the name: "; cin >> name;
        cout << "Enter ID: "; cin >> ID;
        cout << "Enter age: "; cin >> age;
        cout << "Enter marks for subject 1: "; cin >> subject_1;
        cout << "Enter marks for subject 2: "; cin >> subject_2;
        cout << "Enter marks for subject 3: "; cin >> subject_3;
        CGPA = (subject_1 + subject_2 + subject_3) / 3.0;
    }
};


class CSE : public Student {
public:
    string student_name, student_ID, Dpt = "CSE";
    float CSE_CGPA = -1;
    int sub1, sub2, sub3, student_age, cse_student;

    void get_student_info() {
        cout << "Enter the number of CSE students: ";
        cin >> cse_student;
        while (cse_student--)
        {
            input();

            if (CGPA > CSE_CGPA) {
                student_name = name;
                student_ID = ID;
                student_age = age;
                CSE_CGPA = CGPA;
                sub1 = subject_1;
                sub2 = subject_2;
                sub3 = subject_3;
            }
        }
        cout << endl << "CSE data stored" << endl <<endl;
    }
    
    void output() {
        cout << endl <<"The information of high CGPA student"<< endl;
        cout << "Name: " << student_name << endl;
        cout << "ID: " << student_ID << endl;
        cout << "Department: " << Dpt << endl;
        cout << "Age: " << student_age << endl;
        cout << "CGPA: " << CSE_CGPA << endl;
        cout << "Marks of subject 1: " << sub1 << endl;
        cout << "Marks of subject 2: " << sub2 << endl;
        cout << "Marks of subject 3: " << sub3 << endl;
    }
};

class EEE : public Student {
public:
    string student_name, student_ID, Dpt = "EEE";
    float EEE_CGPA = -1;
    int sub1, sub2, sub3, student_age, eee_student;

    void get_student_info() {
        cout << "Enter the number of EEE students: ";
        cin >> eee_student;
        while (eee_student--)
        {
            input();

            if (CGPA > EEE_CGPA) {
                student_name = name;
                student_ID = ID;
                student_age = age;
                EEE_CGPA = CGPA;
                sub1 = subject_1;
                sub2 = subject_2;
                sub3 = subject_3;
            }
        }
        cout << endl << "EEE data stored" << endl <<endl;
    }

    void output() {
        cout << endl <<"The information of high CGPA student"<< endl;
        cout << "Name: " << student_name << endl;
        cout << "ID: " << student_ID << endl;
        cout << "Department: " << Dpt << endl;
        cout << "Age: " << student_age << endl;
        cout << "CGPA: " << EEE_CGPA << endl;
        cout << "Marks of subject 1: " << sub1 << endl;
        cout << "Marks of subject 2: " << sub2 << endl;
        cout << "Marks of subject 3: " << sub3 << endl;
    }
};

class CE : public Student {
public:
    string student_name, student_ID, Dpt = "CE";
    float CE_CGPA = -1;
    int sub1, sub2, sub3, student_age, ce_student;

    void get_student_info() {
        cout << "Enter the number of CE students: ";
        cin >> ce_student;
        while (ce_student--)
        {
            input();

            if (CGPA > CE_CGPA) {
                student_name = name;
                student_ID = ID;
                student_age = age;
                CE_CGPA = CGPA;
                sub1 = subject_1;
                sub2 = subject_2;
                sub3 = subject_3;
            }
        }
        cout << endl << "CE data stored" << endl <<endl;
    }

    void output() {
        cout << endl <<"The information of high CGPA student"<< endl;
        cout << "Name: " << student_name << endl;
        cout << "ID: " << student_ID << endl;
        cout << "Department: " << Dpt << endl;
        cout << "Age: " << student_age << endl;
        cout << "CGPA: " << CE_CGPA << endl;
        cout << "Marks of subject 1: " << sub1 << endl;
        cout << "Marks of subject 2: " << sub2 << endl;
        cout << "Marks of subject 3: " << sub3 << endl;
    }
};

int main()
{
    CSE cse;
    EEE eee;
    CE ce;

    cse.get_student_info();
    eee.get_student_info();
    ce.get_student_info();

    if (cse.CSE_CGPA > eee.EEE_CGPA && cse.CSE_CGPA > ce.CE_CGPA)
        cse.output();
    else if (eee.EEE_CGPA > cse.CSE_CGPA && eee.EEE_CGPA > ce.CE_CGPA)
        eee.output();
    else
        ce.output();

    return 0;
}
