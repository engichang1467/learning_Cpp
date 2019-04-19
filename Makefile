# all: Dice

# wi: walkIn.o List.o Patient.o
# 	g++ -Wall -o wi walkIn.o List.o Patient.o

# Dice: DiceRoll.o
# 	g++ -Wall -o Dice DiceRoll.o

# DiceRoll.o: DiceRoll.cpp
# 	g++ -Wall -c DiceRoll.cpp

# Chap2_3B: Chap2_3_Begin.o
# 	g++ -Wall -o Chap2_3B Chap2_3_Begin.o

# Chap2_3_Begin.o: Chap2_3_Begin.cpp
# 	g++ -Wall -c Chap2_3_Begin.cpp

# Chap2_3E: Chap2_3_End.o
# 	g++ -Wall -o Chap2_3E Chap2_3_End.o

# Chap2_3_End.o: Chap2_3_End.cpp
# 	g++ -Wall -c Chap2_3_End.cpp


# Patient.o: Patient.cpp Patient.h
# 	g++ -Wall -c Patient.cpp

clean:
	rm -f Dice Chap2_3B Chap2_3E a.out *.o
