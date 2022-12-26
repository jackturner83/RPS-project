.data
	player1Msg: 	.asciiz "Player 1: "
	player2Msg: 	.asciiz "\nPlayer 2: "
	resultMsg:	.asciiz "\nWinner: "
	player1:	.asciiz "Player 1 wins"
	player2:	.asciiz "Player 2 wins"
	tieMsg:		.asciiz "It's a tie"
		
		

	.text
		#prompt player1 to enter a move
		li $v0, 4
		la $a0, player1Msg
		syscall

		#player1's move
		li $v0, 5
		syscall
		move $t0, $v0

		#prompt player2 to enter a move
		li $v0, 4
		la $a0, player2Msg
		syscall

		#player2's move
		li $v0, 5
		syscall
		move $t1, $v0

		#compare the two moves
		beq $t0, $t1, tie
		blt $t0, $t1, player2Win
		bgt $t0, $t1, player1Win

		#player1 wins
	player1Win:
		li $v0, 4
		la $a0, resultMsg
		syscall
		li $v0, 4
		la $a0, player1 
		syscall
		j exit

		#player2 wins
	player2Win:
		li $v0, 4
		la $a0, resultMsg
		syscall
		li $v1, 4
		la $a0, player2 
		syscall
#tie
tie:
li $v0, 4
la $a0, resultMsg
syscall
li $v0, 4

syscall
j exit

#exit
exit:
li $v0, 10

		
