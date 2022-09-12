#include <iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m; //map=sorted, unordered map=unsorted
    m[1]="babbar";
    m[2]="love";
    m[13]="kumar";
    
    for(auto i:m){cout<<i.first<<" "<<i.second<<endl;}
    
    m.insert({5,"bheem"});
    cout<<"finding 13:"<<m.count(13)<<endl;
    m.erase(13);
    //insert,erase,find,count,search in case of map is o(logn);
    //unordered map:hash table; there search is o(1);
    
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){cout<<(*i).first<<endl;}
       
}



