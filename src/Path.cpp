#include "Path.h"

Path::Path(const std::vector<Vector2>& waypoints) :
    m_waypoints(waypoints),
    m_currentWaypointIndex(0),
    m_distanceTravelled(0.0f)
{
}

Vector2 Path::getNextWaypoint() const
{
    if (m_currentWaypointIndex >= m_waypoints.size() - 1) {
        // Reached end of path
        return m_waypoints.back();
    }
    else {
        return m_waypoints[m_currentWaypointIndex + 1];
    }
}

float Path::getDistanceToNextWaypoint(const Vector2& position) const
{
    Vector2 nextWaypoint = getNextWaypoint();
    float distance = (nextWaypoint - position).length();
    return distance;
}

float Path::getDistanceTravelled() const
{
    return m_distanceTravelled;
}
