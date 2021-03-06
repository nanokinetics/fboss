#include "fboss/qsfp_service/platforms/wedge/Wedge100Manager.h"

#include "fboss/lib/usb/Wedge100I2CBus.h"

namespace facebook { namespace fboss {
Wedge100Manager::Wedge100Manager(){
}

std::unique_ptr<BaseWedgeI2CBus> Wedge100Manager::getI2CBus() {
  return std::make_unique<Wedge100I2CBus>();
}
}} // facebook::fboss
