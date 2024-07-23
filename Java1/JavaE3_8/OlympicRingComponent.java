import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import javax.swing.JComponent;
public class OlympicRingComponent extends JComponent
{
public void paintComponent(Graphics g)
{
          Graphics2D g2 = (Graphics2D) g;

          int xMid = getWidth() / 2;
          int yMid = getHeight() / 2;
          int radius = 30;
          int yTopRow = yMid - radius / 2;
          int yBotRow = yMid + radius / 2;

          OlympicRing ring1 = new OlympicRing(xMid - radius * 3, yTopRow, radius, Color.BLUE);
          OlympicRing ring2 = new OlympicRing(xMid - radius, yTopRow, radius, Color.BLACK);
          OlympicRing ring3 = new OlympicRing(xMid + radius, yTopRow, radius, Color.RED);
          OlympicRing ring4 = new OlympicRing(xMid - radius * 2, yBotRow, radius, Color.YELLOW);
          OlympicRing ring5 = new OlympicRing(xMid, yBotRow, radius, Color.GREEN);
          
          ring1.draw(g2);
          ring2.draw(g2);
          ring3.draw(g2);
          ring4.draw(g2);
          ring5.draw(g2);
     }
}