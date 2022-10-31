//
// Created by abel_ on 31-10-2022.
//
#include<iostream>
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee{
private:
    string Company;
    int Age;
protected:
    string Name;

public:
    void setName(string name){
        name = Name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        company = Company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        age = Age;
    }
    int getAge(){
        return Age;
    }
    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion(){
        if(Age > 30){
            std::cout << Name << " got promoted!" << std::endl;
        }else{
            std::cout << Name << " sorry no promotion for you!" << std::endl;
        }
    }
    virtual void Work(){
        std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
    }
};

class Developer:public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug(){
        std::cout <<Name<< " fixed bug using " << FavProgrammingLanguage << std::endl;
    }

};

class Teacher:public Employee{
public:
    string Subject;
    void PrepareLesson(){
        std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
    }

    Teacher(string name, string company, int age, string subject)
    :Employee(name,company,age){
        Subject = subject;
    }
};

int main(){
    Employee employee1 = Employee("abel", "Quantum Dots",21);
    Teacher teacher1 = Teacher("abel", "Quantum Dots",21,"Maths");
    employee1.IntroduceYourself();
    employee1.AskForPromotion();

    Developer d = Developer("abel", "Quantum Dots",21,"C++");
    d.FixBug();
    d.AskForPromotion();

    teacher1.PrepareLesson();
    teacher1.AskForPromotion();

    return 0;
}