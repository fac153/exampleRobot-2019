/*
 * PowerUp.cpp
 */

#include "Robots/PowerUp.hpp"

#include "ctre/phoenix/motorcontrol/can/WPI_VictorSPX.h"
#include "ctre/phoenix/motorcontrol/can/WPI_TalonSRX.h"
#include "frc/SpeedControllerGroup.h"
#include "frc/drive/DifferentialDrive.h"

namespace frc4783 {

PowerUp::PowerUp() {
    // TODO Auto-generated constructor stub

}

PowerUp::~PowerUp() {
    // TODO Auto-generated destructor stub
}

void PowerUp::createDriveTrain() {
    std::shared_ptr<frc::SpeedController> frontLeft = std::make_shared<ctre::phoenix::motorcontrol::can::WPI_VictorSPX>(3);
    m_motors[frc4783::DriveFrontLeft] = frontLeft;

    std::shared_ptr<frc::SpeedController> frontRight = std::make_shared<ctre::phoenix::motorcontrol::can::WPI_VictorSPX>(1);
    m_motors[frc4783::DriveRearLeft] = frontRight;

    std::shared_ptr<frc::SpeedController> rearLeft = std::make_shared<ctre::phoenix::motorcontrol::can::WPI_VictorSPX>(2);
    m_motors[frc4783::DriveFrontRight] = rearLeft;

    std::shared_ptr<frc::SpeedController> rearRight = std::make_shared<ctre::phoenix::motorcontrol::can::WPI_VictorSPX>(0);
    m_motors[frc4783::DriveRearRight] = rearRight;

#if 0
    std::dynamic_pointer_cast<ctre::phoenix::motorcontrol::can::WPI_VictorSPX>(frontLeft)->SetName("Drivetrain", "front left drive");
    std::dynamic_pointer_cast<ctre::phoenix::motorcontrol::can::WPI_VictorSPX>(rearLeft)->SetName("Drivetrain", "rear left drive");

    std::dynamic_pointer_cast<ctre::phoenix::motorcontrol::can::WPI_VictorSPX>(frontRight)->SetName("Drivetrain", "front right drive");
    std::dynamic_pointer_cast<ctre::phoenix::motorcontrol::can::WPI_VictorSPX>(rearRight)->SetName("Drivetrain", "rear right drive");
#endif

    frontLeft->SetInverted(true);
    frontRight->SetInverted(true);
    rearLeft->SetInverted(true);
    rearRight->SetInverted(true);

    std::shared_ptr<frc::SpeedControllerGroup>leftDrive;
    std::shared_ptr<frc::SpeedControllerGroup> rightDrive;

    leftDrive = std::make_shared <frc::SpeedControllerGroup>(*rearLeft, *frontLeft);
    rightDrive = std::make_shared <frc::SpeedControllerGroup>(*rearRight, *frontRight);

    m_drivetrain.reset(new frc::DifferentialDrive(*leftDrive, *rightDrive));

}

} /* namespace frc */
