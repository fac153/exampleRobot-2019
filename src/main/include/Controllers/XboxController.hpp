#pragma once

#include "controllers/FrcController.hpp"

namespace frc4783 {

class XboxController : public frc4783::FrcController {

public:

    XboxController(int id);

    virtual ~XboxController();

protected:

    int mapAxes(ControllerAxesType_e id) override;

    static const int buttonAId;
    static const int buttonBId;
    static const int buttonXId;
    static const int buttonYId;
    static const int buttonLeftBumperId;
    static const int buttonRightBumperId;
    static const int buttonBackId;
    static const int buttonStartId;
    static const int buttonLeftStickId;
    static const int buttonRightStickid;

    static const int leftXAxisId;
    static const int leftYAxisId;
    static const int rightXAxisId;
    static const int rightYAxisId;
    static const int leftTriggerAxisId;
    static const int rightTriggerAxisId;
};

} // namespace 4783
