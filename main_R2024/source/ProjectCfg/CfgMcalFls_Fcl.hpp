#ifdef ENABLE_QAC_TEST
    #pragma PRQA_MESSAGES_OFF 0292
#endif

#ifdef ENABLE_QAC_TEST
    #pragma PRQA_MESSAGES_ON 0292
#endif

#ifndef R_FCL_CFG_H
#define R_FCL_CFG_H

    #define R_FCL_HANDLER_CALL_INTERNAL            (1)
    #define R_FCL_HANDLER_CALL_USER                (2)

    #define R_FCL_COMMAND_EXECUTION_MODE    R_FCL_HANDLER_CALL_USER

    #define R_FCL_SUPPORT_LOCKBIT
    #define R_FCL_SUPPORT_DEVICENAME
    #define R_FCL_SUPPORT_BLOCKCNT
    #define R_FCL_SUPPORT_BLOCKENDADDR
    #define R_FCL_SUPPORT_OPB
    #define R_FCL_SUPPORT_ID
    #define R_FCL_SUPPORT_RESETVECTOR
    #define R_FCL_SUPPORT_SECURITYFLAGS

#endif
