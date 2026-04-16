#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string order;
        cin >> order;
        if(order == "push_front"){
            int n; 
            cin >> n;
            l.push_front(n);
        }
        else if(order == "push_back"){
            int n;
            cin >> n;
            l.push_back(n);
        }
        else if(order == "pop_front"){
            cout << l.front() << endl;
            l.pop_front();
        }
        else if(order == "pop_back"){
            cout << l.back() << endl;
            l.pop_back();
        }
        else if(order == "size"){
            cout << l.size() << endl;
        }
        else if(order == "empty"){
            cout << l.empty() << endl;
        }
        else if(order == "front"){
            cout << l.front() << endl;
        }
        else if(order == "back"){
            cout << l.back() << endl;
        }
    }
    return 0;
}