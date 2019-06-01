#include <bits/stdc++.h>

#define OPEN arr[i] == '[' || arr[i] == '(' || arr[i] == '{'

using namespace std;

int main() {
    int t, stack[1000], arr[10000], arr_size, top, i;
    bool flag;
    
    cin >> t;
    
    while(t--) {
        cin >> arr_size;
        
        for(i=0; i<arr_size; i++)
            cin >> arr[i];
            
        flag = 0;
        top = 0;
        
        for(i=0; i<arr_size; i++) {
            if(OPEN)
                stack[top++] = arr[i];
            else {
                cout << "\n" << arr[i] << " " << stack[top-1];
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
