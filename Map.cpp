Position Map::getStartPosition(void)
{
    return startPosition;
}

Room Map::getRoom(Position currentPosition)
{
    return roomList[currentPosition.X][currentPosition.Y];
}

Map::Map(int sizeX, int sizeY, int positionX, int positionY)
{
    startPosition = new Position;
    Room** roomList = new Room*[sixeX];
    for (int i = 0; i < sizeX; i++)
    {
        roomList[i] = new Room*[sizeY];
    }
    startPosition.setPosition(positionX, positionY);
}

void Map::setRoom(Room roomToSet)
{
    Map.roomList[roomToSet.getX()][roomToSet.getY()] = roomToSet;
}
