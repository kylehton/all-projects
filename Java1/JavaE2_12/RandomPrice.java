import java.util.Random;
import java.text.DecimalFormat;
public class RandomPrice
{
     public static void main(String[] args)
     {
          Random price = new Random();
          double randprice = price.nextDouble(10.00,19.96);
          System.out.printf("$%.2f", randprice);
     }
}