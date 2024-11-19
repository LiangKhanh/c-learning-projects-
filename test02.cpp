#include <iostream>
using namespace std;

// Function to calculate the total number of rooms on a floor
int totalRoomsOnFloor(int floorNumber, int totalFloors) {
    // Assuming 2 rooms per floor for simplicity
    return floorNumber * 2;
}

int main() {
    int totalFloors, currentFloor, currentRoom;
    cin >> totalFloors >> currentFloor >> currentRoom;

    // Check for invalid input
    if (totalFloors <= 0 || currentFloor <= 0 || currentRoom <= 0 || currentFloor > totalFloors) {
        cout << "-1" << endl;
        return 0;
    }

    // Check if the current room is on an odd floor
    if (currentRoom % 2 != 0) {
        cout << "-1" << endl;
        return 0;
    }

    // Calculate room numbers of adjacent rooms
    int roomAbove = (currentFloor == totalFloors) ? -1 : currentRoom - 2;
    int roomBelow = (currentFloor == 1) ? -1 : currentRoom + 2;
    int roomRight = currentRoom + 2;
    int roomLeft = currentRoom - 2;

    // Adjust room numbers if they exceed the total number of rooms on a floor
    if (roomRight > totalRoomsOnFloor(currentFloor, totalFloors)) {
        roomRight = -1;
    }
    if (roomLeft < 1) {
        roomLeft = -1;
    }

    // Output the results
    cout << roomAbove << endl;
    cout << roomRight << endl;
    cout << roomBelow << endl;
    cout << roomLeft << endl;

    return 0;
}