#include "controllers/XboxController.hpp"

namespace frc4783 {

const int XboxController::buttonAId = 1;
const int XboxController::buttonBId = 2;
const int XboxController::buttonXId = 3;
const int XboxController::buttonYId = 4;
const int XboxController::buttonLeftBumperId = 5;
const int XboxController::buttonRightBumperId = 6;
const int XboxController::buttonBackId = 7;
const int XboxController::buttonStartId = 8;
const int XboxController::buttonLeftStickId = 9;
const int XboxController::buttonRightStickid = 10;

const int XboxController::leftXAxisId = 0;
const int XboxController::leftYAxisId = 1;
const int XboxController::leftTriggerAxisId = 2;
const int XboxController::rightTriggerAxisId = 3;
const int XboxController::rightXAxisId = 4;
const int XboxController::rightYAxisId = 5;

XboxController::XboxController(int id) : FrcController(id) {

    // allocate frc::JoystickButton objects
    m_buttons[frc4783::Button_A] = new frc::JoystickButton(m_driveStick.get(), buttonAId);
    m_buttons[frc4783::Button_B] = new frc::JoystickButton(m_driveStick.get(), buttonBId);
    m_buttons[frc4783::Button_X] = new frc::JoystickButton(m_driveStick.get(), buttonXId);
    m_buttons[frc4783::Button_Y] = new frc::JoystickButton(m_driveStick.get(), buttonYId);
    m_buttons[frc4783::Button_Back] = new frc::JoystickButton(m_driveStick.get(), buttonBackId);
    m_buttons[frc4783::Button_Start] = new frc::JoystickButton(m_driveStick.get(), buttonStartId);

    m_buttons[frc4783::Left_Bumper] = new frc::JoystickButton(m_driveStick.get(), buttonLeftBumperId);
    m_buttons[frc4783::Right_Bumper] = new frc::JoystickButton(m_driveStick.get(), buttonRightBumperId);
    m_buttons[frc4783::Left_Stick] = new frc::JoystickButton(m_driveStick.get(), buttonLeftStickId);
    m_buttons[frc4783::Right_Stick] = new frc::JoystickButton(m_driveStick.get(), buttonRightStickid);
}

XboxController::~XboxController() {
}

int XboxController::mapAxes(ControllerAxesType_e id) {
    int ret = 0;
    switch(id) {
        case Left_X_Axis: ret = leftXAxisId; break;
        case Left_Y_Axis: ret = leftYAxisId; break;
        case Right_X_Axis: ret = rightXAxisId; break;
        case Right_Y_Axis: ret = rightYAxisId; break;
    }
    return ret;
}


}  // namespace frc4783
