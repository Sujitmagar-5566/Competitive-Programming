#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,11,13,36};
    int n=sizeof(arr)/sizeof(int);
    //binarysearch--> binary_search function
    int key; cin>>key;
    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<key<<"is present";
    }
    else {
        cout<<key<<" is not present";
    }
    return 0;
}
