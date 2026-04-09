#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
stack<char> s;

int main() {
    cin >> str;
    int len = str.size();
    for(int i = 0; i < len; i++){
        if(str[i] == '(')
            s.push(str[i]);
        else if(str[i] == ')'){
            if(s.empty()){
                cout << "No";
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty()){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
