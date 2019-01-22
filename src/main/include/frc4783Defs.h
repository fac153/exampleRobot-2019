/*
 * frc4783Defs.h
 */

#ifndef FRC4783DEFS_H_
#define FRC4783DEFS_H_

namespace frc4783 {

typedef enum robotType {
    PROTOCASE,
    STEAMWORKS,
    POWERUP,
    DEEPSPACE
} RobotType_e;

typedef enum motorControllerType {
    DriveFrontLeft,
    DriveFrontRight,
    DriveRearLeft,
    DriveRearRight
} MotorControllerType_e;

typedef enum controllerButtonType {
    Button_A,
    Button_Square = Button_A,
    Button_B,
    Button_Circle = Button_B,
    Button_X,
    Button_Y,
    Button_Triangle = Button_Y,
    Button_Left,
    Button_Back = Button_Left,
    Button_Share = Button_Left,
    Button_Right,
    Button_Start = Button_Right,
    Button_Options = Button_Right,
    Button_Centre,
    Button_Guide = Button_Centre,
    Button_PS4 = Button_Centre,
    Left_Bumper,
    Right_Bumper,
    Left_Trigger,
    Right_Trigger,
    Left_Stick,
    Right_Stick,
    TouchPad,
    Button_Max,
} ControllerButtonType_e;

typedef enum controllerAxesType {
    Left_X_Axis,
    Left_Y_Axis,
    Right_X_Axis,
    Right_Y_Axis
} ControllerAxesType_e;

} // namespace frc4783



#endif /* FRC4783DEFS_H_ */
