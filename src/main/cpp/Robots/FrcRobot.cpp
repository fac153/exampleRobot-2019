/*
 * FrcRobot.cpp
 */

#include "Robots/FrcRobot.hpp"
#include "frc/VictorSP.h"
#include "frc/SpeedControllerGroup.h"
#include "frc/drive/DifferentialDrive.h"

namespace frc4783 {

const int FrcRobot::PwmIdDriveFrontLeftDefault = 0;
const int FrcRobot::PwmIdDriveRearLeftDefault = 1;
const int FrcRobot::PwmIdDriveFrontRightDefault = 2;
const int FrcRobot::PwmIdDriveRearRightDefault = 3;

FrcRobot::FrcRobot() {
    createDriveTrain();
}

FrcRobot::~FrcRobot() {
    // TODO Auto-generated destructor stub
}

void FrcRobot::createDriveTrain() {
    std::shared_ptr<frc::SpeedController> frontLeft = std::make_shared<frc::VictorSP>(PwmIdDriveFrontLeftDefault);
    m_motors[frc4783::DriveFrontLeft] = frontLeft;

    std::shared_ptr<frc::SpeedController> frontRight = std::make_shared<frc::VictorSP>(PwmIdDriveFrontRightDefault);
    m_motors[frc4783::DriveRearLeft] = frontRight;

    std::shared_ptr<frc::SpeedController> rearLeft = std::make_shared<frc::VictorSP>(PwmIdDriveRearLeftDefault);
    m_motors[frc4783::DriveFrontRight] = rearLeft;

    std::shared_ptr<frc::SpeedController> rearRight = std::make_shared<frc::VictorSP>(PwmIdDriveRearRightDefault);
    m_motors[frc4783::DriveRearRight] = rearRight;

    frontLeft->SetInverted(true);
    frontRight->SetInverted(true);
    rearLeft->SetInverted(true);
    rearRight->SetInverted(true);

    std::shared_ptr<frc::SpeedControllerGroup>leftDrive;
    std::shared_ptr<frc::SpeedControllerGroup> rightDrive;

    leftDrive = std::make_shared <frc::SpeedControllerGroup>(*rearLeft, *frontLeft);
    rightDrive = std::make_shared <frc::SpeedControllerGroup>(*rearRight, *frontRight);

    m_drivetrain.reset(new frc::DifferentialDrive(*leftDrive, *rightDrive));

#if 0
    differentialDrive->SetSafetyEnabled(false);
    differentialDrive->SetExpiration(0.1);
    differentialDrive->SetMaxOutput(1.0);
#endif
}

std::shared_ptr<frc::RobotDriveBase> FrcRobot::getDrivetrain() {
    return m_drivetrain;
}

} /* namespace frc4783 */
