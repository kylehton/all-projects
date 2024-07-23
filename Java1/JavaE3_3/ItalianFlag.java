import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.Rectangle;

public class ItalianFlag 
{

     private int xLeft;
     private int yTop;
     private int width;

     public ItalianFlag(int x, int y, int aWidth) 
     {
          xLeft = x;
          yTop = y;
          width = aWidth;
     }

     public void draw(Graphics2D g2) 
     {
          Rectangle leftRectangle = new Rectangle(xLeft, yTop, width/3, width * 2/3);
          Rectangle rightRectangle = new Rectangle(xLeft + 2 * width/3, yTop, width/3, width * 2/3);

          g2.setColor(Color.GREEN);
          g2.fill(leftRectangle);
          g2.setColor(Color.RED);
          g2.fill(rightRectangle);
          g2.setColor(Color.BLACK);
     }
}