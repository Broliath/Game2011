//get positon function
Position Player::getPostition (void)
{
    return playerPosition;
}

//get inventory function
Inventory Player::getInventory (void)
{
    return playerInventory;
}

//set the players position
void Player::setPosition (Position nextPosition)
{
    playerPosition = nextPosition;
}

//constructor
Player::Player()
{
    playerInventory = new Inventory;
    playerPosition = new Position;
}
