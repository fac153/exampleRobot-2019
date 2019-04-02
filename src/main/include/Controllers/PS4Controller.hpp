#pragma once

#include "controllers/FrcController.hpp"

namespace frc4783 {

class PS4Controller : public frc4783::FrcController {

public:

    /**
     * constructor
     * @param  id  controller id
     */
    PS4Controller(int id);

    virtual ~PS4Controller();

protected:

    int mapAxes(ControllerAxesType_e id) override;

    static const int buttonSquareId;
    static const int buttonCircleId;
    static const int buttonXId;
    static const int buttonTriangleId;
    static const int buttonLeftBumperId;
    static const int buttonRightBumperId;
    static const int buttonLeftTriggerId;
    static const int buttonRightTriggerId;
    static const int buttonShareId;
    static const int buttonOptionId;
    static const int buttonLeftStickId;
    static const int buttonRightStickid;
    static const int buttonPs4Id;
    static const int buttonPadId;

    static const int leftXAxisId;
    static const int leftYAxisId;
    static const int rightXAxisId;
    static const int rightYAxisId;

};

} // namespace frc4783
