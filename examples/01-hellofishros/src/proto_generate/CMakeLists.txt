SET(LIB_PROTOSRC hello.pb.cc) 
ADD_LIBRARY(hello_proto SHARED ${LIB_PROTOSRC})

install(FILES hello.pb.h DESTINATION include)
install(TARGETS hello_proto LIBRARY DESTINATION lib)

