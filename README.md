# Janggi-Korean-Chess
Janggi (Korean Chess) is a fun board game. Now you can play Janggi on a terminal!
<br />
<br />
![alt text](https://github.com/j-baek/Janggi-Korean-Chess/blob/main/janggi.png)


## check-list for Janggi (Korean Chess)
- [X] make a board and display it 
- [X] make objects for each janggi piece
- [X] display janggi pieces on a board
- [X] make move function for each janggi piece
- [X] renew the board and display it
- [X] make a function that checks if either general is dead. If one of the general dies, the game ends and the team that kills the general wins

### Rules
for detailed rules, click the link: https://en.wikipedia.org/wiki/Janggi
<br />

### Generals 
$${\color{red}漢}$$

$${\color{blue}楚}$$
- they have to stay in their palace
  <br />
  (for red team, row: 0-2, col: 3-5, inclusive)
  <br />
  (for blue team, row: 7-9, col: 3-5, inclusive)
- they can move one step orthogonally only
- they can always move to the center of the palace (diagonal movement allowed for going to the center)
- when either dies, the game ends

### Guards

$${\color{red}士}$$

$${\color{blue}士}$$
- their movement restriction is the same as generals

### Horses
$${\color{red}馬}$$

$${\color{blue}馬}$$
- they can move one step orthogonally and one step diagonally outward, with no jumping
- if there is any piece on their first step, their movement is blocked

### Elephants
$${\color{red}象}$$

$${\color{blue}象}$$
- they can move one step orthogonally and two steps diagonally away from their starting point, with no jumping
- if there is any piece on their first two steps, their movement is blocked

### Chariots
$${\color{red}車}$$

$${\color{blue}車}$$
- they can move orthogonally only, with no jumping
- they can have as many steps as possible until encounter the end of the board or other pieces

### Cannons
$${\color{red}包}$$

$${\color{blue}包}$$
- they can move orthogonally only, with one jump
- if there are no other pieces to jump over, their movement is restricted
- they cannot jump over more than one piece
- they cannot jump over other cannon, nor attack other cannon

### Soldiers
$${\color{red}兵}$$

$${\color{blue}卒}$$
- they can move one step at a time, orthogonally
- they cannot move backward
  <br />
  (for red team, new row >= current row)
  <br />
  (for blue team, new row <= current row)
