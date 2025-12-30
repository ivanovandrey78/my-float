add_library(myfloat STATIC
    float32.cpp
    float64.cpp
)

target_include_directories(myfloat
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Alias ​​for consistency
add_library(myfloat::myfloat ALIAS myfloat)