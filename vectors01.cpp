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
  for(auto it=b.begin();it!=b.endl;it++){
    cout<<(*it)<<endl;
  }
  return 0;
}
