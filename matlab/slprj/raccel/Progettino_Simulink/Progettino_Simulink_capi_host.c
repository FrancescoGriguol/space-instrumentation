#include "Progettino_Simulink_capi_host.h"
static Progettino_Simulink_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Progettino_Simulink_host_InitializeDataMapInfo(&(root), "Progettino_Simulink");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
