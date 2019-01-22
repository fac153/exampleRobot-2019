#include "Controllers/PS4Controller.hpp"

namespace frc4783 {

const int PS4Controller::buttonSquareId = 1;
const int PS4Controller::buttonCircleId = 2;
const int PS4Controller::buttonXId = 3;
const int PS4Controller::buttonTriangleId = 4;
const int PS4Controller::buttonLeftBumperId = 5;
const int PS4Controller::buttonRightBumperId = 6;
const int PS4Controller::buttonLeftTriggerId = 7;
const int PS4Controller::buttonRightTriggerId = 8;
const int PS4Controller::buttonShareId = 9;
const int PS4Controller::buttonOptionId = 10;
const int PS4Controller::buttonLeftStickId = 11;
const int PS4Controller::buttonRightStickid = 12;
const int PS4Controller::buttonPs4Id = 13;
const int PS4Controller::buttonPadId = 14;

const int PS4Controller::leftXAxisId = 0;
const int PS4Controller::leftYAxisId = 1;
const int PS4Controller::rightXAxisId = 2;
const int PS4Controller::rightYAxisId = 5;

PS4Controller::PS4Controller(int id) : FrcController(id) {

    // allocate frc::JoystickButton objects
    m_buttons[frc4783::Button_Square] = new frc::JoystickButton(m_driveStick.get(), buttonSquareId);
    m_buttons[frc4783::Button_Circle] = new frc::JoystickButton(m_driveStick.get(), buttonCircleId);
    m_buttons[frc4783::Button_X] = new frc::JoystickButton(m_driveStick.get(), buttonXId);
    m_buttons[frc4783::Button_Triangle] = new frc::JoystickButton(m_driveStick.get(), buttonTriangleId);
    m_buttons[frc4783::Button_Share] = new frc::JoystickButton(m_driveStick.get(), buttonShareId);
    m_buttons[frc4783::Button_Options] = new frc::JoystickButton(m_driveStick.get(), buttonOptionId);
    m_buttons[frc4783::Button_PS4] = new frc::JoystickButton(m_driveStick.get(), buttonPs4Id);
    
    m_buttons[frc4783::Left_Bumper] = new frc::JoystickButton(m_driveStick.get(), buttonLeftBumperId);
    m_buttons[frc4783::Right_Bumper] = new frc::JoystickButton(m_driveStick.get(), buttonRightBumperId);
    m_buttons[frc4783::Left_Trigger] = new frc::JoystickButton(m_driveStick.get(), buttonLeftTriggerId);
    m_buttons[frc4783::Right_Trigger] = new frc::JoystickButton(m_driveStick.get(), buttonRightTriggerId);
    m_buttons[frc4783::Left_Stick] = new frc::JoystickButton(m_driveStick.get(), buttonLeftStickId);
    m_buttons[frc4783::Right_Stick] = new frc::JoystickButton(m_driveStick.get(), buttonRightStickid);
    m_buttons[frc4783::TouchPad] = new frc::JoystickButton(m_driveStick.get(), buttonPadId);
}

PS4Controller::~PS4Controller() {
}

int PS4Controller::mapAxes(ControllerAxesType_e id) {
    int ret = 0;
    switch(id) {
        case Left_X_Axis: ret = leftXAxisId; break;
        case Left_Y_Axis: ret = leftYAxisId; break;
        case Right_X_Axis: ret = rightXAxisId; break;
        case Right_Y_Axis: ret = rightYAxisId; break;
    }
    return ret;
}

} // namespace 4783