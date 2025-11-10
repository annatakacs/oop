#include <iostream>
using namespace std;

//everything in class is private bz default
// 3 access-modifiers in cpp: private, public, protected
// private: not accessible from the outside
// public: accessible by anyone
// protected: in between private and public, properties are available in derived classes (child classes)

//class Employee {
//public:
//    string Name;
//    string Company;
//    int Age;
// 
//    void IntroduceYourself() {
//        cout << "Name: " << Name << endl;
//        cout << "Company: " << Company << endl;
//        cout << "Age: " << Age << endl;
//
//    };
//    Employee(string name, string company, int age) {
//        Name = name;
//        Company = company;
//        Age = age;
//    };
//};

//Encapsulation: bundling, or grouping together data and functions that belong together. Goal is to prevent direct access to the data of the class
   //public functions can access the data: getters and setters

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
protected:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) { //setter
        Name = name;
    };
    string getName() { //getter
        return Name;
    };

    void setCompany(string company) { //setter
        Company = company;
    };
    string getCompany() { //getter
        return Company;
    };

    void setAge(int age) { //setter
        if (age > 80) 
            cout << "Wrong age" << endl;
        else 
            Age = age;
    };
    int getAge() { //getter
        return Age;
    };

    void IntroduceYourself() {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;

    };
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    };
    void AskForPromotion() {
        if (Age > 30)
            cout << Name << " got promoted" << endl;
        else
            cout << "Sorry, no promotion for you!" << endl;
    };
    virtual void Work() {
        cout << Name << " is checking email, taks backlog, and performing tasks ..." << endl;
    };
};

class Developer: public Employee { //Inheritance made public
public:
    string FavoriteProgrammingLanguage;
    Developer(string name, string company, int age, string lang)
        :Employee(name, company, age) {
        FavoriteProgrammingLanguage = lang;
    }
    void FixBugs() {
        cout << Name << " is fixing bugs using " << FavoriteProgrammingLanguage << endl;
    }
    void Work() {
        cout << Name << " is writing code " << endl;
    }
};

// Abstraction: hiding complex things
class Teacher: public Employee {
public:
    string Subject;
    void PrepareLesson() {
        cout << Name << " is preparing for " << Subject << " lesson." << endl;
    };
    Teacher(string name, string company, int age, string subject) 
        :Employee(name, company, age) {
        Subject = subject;
    };

    void Work() {
        cout << Name << " is teaching a class " << endl;
    }
};

//Polymorphism: the most common use is when a parent class reference is used to refer to a child class object

int main()
{
    Employee anna = Employee("Anna", "RBI", 29);
    Employee bela = Employee("Bela", "Meki", 59);
    
    Developer dev1 = Developer("Ned", "Amazon", 35, "go");
    //dev1.FixBugs();
    //dev1.AskForPromotion();

    Teacher t = Teacher("Sara", "Greenfox", 40, "Literature");
    //t.PrepareLesson();
    //t.AskForPromotion();

    //dev1.Work();
    //t.Work();
    //anna.Work();

    //Polymorphism: the most common use is when a parent class reference is used to refer to a child class object

    Employee* e1 = &dev1;
    Employee* e2 = &t;

    e1->Work();
    e2->Work();
}

