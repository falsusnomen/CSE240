

#ifndef _NOBLE_H_
#define _NOBLE_H_
// Q1b: Create Noble class (5 points)
// Part 1: Create a child class of the Room class named 'Noble'

class Noble : public Room {
    public:
    
// Part2: Declare constructor which accepts the same 3 parameters as the parent class Room's constructor.
Noble (string roomName, int numRooms, libraryType libType) : Room(roomName, numRooms, libType) {}

// Pass the 3 parameters to the super constructor of the Room class.
    void displayRoom()

// Part 3: Re-declare the method displayRoom (virtual method found inside of parent class Room)
}
#endif // _NOBLE_H_

