import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Random;

public class TicTacToe {

    static ArrayList<Integer> player1Position = new ArrayList<Integer>();
    static ArrayList<Integer> player2Position = new ArrayList<Integer>();

    static boolean isPlayer1 = false;
    static boolean isPlayer2 = false;

    public static void main(String[] args) {

        int move;

        // contains char pieces for gameBoard
        char[][] gameBoard = { { ' ', '|', ' ', '|', ' ' }, { '-', '+', '-', '+', '-' }, { ' ', '|', ' ', '|', ' ' },
                { '-', '+', '-', '+', '-' }, { ' ', '|', ' ', '|', ' ' } };

        printBoard(gameBoard);
        Scanner scan = new Scanner(System.in);

        while (isPlayer1 == false && isPlayer2 == false) {
            System.out.print("Player 1's turn, \nEnter your move (1-9): ");
            move = scan.nextInt();
            scan.nextLine();

            while (player1Position.contains(move) || player2Position.contains(move)) {
                System.out.println("Position already taken,\nEnter your move (1-9): ");
                move = scan.nextInt();
                scan.nextLine();
            }

            placePiece(gameBoard, move, "Human");

            Random rand = new Random();
            int cpu_move = rand.nextInt(9) + 1;
            placePiece(gameBoard, cpu_move, "CPU");
            printBoard(gameBoard);
            /*
             * System.out.print("Player 2's turn, \nEnter your move (1-9): "); move =
             * scan.nextInt(); scan.nextLine();
             * 
             * placePiece(gameBoard, move, "Human2"); printBoard(gameBoard);
             */
            String winnerPrompt = checkWinner();
            System.out.println(winnerPrompt);
        }

        scan.close();
    }

    /**
     * Prints the whole board using gameBoard
     * 
     * @param gameBoard
     */
    public static void printBoard(char[][] gameBoard) {
        for (char[] row : gameBoard) {
            for (char pieces : row) {
                System.out.print(pieces);
            }
            System.out.println();
        }
    }

    /**
     * 
     * @return
     */
    public static String checkWinner() {
        List topRow = Arrays.asList(1, 2, 3);
        List midRow = Arrays.asList(4, 5, 6);
        List botRow = Arrays.asList(7, 8, 9);
        List leftCol = Arrays.asList(1, 4, 7);
        List midCol = Arrays.asList(2, 5, 8);
        List rightCol = Arrays.asList(3, 6, 9);
        List cross1 = Arrays.asList(1, 5, 9);
        List cross2 = Arrays.asList(7, 5, 3);

        List<List> winConditions = new ArrayList<List>();
        winConditions.add(topRow);
        winConditions.add(midRow);
        winConditions.add(botRow);
        winConditions.add(leftCol);
        winConditions.add(midCol);
        winConditions.add(rightCol);
        winConditions.add(cross1);
        winConditions.add(cross2);

        for (List l : winConditions) {
            if (player1Position.containsAll(l)) {
                isPlayer1 = true;
                return "Player 1 wins!";
            } else if (player2Position.containsAll(l)) {
                isPlayer2 = false;
                return "Player 2 wins!";
            } else if (player1Position.size() + player2Position.size() == 9) {
                return "Board full, please try again.";
            }
        }

        return "";
    }

    /**
     * Places the pieces on the board
     * 
     * @param gameBoard
     * @param move
     * @param player
     */
    public static void placePiece(char[][] gameBoard, int move, String player) {

        char symbol = ' ';

        // condition if player is human or CPU
        if (player.equals("Human")) {
            symbol = 'x';
            player1Position.add(move);
        } else if (player.equals("CPU") || player.equals("Human2")) {
            symbol = 'o';
            player2Position.add(move);
        }

        switch (move) {
            case 1:
                gameBoard[0][0] = symbol;
                break;
            case 2:
                gameBoard[0][2] = symbol;
                break;
            case 3:
                gameBoard[0][4] = symbol;
                break;
            case 4:
                gameBoard[2][0] = symbol;
                break;
            case 5:
                gameBoard[2][2] = symbol;
                break;
            case 6:
                gameBoard[2][4] = symbol;
                break;
            case 7:
                gameBoard[4][0] = symbol;
                break;
            case 8:
                gameBoard[4][2] = symbol;
                break;
            case 9:
                gameBoard[4][4] = symbol;
                break;
            default:
                break;
        }
    }
}