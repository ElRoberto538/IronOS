#include "BSP.h"
#include "BSP_Power.h"
#include "Model_Config.h"
#include "Pins.h"
#include "Settings.h"
#include "fusbpd.h"
#include "int_n.h"
#include "policy_engine.h"
bool FUSB302_present = false;

void power_check() {
#ifdef POW_PD
  if (FUSB302_present) {
    // Cant start QC until either PD works or fails
    if (PolicyEngine::setupCompleteOrTimedOut() == false) {
      return;
    }
    if (PolicyEngine::pdHasNegotiated()) {
      return;
    }
  }
#endif
}
uint8_t usb_pd_detect() {
#ifdef POW_PD
  FUSB302_present = fusb302_detect();
  return FUSB302_present;
#endif
  return false;
}

bool getIsPoweredByDCIN() {
  return false;
}
