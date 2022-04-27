def is_valid(arg: str) -> bool:
    return arg != "invalid"


def janken(p1: str, p2: str):
    win_conditions = {
        "rock": "scissors",
        "paper": "rock",
        "scissors": "paper"
    }

    if not p1 == p2:
        print("Player 1 won!") if p2 == win_conditions[p1] else print("Player 2 won!")
    else:
        print("It's a draw!")

    print(f"({p1}, {p2})\n")


def user_input(arg: str) -> str:
    choices = {
        '1': "rock",
        '2': "paper",
        '3': "scissors",
        "exit": "exit"
    }
    return choices.get(input(arg), "invalid")


def start_game():
    print("-- Jack 'en Poy --")
    print("Select Your Options:")
    print("[1] Rock \n[2] Paper \n[3] Scissors\n")


def loop():
    while True:
        player1 = user_input("Player 1: ")
        if player1 == "exit":  # Check if user exited
            break
        if is_valid(player1):
            player2 = user_input("Player 2: ")
            if player2 == "exit":
                break
            if is_valid(player2):
                janken(player1, player2)
            else:
                print("Player 2: Invalid Input\n")
        else:
            print("Player 1: Invalid Input\n")

        start_game()


def main():
    start_game()
    loop()
    print("Game Over")


if __name__ == '__main__':
    main()
