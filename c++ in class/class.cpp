#include<iostream>
using namespace std;
class student
{
    private:
    string n;
    int maths_marks;
    float physics_marks;
    float percentage;

    public:
    void get(){
        cout<<"Enter your name "<<endl;
        cin>>n;
        cout<<"Enter your maths marks "<<endl;
        cin>>maths_marks;
        cout<<"Enter your physics marks "<<endl;
        cin>>physics_marks;
    }
    void put()
    {
        cout<<"Your details is--"<<endl;
        cout<<"Your name is "<<n<<endl;
        cout<<"Your maths marks is "<<maths_marks<<endl;
        cout<<"Your physics marks is "<<physics_marks<<endl;
        percentage=((maths_marks+physics_marks)*100)/200;
        cout<<"Your Percentage is "<<percentage;
        
    }
};
int main(){
    student stu;
    stu.get();
    stu.put();
    return 0;
}