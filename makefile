#target: dependencies
#	rule to build

CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

SRCS = stoneAgeMain.cpp
SRCS += Space.cpp
SRCS += Grasslands.cpp
SRCS += Tundra.cpp
SRCS += Forest.cpp
SRCS += Lake.cpp
SRCS += Animal.cpp
SRCS += Mammoth.cpp
SRCS += GiantDeer.cpp
SRCS += Plant.cpp
SRCS += Berries.cpp
SRCS += Grass.cpp
SRCS += Nuts.cpp
SRCS += Material.cpp
SRCS += Obsidian.cpp
SRCS += Flint.cpp
SRCS += Clan.cpp

StoneAge: ${SRCS}
	${CXX} ${CXXFLAGS} ${SRCS} -o StoneAge

clean:
	rm StoneAge
