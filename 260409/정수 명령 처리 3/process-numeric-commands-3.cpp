#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;
    deque<int> d;
    cin >> n;
    for(int i = 0; i < n; i++){
        string order;
        cin >> order;
        if(order == "push_front"){
            int a;
            cin >> a;
            d.push_front(a);
        }
        else if(order == "push_back"){
            int a;
            cin >> a;
            d.push_back(a);
        }
        else if(order == "pop_front"){
            cout << d.front() << endl; 
            d.pop_front();
        }
        else if(order == "pop_back"){
            cout << d.back() << endl; 
            d.pop_back();
        }
        else if(order == "size"){
            cout << d.size() << endl; 
        }
        else if(order == "empty"){
            cout << d.empty() << endl; 
        }
        else if(order == "back"){
            cout << d.back() << endl; 
        }
        else if(order == "front"){
            cout << d.front() << endl;
        }
    }
    return 0;
}