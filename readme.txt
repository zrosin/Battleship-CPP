Zach Rosin
Battleship Program for OOP 345

Split the program into 5 modules.
main handled the IO because you only need 2 cins looped over the whole program, so i didnt see a reason to make a module for that.

i had a string manipulation module that changed strings back and forth with ints. this was initially going to be my input output section but i changed my mind, but didnt know where to put the output. might be better to be exported from board module but not much different i think. board.cpp has to be passed the that module anyways for the direction string.

boat class handled anything relating to ships. even the board didnt know what ships were where.

board class handled everything about the board other than outputting it, which i put in string manip.

game class really just implemented the features i built into the other modules but it still has some of its own distict features. both board and boat modules have no idea that the other exists so the game class is mostly using their variables and functions.

i didnt have time to implement a "You sunk my battleship" check because i forgot about it and only just saw it again. that should be the only feature im missing. the program is pretty easy to crash, but shouldnt crash unless you type input in wrong, like 6c instead of c6. 