#include <iostream>
#include<set>
using namespace std;

int main()
{
    //unique elements are stored in a set
    //no modification: only additon and deletion is possible
    //elements are returned in sorted order
    //unordered set are slow than ordered set
    
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    
    for(auto i:s){cout<<i<<endl;}
    
    //insert operation:o(nlogn);
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    
    cout<<"5 is present or not:"<<s.count(5)<<endl;
    
    set<int>::iterator itr=s.find(5);
    cout<<"value present at itr:"<<*it<<endl;
    
    for(auto it=itr; it!=s.end();it++){cout<<*it<<" ";}
    //insert,find,erase and count:o(logn);
    //size,begin,empty:o(1);
    
  
}
