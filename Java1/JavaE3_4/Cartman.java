import java.applet.Applet;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.Color;
public class Cartman extends Applet
{
     public void paint(Graphics g)
     {

          Graphics2D g2 = (Graphics2D)g;

          g2.setColor(Color.red);
          g2.fillOval(25,150,200,150);

          Color ltBlue = new Color (.7F, 0.8F, 1F);
          g2.setColor(ltBlue);
          g2.fillOval(50,70,150,100);

          g2.setColor(Color.yellow);
          g2.fillOval(110, 60, 30, 20);

          Color orange = new Color (1.0F, 0.8F, .5F);
          g2.setColor(orange);
          g2.fillOval(50,85,150,100);

          g2.setColor(Color.white);
          g2.fillOval(80, 110, 30, 30);

          g2.setColor(Color.white);
          g2.fillOval(140, 110, 30, 30);

          g2.setColor(Color.black);
          g2.fillOval(105, 160, 40, 5);
     }
}