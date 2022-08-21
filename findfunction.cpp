#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,11,13,36};
    int n=sizeof(arr)/sizeof(int);
    //search--> find function
    int key; cin>>key;
    auto it= find(arr,arr+n,key);
    int index=it-arr;
    if(index==n){
        cout<<key<<"is not present";
    }
    else {
        cout<<key<<" is prensent at index "<<index;
    }
    return 0;
}
