//set possible travel directions
void Room::setGoNorth(bool setGo)
{
    goNorth = setGo;
}

void Room::setGoSouth(bool setGo)
{
    goSouth = setGo;
}

void Room::setGoEast(bool setGo)
{
    goEast = setGo;
}

void Room::setGoWest(bool setGo)
{
    goWest = setGo;
}

//return if you can go in said direction
bool Room::canGoNorth
{
    return goNorth;
}

bool Room::canGoSouth
{
    return goSouth;
}

bool Room::canGoEast
{
    return goEast;
}

bool Room::canGoWest
{
    return goWest;
}

//constructor
Room::Room(bool north = false, bool south = false, bool east = false, bool west = false)
{
    setGoNorth(north);
    setGoSouth(south);
    setGoEast(east);
    setGoWest(west);
    
}
