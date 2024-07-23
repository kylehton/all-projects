import java.awt.Graphics;
import java.awt.Graphics2D;
import javax.swing.JComponent;

public class TargetComponent extends JComponent
{
     public void paintComponent(Graphics g)
     {
          Graphics2D g2 = (Graphics2D) g;
          Target myTarget = new Target(Math.min(getWidth(), getHeight()) / 2, getWidth() / 2, getHeight() / 2);
          myTarget.draw(g2);
     } 
} 