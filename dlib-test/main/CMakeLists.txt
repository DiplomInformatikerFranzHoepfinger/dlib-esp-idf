idf_component_register(SRCS "main.cpp"
                    INCLUDE_DIRS ".")

# Build static library, do not build test executables
option(BUILD_SHARED_LIBS OFF)
option(BUILD_TESTING OFF)

# Import tinyxml2 targets 
add_subdirectory(lib/dlib)

# Link tinyxml2 to main component
target_link_libraries(${COMPONENT_LIB} PUBLIC dlib)
