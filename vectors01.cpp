#include<iostream>
#include<vector>
using namespace std;
int main(){
  // initialisation
  vector<int> a;
  vector<int> b(5,10); //five int with value 10 - init a vector of zeros (n,0)
  vector<int> c(b.begin(),b.end());
  vector<int> d{1,2,3,10,14};
  
  //look at how we can iterate over the vector
  for(int i=0;i<c.size();i++){
    cout<<c[i]<<endl;
  }
  for(auto it=b.begin();it!=b.end();it++){
    cout<<(*it)<<endl;
  }
  //for each loop
  for(auto x:d){
    cout<<x<<",";
  }
  //discuss more functions
  vector<int> v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int no;
    cin>>no;
    v.push_back(no);
    for(auto x:v){
      cout<<x<<",";
    }
    
    //understand at memory level, what are the differences in the loop
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; //size of underlying array --> 8
    cout<<v.max_size()<<endl; //maximum no of elements a vector can hold in the worst case according to avbl memory
    
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl; //size of underlying array --> 5
    cout<<d.max_size()<<endl; //maximum no of elements a vector can hold in the worst case according to avbl memory
  return 0;
}
