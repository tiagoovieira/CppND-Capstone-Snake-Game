#ifndef OBSTACLES_H
#define OBSTACLES_H

#include <vector>
#include "SDL.h"
#include "obstacle.h"
#include <memory>

class Obstacles {
  public:
    Obstacles();
    void CreateObstacle(const Obstacle &&obstacle);
    std::vector<Obstacle> &getObstacle() const;
    bool ExistsAnObstacle(const Obstacle &&obstacle);
  private:
    std::unique_ptr<std::vector<Obstacle>> _obstacles;
};
#endif