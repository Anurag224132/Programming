#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    string name;
    string company;
    int salary;
  } emp1, emp2; 

  
  emp1.name = "Anurag";
  emp1.company = "Google";
  emp1.salary = 10000;

  
  emp2.name = "Anurag";
  emp2.company = "microsoft";
  emp2.salary = 15000;

  
  cout << emp1.name << " " << emp1.company << " " << emp1.salary << "\n";
  cout << emp2.name << " " << emp2.company << " " << emp2.salary << "\n";
  return 0;
}


  