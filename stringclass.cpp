#include<iostream>
#include<string>
using namespace std;
int main(){
  // string initiallisation 
  string s0;
  string s1("Hello");
  string s2="Hello World";
  string s3(s2);
  string s4=s3;
  char arr[]={'a','b','c','\0'};
  string s5(arr);
  if(s0.empty()){
    cout<<"s0 is an empty string"<<endl;
  }
  //append 
  s0.append("I love C++");
  s0 += " and python";
  //remove 
  cout<<s0.length()<<endl;
  s0.clear();
  cout<<s0.length()<<endl;
  //compare two string
  s0="Apple";
  s1="Mango";
  cout<<s0.compare(s1)<<endl; // returns an integer ==0 equal,>0 or <0
  // overloaded operators (we can compare two strings)
  if( s1>s0 || s1<s0) { 
      cout<<"compared"<<endl;
      }
  // access 
    cout<<s1[0]<<endl;
  //find substring 
  string s="I want to have apple juice";
  cout<<s<<endl;
  int indx=s.find("apple");
  cout<<indx<<endl;
  //remove a word from the string
  string word="apple";
  int len=word.length();
  s.erase(indx,len);
  cout<<s;
  //Iterate over all the characters in the string
  for(int i=0;i<s1.length();i++){
    cout<<s1[i]<<":";
  } //Iterators
  for(auto it = s1.begin(); it!= s1.end();it++){
    cout<<(*it)<<",";
  }
  // mango s1.begin()=m
  return 0;
} 
  
