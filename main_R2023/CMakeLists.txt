cmake_minimum_required(VERSION 3.25.3)

project(
   pFOTA_R2024
   VERSION 0.1
)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(
   -g
   -std=c2x
   -Wall
   -Werror
   -Wextra
   -pedantic
   -Wuninitialized
)

add_executable(
   pFOTA_R2024

   ${PROJECT_SOURCE_DIR}/source/ProjectCfg/CfgSwcServiceStartUp.c
   ${PROJECT_SOURCE_DIR}/source/SwcServiceStartUp/SwcServiceStartUp.c
   ${PROJECT_SOURCE_DIR}/source/LibAutosar/LibAutosar_StateMachine.c
   ${PROJECT_SOURCE_DIR}/source/wrappers/wrappers.c
)

target_include_directories(
   pFOTA_R2024 PUBLIC
   "${PROJECT_SOURCE_DIR}/source/wrappers"
   "${PROJECT_SOURCE_DIR}/source/common"
   "${PROJECT_SOURCE_DIR}/source/LibAutosar"
   "${PROJECT_SOURCE_DIR}/source/ProjectCfg"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceStartUp"
)
