#include <bits/stdc++.h>

using namespace std;

int main()  {
    int arr[100000], arr_size, i, t, max, cur;

    cin >> t;

    while(t--) {
        cin >> arr_size;

        for(i=0; i<arr_size; i++)
            cin >> arr[i];

        cur = 1;
        max = 1;

        if(arr_size == 0)
            cout << "0" << "\n";
        else {
            for(i=1; i<arr_size; i++) {
                if(arr[i] > arr[i-1]) {
                    cur ++;
                }
                else {
                    if(cur > max)
                        max = cur;
                    cur = 1;
                }
                // cout << arr[i-1] << " " << arr[i] << " " << cur << "\n";
            }
            cout << max << "\n";
        }
    }
}
