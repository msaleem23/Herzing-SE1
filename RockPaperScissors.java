import java.util.Scanner;

public class RockPaperScissors {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Welcome to rock/paper/scissor game:");
        System.out.println("Player 1 Name:");
        String player1Name = sc.nextLine();

        System.out.println("Player 2 Name:");
        String player2Name = sc.nextLine();

        int player1Wins = 0;
        int player2Wins = 0;

        while (true) {
            // Player choices 
            System.out.println(player1Name + ", Enter your choice:");
            String player1Choice = sc.nextLine();

            System.out.println(player2Name + ", Enter your choice:");
            String player2Choice = sc.nextLine();

            if (player1Choice.equals(player2Choice)) {
                System.out.println("Tie!");
            } else if ((player1Choice.equals("rock") && player2Choice.equals("scissors")) ||
                       (player1Choice.equals("paper") && player2Choice.equals("rock")) ||
                       (player1Choice.equals("scissors") && player2Choice.equals("paper"))) {
                System.out.println(player1Name + " wins this round!");
                player1Wins++;
            } else {
                System.out.println(player2Name + " wins this round!");
                player2Wins++;
            }

            System.out.print("Do you want to continue? (y/n):");
            String playAgain = sc.nextLine().toLowerCase();

            if (!playAgain.equals("y")) {
                System.out.println("Game is over!");
                System.out.println(player1Name + " won " + player1Wins + " rounds");
                System.out.println(player2Name + " won " + player2Wins + " rounds");
                break;
            }
        } // Loop ends
        sc.close(); //closing scanner to avoid resource leaks
    }
}