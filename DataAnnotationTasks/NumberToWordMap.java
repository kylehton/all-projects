import java.util.HashMap;
import java.util.Scanner;

public class NumberToWordMap {

    private static final String[] belowTwenty = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    private static final String[] belowHundred = {
        "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
    };
    
    public static String numberToWord(int num) {
        if (num < 20) {
            return belowTwenty[num];
        } else if (num < 100) {
            return belowHundred[num / 10 - 2] + (num % 10 == 0 ? "" : "-" + belowTwenty[num % 10]);
        } else {
            return "Number out of range (0-99)";
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value of n (0-99): ");
        int n = scanner.nextInt();
        scanner.close();

        HashMap<Integer, String> numberWordMap = new HashMap<>();
        for (int i = 0; i <= n; i++) {
            numberWordMap.put(i, numberToWord(i));
        }

        System.out.println("HashMap: " + numberWordMap);
    }
}