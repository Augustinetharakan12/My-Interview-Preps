#include<bits/stdc++.h>

using namespace std;

int main() {
    int arrival[100], departure[100], limit, max, temp, i, j, t;

    //cin >> t;
    t = 1;
    while(t>0) {
        //cout << "Enter the number of trains";
    	cin >> limit;

    	//cout << "Enter "<< limit <<" train arrival time and departure time";
    	for(i=0; i<limit; i++)
    		cin >> arrival[i];
    	for(i=0; i<limit; i++)
    		cin >> departure[i];

    	max = 1;
    	temp = 1;
    	for(i=0; i<limit; i++) {
    		j = 0;
    		while(j<limit ) {

    			if(arrival[j] >= arrival[i] && i!=j && arrival[j]<=departure[i])
                    		temp++;
        		j++;
    		}
    		if(temp > max)
    			max = temp;
    		temp = 1;
    	}
        t--;
        cout << max;
    }
}

