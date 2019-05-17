#include <bits/stdc++.h>

using namespace std;

int main() {
	int size, stock_price[100], i, cur_buy_price, prev_price, total_profit, buy_day[100], sell_day[100], total_days=0, difference;
	bool buy=false;

	cout << "Enter the number of days";
	cin >> size;

	for(i=0; i<size; i++)
		cin >> stock_price[i];

	cur_buy_price = stock_price[0];
	prev_price = cur_buy_price;
	total_profit = 0;

	for(i=1; i<size; i++) {
		difference = stock_price[i] - prev_price;

		// When there is a decline in the stock market value
		if(difference <= 0) {
			// If stock is not bought
			if(buy == false) {
				buy_day[total_days] = i;
				cur_buy_price = stock_price[i];
			}
			// If stock was bought sell it on the previous day
			if(buy == true) {
				buy = false;
				sell_day[total_days++] = i;
				total_profit += prev_price - cur_buy_price;
			}
		}
		// When there is an incline in the stock market value
		else {
			// If not bought then buy it on the previous day
			if(buy == false) {
				buy = true;
				buy_day[total_days] = i;
				cur_buy_price = prev_price;
			}
		}
		prev_price = stock_price[i];
	}

	// If bought and haven't sold it yet then sell it based on the price on the last day
	if(buy == true) {
		sell_day[total_days++] = i;
		total_profit = stock_price[i-1] - cur_buy_price;
	}

	for(i=0; i<total_days; i++)
		cout << "\n" << i << ". Buy day: "<< buy_day[i] << " Sell day: " << sell_day[i];
	cout << "\nTotal Profit" << total_profit;
}
