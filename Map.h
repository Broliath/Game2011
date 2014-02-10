#include <iostream>
#include "Position.h"
#include "Room.h"

class Map()
{
    private:
        Room** roomList;
        Position startPosition;
    public:
        void setRoom(Room);
        Room getRoom(Position);
        Position getStartPosition();
}
