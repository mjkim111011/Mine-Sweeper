# Mine-Sweeper

We are sort of going to play minesweeper.

From command files, we will read a series of commands and proceed to play the game.


The game is over when

*The player touched all the spaces in the grid without any bombs, thus safely clearing board.

*The player touched a bomb.

Our grid will be 8x8, and there are 3 commands that our program will process.

*load : the load command will read the filename that follows and open that file and read in the given board.  The board will be shown below, but it will be in an 8x8 grid of . and *.  A . indicates a blank space and a * indicates a bomb.  We will have 10 bombs and 54 blanks.

*touch :the touch command will be followed by two integers.  The integers represent an x and y coordinate on the board where the player would like to touch.  The coordinates will be 1 based.  If the coordinates do not fall within the confines of our grid, nothing is done.  When we touch a space, we will not be revealing more than that 1 space.  For example in the real game of minesweeper, a touch into a large area that doesn't touch any bombs would reveal that entire area.  We will not be doing that. **Modified version(real minesweeper) will be revealed soon.**

*display : the display command will display the current view of the board.  Any touched spaces will show how many bombs they are next to.  We will use 0 for blanks that don't touch any spaces.  

For display, use the following symbols

'.' : this symbol indicates a spaces has not been touched.

'#' : the number will indicate how many bombs this square is touching.  Put the actual number not the '#' symbol.

* : this is an exploded bomb.  So in the final board display, if the player touched a bomb, this will be shown.
* 
@ - this is an unexploded bomb.  So in the final board display, if the player didn't touch a bomb, this symbol will be shown.


Sample files for testing is provided.
