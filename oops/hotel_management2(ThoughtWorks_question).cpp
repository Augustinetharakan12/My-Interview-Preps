#include <bits/stdc++.h>

using namespace std;

#define SINGLE_OCCUPANCY_PRICE_PER_DAY 2000
#define DOUBLE_OCCUPANCY_PRICE_PER_DAY 3000
#define TRIPLE_OCCUPANCY_PRICE_PER_DAY 4000

#define AC_PRICE_PER_DAY 1000


char floor_string[][50] = {"first", "second", "third"};
char air_condition_string[][50] = {"air", "non-air"};
char occupancy_string[][50] = {"single", "double", "triple"};

class Room {
    int room_no, occupancy, floor;
    bool ac, allocated;

    public:

        Room(int room_no, int occupancy, int floor, bool ac) {
            this->allocated = false;
            this->room_no = room_no;
            this->occupancy = occupancy;
            this->ac = ac;
            this->floor = floor;
        }

        int get_rate() {
            int rate_per_day;

            if(this->occupancy == 1) {
                rate_per_day = SINGLE_OCCUPANCY_PRICE_PER_DAY;
            }
            else if(this->occupancy == 2) {
                rate_per_day = DOUBLE_OCCUPANCY_PRICE_PER_DAY;
            }
            else if(this->occupancy == 3) {
                rate_per_day = TRIPLE_OCCUPANCY_PRICE_PER_DAY;
            }
            if(this->ac) rate_per_day += AC_PRICE_PER_DAY;

            return rate_per_day;
        }

        bool allocate_room() {
            if(this->is_room_available()) {
                this->allocated = true;
                return true;
            }
            else
                return false;
        }

        bool is_room_available() {
            return !this->allocated;
        }

        void display() {
            cout << "Room Number: " << this->room_no << " " << floor_string[this->floor] << " floor, " << air_condition_string[this->ac] << " conditioned " << occupancy_string[this->occupancy] << "occupancy, estimated: RS." << this->get_rate();
        }

};

class Hotel {
    public:
        Room *rooms[100], no_of_rooms;
        Hotel() {
            this->no_of_rooms = 0;
        }

        static Room* search(Room *rooms[], int no_of_rooms, int occupancy, bool ac) {
            int i;
            for(i=0; i<no_of_rooms; i++) {
                if(rooms[i]->occupancy == occupancy && rooms[i]->ac == ac)
                    return rooms[i];
            }
            return NULL;
            exit(0);
        }
};


int main() {
    Hotel *hotel = new Hotel();
    Room *room_obj;
    int i, opt, occupancy, floor, no_of_occupancies, room_no, per_day_price;
    bool ac;

    hotel->rooms[hotel->no_of_rooms] = new Room(101, 1, 1, true);
    hotel->no_of_rooms++;

    hotel->rooms[hotel->no_of_rooms] = new Room(102, 2, 1, true);
    hotel->no_of_rooms++;

    hotel->rooms[hotel->no_of_rooms] = new Room(103, 2, 1, true);
    hotel->no_of_rooms++;

    hotel->rooms[hotel->no_of_rooms] = new Room(201, 1, 2, true);
    hotel->no_of_rooms++;

    hotel->rooms[hotel->no_of_rooms] = new Room(202, 1, 2, true);
    hotel->no_of_rooms++;

    hotel->rooms[hotel->no_of_rooms] = new Room(203, 2, 2, true);
    hotel->no_of_rooms++;

    hotel->rooms[hotel->no_of_rooms] = new Room(204, 3, 2, true);
    hotel->no_of_rooms++;

    do {
        cout << "\nMenu";
        cout << "\n1.Create room";
        cout << "\n2.Allocate a room";
        cout << "\n3.exit\n";
        cin >> opt;

        switch (opt) {
            case 1:
                cout << "Enter the room number";
                cin >> room_no;

                cout << "Enter the floor number";
                cin >> floor;

                cout << "Enter the no of occupancies( MAX is 3)";
                cin >> no_of_occupancies;

                cout << "AC or non AC (1/0)";
                cin >> ac;

                hotel->rooms[no_of_rooms++] = new Room(room_no, no_of_occupancies, floor, ac);
            break;

            case 2:
                cout << "\nNumber of occupancies";
                cin >> occupancy;
                cout << "\nAc or Non AC (1/0)";
                cin >> ac;

                room_obj = Hotel::search(hotel->rooms, no_of_rooms, occupancy, ac);

                if(room_obj == NULL)
                    cout << "No such room";
                else {
                    if(room_obj->is_room_available()) {
                        room_obj->allocate_room();
                        room_obj->display();
                    }
                    else {
                        cout << "Room not available";
                    }
                }
                break;

            case 3:
                break;

            default:
                cout << "Wrong Option";
        };

    }while(opt!=3);
}