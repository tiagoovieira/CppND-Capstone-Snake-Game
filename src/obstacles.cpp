#include "obstacles.h"
#include <cmath>
#include "obstacle.h"
#include <iostream>
Obstacles::Obstacles() {
  _obstacles = std::unique_ptr<std::vector<Obstacle>>(new std::vector<Obstacle>);
}

void Obstacles::CreateObstacle(const Obstacle &&obstacle) {
  _obstacles->emplace_back(obstacle);
}

std::vector<Obstacle> &Obstacles::getObstacle() const {
  return *_obstacles;
}

bool Obstacles::ExistsAnObstacle(const Obstacle &&obstacle) {
  for(const Obstacle &_obstacle : *_obstacles) {
      if(_obstacle == obstacle) return true;

      return false;
  }
}