#include <bits/stdc++.h>

using namespace std;

char dir[] = "NESW";

class Rover {
	public:
	int x, y, cur_dir;
	Rover(int x, int y, int cur_dir) {
		this->x = x;
		this->y = y;
		this->cur_dir = cur_dir;
	}
	void move() {
		switch(dir[this->cur_dir]) {
			case 'N':this->y++;
				break;
			case 'S':this->y--;
				break;
			case 'E':this->x++;
				break;
			case 'W':this->x--;
				break;
		}
		cout << dir[this->cur_dir];
	}
	void rotate(char x) {
		switch(x) {
			case 'L':this->cur_dir = (this->cur_dir-1)%4;
				break;
			case 'R':this->cur_dir = (this->cur_dir+1)%4;
				break;
		}
	}
};

int main() {
	char opt;
	Rover rover(1, 1, 1);
	cout << rover.x << " " << rover.y << " " << rover.cur_dir;
	cin >> opt;
	while(opt != 'Q') {
		if(opt == 'M') {
			rover.move();
		}
		else {
			rover.rotate(opt);
		}
		cin >> opt;
	}
	cout << rover.x << " " << rover.y;
}
