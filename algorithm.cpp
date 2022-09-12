#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    
    cout<<"Finding 6:"<<binary_search(v.begin(), v.end(),6)<<endl;
    
    cout<<"lower bound:"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound:"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    
    int a=3,b=5;
    cout<<max(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    
    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    
    rotate(v.begin(),v.begin()+1,v.end());
    //start,middle,end: rotate only 1 element;
    for(int i:v){cout<<i <<" ";}
    cout<<endl;
    
    sort(v.begin(),v.end());
    // working behind sort: it is based on introsort that is combination of quicksort, heapsort and insertion sort
    for(int i:v){cout<<i <<" ";}
    
    
    
    
    
}


