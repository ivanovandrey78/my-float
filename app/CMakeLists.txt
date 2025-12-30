add_executable(myfloat_app main.cpp)

target_link_libraries(myfloat_app
    PRIVATE myfloat::myfloat
)