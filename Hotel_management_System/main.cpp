#include <iostream>  
#include <cstring>  
#define max 100  

using namespace std;  

class Customer
{
public:
    char name[max];
    int age;
    char address[max];
    char phone[max];
    char email[max];
    char from_date[20];  
    char to_date[20];    
    float payment_advance;
    float payment_total;
    int booking_id;
};

class Room
{
public:
    int room_number;
    char room_type[max];  
    int room_status;
    int rent;
    int capacity;
    int status;
    static int count;  

    Customer cust;  

    Room addRoom(int);
    void searchRoom(int);
    void displayRoom(Room);
    void deleteRoom(int);
};

int Room::count = 0;  

Room rooms[max];  

Room Room::addRoom(int rno)
{
    Room room;
    room.room_number = rno;
    cout << "Enter room type (Single/Double): ";
    cin >> room.room_type;
    cout << "Enter room rent: ";
    cin >> room.rent;
    cout << "Enter room capacity: ";
    cin >> room.capacity;
    room.status = 0;  

    rooms[Room::count] = room;  

    Room::count++;  

    cout << "Room added successfully!" << endl;
    return room;
}

int main()
{
    int choice, rno;
    Room room;

    while (true) {
        cout << "\nHotel Management System" << endl;
        cout << "1. Add Room" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter room number: ";
                cin >> rno;
                room.addRoom(rno);
                break;
            case 2:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
