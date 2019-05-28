#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[100], arr_size, i, t, count;

    cin >> t;

    while(t-- > 0) {
        count = 0;

        cin >> arr_size;

        for(i=0; i<arr_size; i++) {
            cin >> arr[i];
            if(arr[i] == 0)
                count += 1;
        }
        cout << count << "\n";
    }
}
