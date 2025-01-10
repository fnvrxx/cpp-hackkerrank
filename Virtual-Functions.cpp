#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Create class Person,Professor, and Student
Prof and Student inherit from class Person

atribut class prof : int publications and int cur_id; getdata()->input from user(name,age,publications) and putdata()->print(name,age,publications,and cur_id of the prof)

atribut class student: int marks[6] and int cur_id; getdata()->(name,age,marks of student in 6 subject) and putdata()->print(name,age,sum of marks,cur_id of student)

*/

class Person{
    public:
    string name;
    int age;
    virtual void getdata(){
        cin >> this->name >> this->age;
    }
    virtual void putdata(){
        cout << this->name << this->age;
    }
};

class Professor: public Person{
    public:
    static int id;
    int cur_id;
    int publications;
    Professor(){
        this->cur_id = ++id;
    }
    void getdata(){
        cin >> this->name >> this->age >> this->publications;
    }
    void putdata(){
        cout << this->name << " " << this->age <<" " << this->publications << " " << this->cur_id << endl;
    }
};
int Professor::id = 0;

#define NUM_OF_MARKS 6
class Student: public Person{
    public:
    static int id;
    int cur_id;
    Student(){
        this->cur_id = ++id;
    }
    int marks[NUM_OF_MARKS];
    void getdata(){
        cin >> this->name >> this->age;
        for(int i=0; i< NUM_OF_MARKS; i++){
            cin >> marks[i];
        }
    }
    void putdata(){
        int mark_sum =0;
        for(int i=0; i < NUM_OF_MARKS;i++){
            mark_sum += marks[i];
        }
        cout << this->name << " " << this->age << " " << mark_sum << " " << this->cur_id << endl; 
    }
};
int Student::id = 0;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,val;
    cin >> n;
    Person *per[n];
    
    for(int i=0;i < n;i++){
        cin >> val;
        if(val == 1){
            per[i] = new Professor;
        }
        else{
            per[i] = new Student;
        }
        per[i]->getdata();
    }
    for(int i=0;i<n;i++){
        per[i]->putdata();
    }
    return 0;
}
