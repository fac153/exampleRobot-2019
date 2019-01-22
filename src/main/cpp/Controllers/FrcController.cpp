#include "Controllers/FrcController.hpp"

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

} // namespace 4783