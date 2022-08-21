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
    // get the index of the element 
    // lower_bound(s,e,key) and upper_bound(s,e,key) 
    // lower bound function returns location of first element >= key
    // upper bound function returns location of first element strictly > key
    auto lb= lower_bound(arr,arr+n,key);
    cout<<(lb-arr)<<endl;
    auto ub= upper_bound(arr,arr+n,key);
    cout<<(ub-arr)<<endl;
    // to find frequency of repeating element
    cout<<"Occ freq of"<<key<<"is"<<(ub-lb)<<endl;
    return 0;
}
