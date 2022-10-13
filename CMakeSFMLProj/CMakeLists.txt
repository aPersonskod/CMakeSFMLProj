# CMakeList.txt : CMake project for CMakeSFMLProj, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (CMakeSFMLProj "CMakeSFMLProj.cpp" "CMakeSFMLProj.h" "chessGame.cpp" "chessGame.h" "board.cpp" "board.h" "piece.cpp" "piece.h" "pieceTextures.cpp" "pieceTextures.h")
target_link_libraries(CMakeSFMLProj ${CMAKE_SOURCE_DIR}/library/sfml-graphics.lib)
target_link_libraries(CMakeSFMLProj ${CMAKE_SOURCE_DIR}/library/sfml-audio.lib)
target_link_libraries(CMakeSFMLProj ${CMAKE_SOURCE_DIR}/library/sfml-network.lib)
target_link_libraries(CMakeSFMLProj ${CMAKE_SOURCE_DIR}/library/sfml-system.lib)
target_link_libraries(CMakeSFMLProj ${CMAKE_SOURCE_DIR}/library/sfml-window.lib)

include_directories(${CMAKE_SOURCE_DIR}/include)

set_property(TARGET CMakeSFMLProj PROPERTY CXX_STANDARD 17)
set_property(TARGET CMakeSFMLProj PROPERTY CXX_STANDARD_REQUIRED ON)

# TODO: Add tests and install targets if needed.
