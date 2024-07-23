import java.awt.Color;
public class e_8
{
     public static void main(String[] args)
     {
          Color myColor = new Color(50,100,150);
          Color myBrightenedColor = myColor.brighter();
          System.out.println("Red: "+myBrightenedColor.getRed());
          System.out.println("Green: "+myBrightenedColor.getGreen());
          System.out.println("Blue: "+myBrightenedColor.getBlue());

     }
}