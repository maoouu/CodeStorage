# SILVESTRE, FRANCIS RALPH HENRY V.
# Jack 'en Poy
#CCP - ITBA

print("Jack 'en Poy\n")
print("Select an Option\n")
print("[1] Paper")
print("[2] Scissors")
print("[3] Rock\n")


def is_valid(user_input: int) -> bool:
    return user_input > 0 and user_input < 4


choice = {
    1: 3,   # Paper beats Rock
    2: 1,   # Scissors beats Paper
    3: 2    # Rock beats Scissors
}

player1 = int(input("Player 1: ").trim())
if is_valid(player1):
    player2 = int(input("Player 2: ").trim())
    if is_valid(player2):
        if player1 == player2:
            print("It's a draw!")
        elif player2 == choice[player1]:
            print("Player 1 won!")
        else:
            print("Player 2 won!")
    else:
        print("Player 2: Invalid Input")
else:
    print("Player 1: Invalid input")
