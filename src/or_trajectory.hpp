#ifndef OR_TRAJECTORY_HPP
#define OR_TRAJECTORY_HPP

#include <Eigen/Core>
#include <string>

#include "utils.hpp"

namespace ortconv
{
class OpenraveTrajectory
{
public:
    OpenraveTrajectory();
    void loadTrajectoryFromFile( std::string filename );

    milestones positions;
    milestones velocities;
    Eigen::VectorXd deltatime;
    std::string robot_name;
};
}

#endif // OR_TRAJECTORY_HPP
