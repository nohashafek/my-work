cmake_minimum_required(VERSION 3.5 )

### c++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project( project )

include_directories( include )



add_executable( test1  apps/analyzeECG.cpp )
add_executable(test2 apps/calculator.cpp )
add_executable( test3 apps/heron.cpp )
add_executable( test4 apps/a1_stock_span.cpp )
add_executable( test5 apps/a2_balanced_parentheses.cpp )
add_executable( test6 apps/a3_awesome_application.cpp )

