CC = g++
EXE_FILE = su_thinzar_thaw
all: $(EXE_FILE)

$(EXE_FILE) : su_thinzar_thaw.cpp thrown.o thrown.h CoinToss.o CoinToss.h OneDice.o OneDice.h TwoDices.o TwoDices.h 
    $(CC) thrown.o CoinToss.o OneDice.o TwoDices.o su_thinzar_thaw.cpp -o $(EXE_FILE)

thrown.o : thrown.h thrown.cpp
    $(CC) -c thrown.cpp

CoinToss.o : CoinToss.h CoinToss.cpp
    $(CC) -c CoinToss.cpp

OneDice.o : OneDice.h OneDice.cpp
    $(CC) -c OneDice.cpp

TwoDices.o : TwoDices.h TwoDices.cpp
    $(CC) -c TwoDices.cpp

clean :
    rm -f *.o $(EXE_FILE)