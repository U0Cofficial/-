#include <iostream>
#include <map>
#include <set>
#include <string>
using std::map;
using std::set;
using std::cout;
using std::cin;
using std::string;
int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    set<string> s;
    map<string,string> m;
    string ch;
    while(cin >> ch){
        s.insert(ch);
    }
    s.erase("I");
    if(s.find("I")==s.end()){
        cout << "There is no letter 'I'." << '\n';
    }
    for(set<string>::iterator iter=s.begin();iter!=s.end();iter++){
        cout << *iter << ' ';
    }
    cout << '\n';
    m["Mon"] = "Machine Learning";
    m["Tue"] = "Natural Language Process";
    m["Wed"] = "AI";
    m["Thur"] = "System Prog";

    for(map<string,string>::iterator iter=m.begin();iter!=m.end();iter++){
        cout << iter->first << " --- " << iter->second << '\n';
    }
    return 0;
}