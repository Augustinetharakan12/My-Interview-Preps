#include<bits/stdc++.h>

using namespace std;

int myCompare(string X, string Y) {
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ? 1: 0;
}

void printLargest(vector<string> arr) {
    sort(arr.begin(), arr.end(), myCompare);
    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
}

int main() {

    int t;

    cin >> t;

    while(t--) {
        int n;

        cin >> n;

        vector<string> A;

        for (int i=0; i<n ; i++) {
            int ip;
            cin >> ip;
            A.push_back(to_string(ip));
        }

        printLargest(A);

        cout<<endl;
    }
}
