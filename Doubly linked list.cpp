#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    
    for(int i:l){cout<<i<<" ";}
    //begin,end,empty,back: O(1)
    //erase:o(n)
    
    l.erase(l.begin());
     for(int i:l){cout<<i<<" ";}
     
     l.pop_front();
     l.pop.back();
     l.size();
     
     list<int> n(l);//copying list
     list<int> n(5,100);//initialise by 100
}
