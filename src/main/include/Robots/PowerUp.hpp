/*
 * PowerUp.h
 */

#ifndef ROBOTS_POWERUP_H_
#define ROBOTS_POWERUP_H_

#include "FrcRobot.hpp"

namespace frc4783 {

class PowerUp: public frc4783::FrcRobot {
public:
    PowerUp();
    virtual ~PowerUp();

    void createDriveTrain() override;
};

} /* namespace frc */

#endif /* ROBOTS_POWERUP_H_ */
