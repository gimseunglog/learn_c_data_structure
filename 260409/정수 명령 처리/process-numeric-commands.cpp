#include <iostream>
using namespace std;

class Stack{
    int arr[10000];
    int tos = -1;
public:
    void push(int n){
        if(size() != 10000)
            arr[++tos] = n;
    }
    int pop(){
        if(!empty())
            return arr[tos--];
    }
    int size(){
        return tos + 1;
    }
    bool empty(){
        return tos == -1;
    }
    int top(){
        return arr[tos];
    }
};

int main() {
    int n;
    cin >> n;
    Stack s;
    for(int i = 0; i < n; i++){
        string order;
        cin >> order;
        if(order == "push"){
            int num;
            cin >> num;
            s.push(num);
        }
        else if(order == "pop"){
            cout << s.pop() << endl;
        }
         else if(order == "size"){
            cout << s.size() << endl;
        }
         else if(order == "empty"){
            cout << s.empty() << endl;
        }
         else if(order == "top"){
            cout << s.top() << endl;
        }
    }
    return 0;
}