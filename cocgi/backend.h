#ifndef _BACKEND_PROC_H__
#define _BACKEND_PROC_H__

#include <string>
#include "type.h"

class BackendProc
{
  public:
    static void PrintRequest(ParamMap &qmap, ParamMap &header, void *pArg, std::string &strResp);
};

#endif /*_BACKEND_PROC_H__*/

