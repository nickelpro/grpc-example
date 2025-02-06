add_subdirectory(proto)

find_package(fmt CONFIG REQUIRED)

target_sources(app
  PRIVATE
    main.cpp
)
target_link_libraries(app
  PRIVATE
    fmt::fmt-header-only
    proto-object
)
