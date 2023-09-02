// standard template library(STL) set of tmeplate classes for implementing commonly used data strucutres & functions.
// 3 major components of STL
// i.containers  ii.iterators  iii.algorithms

// container-> it is used to hold data of the same type.
// eg..vecotr,list,map,set

// iterators-> these are used to iterates/treaverse the container, these are pointer like entities.

// Algorithms-> functions that are used to manipulates the data in the container
// eg.. sort() , min(),   max()   etc

// list is the template class in STL for implementing doubly linked list.

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;
int main()
{
    list<int> l1 = {1, 2, 3, 4};
    auto itr = l1.begin();
    cout << *itr << endl;
    // l1.end() -> iterator pointing to the memory location after 4.
    // l1.rbegin() -> iterator for the first element in reverse iteration.
    // l1.rend()->  iterator for the position after last element in reverse iteration.

    // advance(itr,2);
    // cout<<*itr<<endl;

    // traverse the list using range based loop
    // for(auto num:l1){
    //     cout<<num<<endl;
    // }

    // traversal list using iteratiors
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // reverse traversal
    for (auto itr = l1.rbegin(); itr != l1.rend(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // inserting element using STL
    // list.insert(itr,value)-> insert value before the position of the itr
    // list.insert(itr,count,value)-> insert value count number of times before itr.
    // list.insert(itr,str.itr,end.itr)->insert values from str.itr.........end.itr befor itr




    // l1.insert(itr, 5);
    // for (auto itr = l1.begin(); itr != l1.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }
    // cout << endl;




    // l1.insert(itr,3,5);
    // for(auto itr=l1.begin();itr!=l1.end();itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;


    auto l=l1.begin();
    auto r=l1.end();
    advance(r, 3);
    l1.insert(itr,l,r);
    for(auto itr=l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;



    //              deleting
    // list.erase(itr)=delete the element pointed to by the itr
    // list.erase(str_itr,end_itr)=delete element from [str_itr..........end_itr]


    auto s_itr=l1.begin();
    advance(s_itr,1);

    auto e_itr=l1.end();
    advance(e_itr,4);

    l1.erase(s_itr,e_itr);
    for(auto itr=l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;



    return 0;
}