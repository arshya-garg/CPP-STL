#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    
    for(int i:d){cout<<i<<" ";}
    d.pop_back();
    d.pop_front();
    cout<<"print first index element:"<<d.at(1)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    
    d.begin()<<endl;
    d.erase(d.begin(),d.begin()+1);  //delete 1st element
    //gives range or an element
        
}
