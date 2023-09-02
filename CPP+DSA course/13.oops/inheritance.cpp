// #include<iostream>
// using namespace std;
// class parent{
//     public:
//     int x;

//     protected:
//     int y;

//     private:
//     int z;
// };
// class child:public parent{
//     //x will remain public
//     // y will remain protected
//     // z will not be accessible
// };

// class child2: private parent{
//     // x will be private
//     // y will be private
//     // z will be inaccessible
// };


// class child3: protected parent{
//     // x will be protected
//     // y will be protected
//     // z will be inaccessible
// };

#include<iostream>
using namespace std;
class parent1{
    public:
    parent1(){
        cout<<"parent1 class"<<endl;
    }
};

class parent2{
    public:
    parent2(){
        cout<<"parent2 class"<<endl;
    }
};


            //single inheritance
class child: public parent1{  
    public:
    child(){
        cout<<"CHild class"<<endl;
    }
};


            //multilevel inheritance
class grandchild: public child{  
    public:
    grandchild(){
        cout<<"GrandChild class"<<endl;
    }
};


            //multiple inheritance
class multiple: public parent1,public parent2{  
    public:
    multiple(){
        cout<<"CHild class"<<endl;
    }
};


            //herarical inheritance
class child5: public parent1{  
    public:
    child5(){
        cout<<"CHild5 class"<<endl;
    }
};

class child6: public parent1{  
    public:
    child6(){
        cout<<"CHild6 class"<<endl;
    }
};


int main(){
    multiple c;
    return 0;
}