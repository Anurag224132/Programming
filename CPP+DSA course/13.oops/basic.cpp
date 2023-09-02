#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    char name;
    int year;

    int getroll(){
        return roll;
    }

    char getname(){
        return name;
    }

    int getyear(){
        return year;
    }

    void setroll(int n){
        roll=n;
    }

    void setname(char str){
        name=str;
    }

    void setyear(int y){
        year=y;
    }
};
int main(){
    student a;
    a.setroll(12);
    cout<<"roll of the a is "<<a.getroll();
}

