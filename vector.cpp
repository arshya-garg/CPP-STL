#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"capacity:"<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity:"<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"capacity:"<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"capacity:"<<v.capacity()<<endl;
    cout<<"Size:"<<v.size()<<endl;
    
    cout<<"Element at 2nd place:"<<v.at(2)<<endl;
    cout<<"front"<<v.front()<<endl;
    cout<<"back:"<<v.back()<<endl;
    
    v.pop_back();
    cout<<"After pop:"<<endl;
    for(int i:v){cout<<i<<" ";}
    
    //SIZE IS ZERO , NOT capacity
    
    
    
    
    
}

