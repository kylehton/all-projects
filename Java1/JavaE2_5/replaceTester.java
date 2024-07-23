public class replaceTester
{
     public static void main(String[] args)
     {
          String exampleword = "Mississippi";
          System.out.println("Original: "+exampleword);
          exampleword = exampleword.replace('i', '!');
          exampleword = exampleword.replace('s','$');
          System.out.println("Revised: "+exampleword);
     }
}
