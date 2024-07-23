public class HelloPrinter
{
     public static void main(String[] args)
     {
          String helloworld = "Hello, World!";
          System.out.println("Original: "+helloworld);
          helloworld = helloworld.replace('e', '\t');
          helloworld = helloworld.replace('o', 'e');
          helloworld = helloworld.replace('\t', 'o');
          System.out.println("Revised: "+helloworld);
          /*Uses tabs as placeholders of e so that there is no double
          replacement of letters */
     }
}