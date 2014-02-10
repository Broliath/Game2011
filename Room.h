#include <string>
#include "Position.h"

using namespace std;

class Room
{
    private:
        string roomName;
        Position roomPosition;
        string roomDescription;
        bool previouslyVisited;
        string previouslyVisitedDescription;
        bool trap;
        object item;
        bool goNorth;
        bool goSouth;
        bool goEast;
        bool goWest;
    Public:
        bool canGoNorth();
        bool canGoSouth();
        bool canGoEast();
        bool canGoWest();
        setGoNorth(bool);
        setGoSouth(bool);
        setGoEast(bool);
        setGoWest(bool);
}
