void stealOlympicFire()
{
    repeat(13)
    {
        reachFire();
    }
    pickBeeper();
    escapeArena();
}


void reachFire()
{
    if(frontIsClear())
    {
        moveForward();
    }
    else
    {
        turnLeft();
        moveForward();
        turnRight();
    }
}

void escapeArena()
{
    moveForward();
    turnRight();
    repeat(6)
    {
        moveForward();
    }
    turnLeft();
    moveForward();
}