#ifndef PATH_H
#define PATH_H

#include <vector>
#include "Vector2.h"

class Path {
public:
    static const int TOTAL_DISTANCE = 1000;

    Path(const std::vector<Vector2>& waypoints);

    Vector2 getNextWaypoint() const;
    float getDistanceToNextWaypoint(const Vector2& position) const;
    float getDistanceTravelled() const;

private:
    std::vector<Vector2> m_waypoints;
    int m_currentWaypointIndex;
    float m_distanceTravelled;
};

#endif
