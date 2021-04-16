/* Include files */

#include "Manipulator_PDControl_PassivityBasedRobust_cgxe.h"
#include "m_mrkgoZAWWYFs627wbafmvD.h"

unsigned int cgxe_Manipulator_PDControl_PassivityBasedRobust_method_dispatcher
  (SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 2255605967 &&
      ssGetChecksum1(S) == 4080656415 &&
      ssGetChecksum2(S) == 597787685 &&
      ssGetChecksum3(S) == 2557193826) {
    method_dispatcher_mrkgoZAWWYFs627wbafmvD(S, method, data);
    return 1;
  }

  return 0;
}
