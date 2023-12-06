# Janggi-Korean-Chess
Janggi (Korean Chess) is a fun board game. Now you can play Janggi on a terminal!
<br />
<br />
![alt text](https://github.com/j-baek/Janggi-Korean-Chess/blob/main/janggi.png)


## check-list for Janggi (Korean Chess)
- [X] make a board and display it 
- [X] make objects for each janggi piece
- [X] display a board
- [X] display janggi pieces on a board
- [X] make functions for janggi objects (renewing its state when moved)
- [X] make a function that checks if either general is dead. If one of the general dies, the game ends and the team that kills the general wins

### Rules
for detailed rules, click the link: https://en.wikipedia.org/wiki/Janggi
<br />

### Generals 

$${\color{red}漢}$$

$${\color{blue}楚}$$

- they have to stay on their own palace
  <br />
  (for red team, row: 0-2, col: 3-5, inclusive)
  <br />
  (for blue team, row: 7-9, col: 3-5, inclusive)
- they can always move to the center of the palace (diagonal movement allowed for going to the center)
- when general dies, the game ends
