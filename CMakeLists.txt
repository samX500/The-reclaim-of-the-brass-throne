cmake_minimum_required(VERSION 3.16)
project(untitledRogueLikeGame)

set(CMAKE_CXX_STANDARD 14)

set(EXECUTABLE_NAME "untitledRogueLikeGame")
add_executable(${EXECUTABLE_NAME} main.cpp Environment/Room.cpp Environment/Room.h app/Application.cpp app/Application.h Command/Command.cpp Command/Command.h Actor/GameObject.cpp Actor/GameObject.h Utility/Direction.cpp Utility/Direction.h Command/MoveCommand.cpp Command/MoveCommand.h Utility/Position.cpp Utility/Position.h Component/InputComponent.cpp Component/InputComponent.h Component/PlayerComponent/PlayerInputComponent.cpp Component/PlayerComponent/PlayerInputComponent.h Input.cpp Input.h)

message(${CMAKE_SOURCE_DIR})

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})

enable_testing()
add_subdirectory("tests")