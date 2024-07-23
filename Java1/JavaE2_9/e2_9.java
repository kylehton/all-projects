import java.awt.Color;
import javax.swing.JFrame;;
public class e2_9
{
    public static void main(String[] args)
    {
          JFrame frame = new JFrame();
          frame.setSize(200,200);
          Color myColor = new Color(50,100,150);
          Color myBrightenedColor = myColor.brighter();
          System.out.println("Red: "+myBrightenedColor.getRed());
          System.out.println("Green: "+myBrightenedColor.getGreen());
          System.out.println("Blue: "+myBrightenedColor.getBlue());
          frame.getContentPane().setBackground(myColor);
          frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
          frame.setVisible(true);
    }
}
