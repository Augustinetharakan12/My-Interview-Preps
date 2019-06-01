#include <bits/stdc++.h>

using namespace std;

#define OPEN arr[i] == '[' || arr[i] == '(' || arr[i] == '{'

int main() {
    int t, arr_size, top, i;
    char stack[10000], arr[10000];
    bool flag;

    cin >> t;

    while(t--) {

        cin >> arr;

        flag = 0;
        top = 0;

        for(i=0; arr[i]!='\0'; i++) {
            if(OPEN)
                stack[top++] = arr[i];
            else {
                if(top == 0){flag = 1; break;}
                else if(arr[i] == ')') {
                    if(stack[top-1] == '(') top--;
                    else {flag = 1; break;}
                }
                else if(arr[i] == '}') {
                    if(stack[top-1] == '{') top--;
                    else {flag = 1; break;}
                }
                else if(arr[i] == ']') {
                    if(stack[top-1] == '[') top--;
                    else {flag = 1; break;}
                }
            }
        }
        if(flag == 0 and top == 0) cout << "balanced\n";
        else cout << "not balanced\n";

    }
}
