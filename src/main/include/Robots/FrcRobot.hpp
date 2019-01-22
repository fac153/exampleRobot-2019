/*
 * FrcRobot.h
 */

#ifndef ROBOTS_FrcRobot_H_
#define ROBOTS_FrcRobot_H_

#include <memory>
#include <map>

#include "frc4783Defs.h"
#include "frc/drive/RobotDriveBase.h"
#include "frc/SpeedController.h"

#include "Controllers/FrcController.hpp"

namespace frc4783 {

class FrcRobot {
public:
    FrcRobot();
    virtual ~FrcRobot();

    std::shared_ptr<frc::RobotDriveBase> getDrivetrain();

protected:

    static const int PwmIdDriveFrontLeftDefault;
    static const int PwmIdDriveRearLeftDefault;
    static const int PwmIdDriveFrontRightDefault;
    static const int PwmIdDriveRearRightDefault;

    /**
     * Default drivetrain consists of:
     * 4 Victor SP motor controllers,
     * - connected via PWM              +-------+
     * PWM 0 = front left             0 | front | 2
     * PWM 1 = rear left                |       |
     * PWM 2 = front right            1 |  rear | 3
     * PWN 3 = rear right               +-------+
     *
     * override if drivetrain is different than default configuration
     */
    virtual void createDriveTrain();

    /**
     * only one drivetrain per robot:
     */
    std::shared_ptr<frc::RobotDriveBase> m_drivetrain;
    /**
     * list of motor controlers
     */
    std::map<frc4783::MotorControllerType_e, std::shared_ptr<frc::SpeedController>> m_motors;
};

} /* namespace frc4783 */

#endif /* ROBOTS_FrcRobot_H_ */
