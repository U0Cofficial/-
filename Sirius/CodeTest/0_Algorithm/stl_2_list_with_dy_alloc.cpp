#include <iostream>
#include <list>
using std::endl;
using std::cout;
using std::list;
int main(){
    
    list<int>* l_ptr;
    l_ptr = new list<int>;
    for(int i=0;i<3;i++){
        l_ptr->push_back(i);
    }
    for(list<int>::iterator it=l_ptr->begin();it!=l_ptr->end();it++){
        cout << *it << " ";
        *it=0;
    }
    cout << endl;
    for(list<int>::iterator it=l_ptr->begin();it!=l_ptr->end();it++){
        cout << *it << " ";
        
    }

    return 0;
}
