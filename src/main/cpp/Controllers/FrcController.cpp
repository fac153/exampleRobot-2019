#include "controllers/FrcController.hpp"

namespace frc4783 {

FrcController::FrcController(int id) {
    m_driveStick.reset(new frc::Joystick(id));
}

FrcController::~FrcController() {
    for(int i = 0; i < frc4783::Button_Max; ++i) {
        if (m_buttons[i] != nullptr) {
            delete m_buttons[i];
        }
    }
}

double FrcController::getRawAxis(ControllerAxesType_e id) {
    double ret = 0.0;
    if (m_driveStick != nullptr) {
        m_driveStick->GetRawAxis(mapAxes(id));
    }
}

int FrcController::addCommand(ControllerButtonType_e button, JoystickButtonActions_e action, frc::Command *command) {
    frc::JoystickButton *obj = m_buttons[button];
    int ret = 0;
    if (obj != nullptr && command != nullptr) {
        switch (action) {
            case WhenActive:
                obj->WhenActive(command);
                break;
            case WhileActive:
                obj->WhileActive(command);
                break;
            case WhenInactive:
                obj->WhenInactive(command);
                break;
            case CancelWhenActive:
                obj->CancelWhenActive(command);
                break;
            case ToggleWhenActive:
                obj->ToggleWhenActive(command);
                break;
            case WhenPressed:
                obj->WhenPressed(command);
                break;
            case WhileHeld:
                obj->WhileHeld(command);
                break;
            case WhenReleased:
                obj->WhenReleased(command);
                break;
            case CancelWhenPressed:
                obj->CancelWhenPressed(command);
                break;
            case ToggleWhenPressed:
                obj->ToggleWhenPressed(command);
                break;
            default:
                ret = -1;
                break;
        }
    }
    else {
        ret = -2;
    }
    return ret;
}

} // namespace 4783