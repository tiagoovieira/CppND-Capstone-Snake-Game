#ifndef OBSTACLE_H
#define OBSTACLE_H

struct Obstacle {
    Obstacle(const int xCoord, const int yCoord) : x(xCoord), y(yCoord) {};
    int getX() const { return x; }
    int getY() const { return y; }
    bool operator==(const Obstacle &obstacle) const {
        return (x == obstacle.x && y == obstacle.y);
    }
    private:
    int x;
    int y;
};

#endif