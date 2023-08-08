

#define ACTISHAKE_SOURCE

#include "actISHAKE.hpp"
#include "actITypes.hpp"
#include "actKECCAKc.hpp"

#if(VSECPRIM_ACTSHA3_ENABLED == STD_ON)

# define VSECPRIM_START_SEC_CODE
# include "CompilerCfg_vSecPrim.hpp"

VSECPRIM_FUNC(actRETURNCODE) actSHAKEInit(
  VSECPRIM_P2VAR_PARA(actKECCAKcSTRUCT) info,
  const actU32 strength){
    return actKECCAKcInit (info, strength, actHASH_SHA3_PAD_1_SHAKE);
}

VSECPRIM_FUNC(actRETURNCODE) actSHAKEUpdate(
  VSECPRIM_P2VAR_PARA(actKECCAKcSTRUCT) info,
  VSECPRIM_P2CONST_PARA(actU8) data,
  const actLengthType dataLength,
  VSECPRIM_P2FUNC(VSECPRIM_NONE, void, watchdog)(void)){
    return actKECCAKcAbsorb (info, data, dataLength, watchdog);
}

VSECPRIM_FUNC(actRETURNCODE) actSHAKEGetXOFDigest(
  VSECPRIM_P2VAR_PARA(actKECCAKcSTRUCT) info,
  VSECPRIM_P2VAR_PARA(actU8) digest,
  const actLengthType digestSize,
  VSECPRIM_P2FUNC(VSECPRIM_NONE, void, watchdog)(void)){
    return actKECCAKcSqueeze (info, digest, digestSize, watchdog);
}

VSECPRIM_FUNC(actRETURNCODE) actSHAKEFinalize(
  VSECPRIM_P2VAR_PARA(actKECCAKcSTRUCT) info,
  VSECPRIM_P2VAR_PARA(actU8) digest,
  VSECPRIM_P2FUNC(VSECPRIM_NONE, void, watchdog)(void)){
    return actKECCAKcSqueeze (info, digest, (2u * info->strength), watchdog);
}

# define VSECPRIM_STOP_SEC_CODE
# include "CompilerCfg_vSecPrim.hpp"

#endif

