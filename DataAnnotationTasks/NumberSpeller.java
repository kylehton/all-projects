import java.util.HashMap;
import java.util.Scanner;

public class NumberSpeller {

    private static final String[] belowTwenty = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                                                 "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    private static final String[] belowHundred = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    private static final String[] overHundred = {"", "Thousand", "Million", "Billion"};

    public static String numberToWords(int num) {
        if (num == 0) return belowTwenty[0];
        String words = "";
        int index = 0;
        while (num > 0) {
            if (num % 1000 != 0) {
                words = helper(num % 1000) + overHundred[index] + " " + words;
            }
            num /= 1000;
            index++;
        }
        return words.trim();
    }

    private static String helper(int num) {
        if (num == 0) return "";
        else if (num < 20) return belowTwenty[num] + " ";
        else if (num < 100) return belowHundred[num / 10] + " " + helper(num % 10);
        else return belowTwenty[num / 100] + " Hundred " + helper(num % 100);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value of n: ");
        int n = scanner.nextInt();

        HashMap<Integer, String> numberMap = new HashMap<>();

        for (int i = 0; i <= n; i++) {
            numberMap.put(i, numberToWords(i));
        }

        System.out.println("Number-to-Word Mapping:");
        for (int key : numberMap.keySet()) {
            System.out.println(key + " -> " + numberMap.get(key));
        }
    }
}