#include<iostream>
#include<list>
using namespace std;
int main(){
  //push_back --> adds form tail
  //push_front --> adds from head
  //pull_back --> removes form tail
  //pull_front --> removes form tail
  //insert
  //erase (idx)
  //remove (occuring element)
  
  //initialisation
  list <int> l;
  list <int> l1{10,20,30,40};
  //different Datatype
  list <string> l2("apple","banana","guava");
  l2.push_back("pineapple");
  //iterate over the list and print all elements
  for(auto i: l2){
    cout<<i<<" ";
  }
  //sort
  l2.sort();
  //reverse
  l2.reverse();
  return 0;
}
