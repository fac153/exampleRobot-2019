#pragma once

#include <map>
#include <memory>

#include "frc/WPILib.h"
#include "frc4783Defs.h"

namespace frc4783 {

class FrcController {

public:

    /**
     * constructor
     * @param  id  controller id
     */
    FrcController(int id);
    virtual ~FrcController();

    double getRawAxis(ControllerAxesType_e id);

    int addCommand(ControllerButtonType_e button, JoystickButtonActions_e action, frc::Command *command);

protected:

    virtual int mapAxes(ControllerAxesType_e id) = 0;

    std::shared_ptr<frc::Joystick> m_driveStick;

    frc::JoystickButton *m_buttons[frc4783::Button_Max] = {0};
};

} // namespace frc4783
