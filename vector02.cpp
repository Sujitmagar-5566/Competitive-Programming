#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> d{10,20,30,40,50};
  //push back O(1) for most of the time
  d.push_back(60);
  for(auto x:d){
    cout<<x<<endl;
  }
  //pop back / removes the last element O(1)
  d.pop_back();
  for(auto x:d){
    cout<<x<<endl;
  }
  //insert some elements in middle O(N)
  d.insert(d.begin()+3,4,100);
  for(auto x:d){
    cout<<x<<endl;
  }
  //erase some element in the middle
  d.erase(d.begin()+3);
  d.erase(d.begin()+3,d.begin()+5);
  for(auto x:d){
    cout<<x<<endl;
  } 
  //size
  cout<<d.size()<<endl;
  cout<<d.capacity()<<endl;
  //we avoid the shrink
  d.resize(8); //if the size is increasing then more memory will be allocated 
  cout<<d.capacity<<endl;
  //clear the all elements of vector, it doesnot delete the memory by the array
  d.clear();
  //empty
  if(d.empty()){
    cout<<"This is empty vector";
  }
  d.push_back(10);
  d.push_back(11);
  d.push_back(12);
  cout<<d.front(); //first element
  cout<<d.back(); // last element 
  //reserve
  int n; cin>>n;
  vector<int> v;
  //to avoid doubling we will use reserve function
  v.reserve(1000);
  for(int i=0;i<n;i++){
    int no;
    cin>>no;
    v.push_back(no);
  }
  for(int x:v){
    cout<<x<<" ";
  }
  return 0;
}
