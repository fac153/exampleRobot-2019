/*
 * PowerUp.h
 */

#pragma once

#include "FrcRobot.hpp"

namespace frc4783 {

class PowerUp: public frc4783::FrcRobot {
public:
    PowerUp();
    virtual ~PowerUp();

    void createDriveTrain() override;
};

} /* namespace frc */
