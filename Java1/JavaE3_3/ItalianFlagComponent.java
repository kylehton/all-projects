import java.awt.Graphics;
import java.awt.Graphics2D;
import javax.swing.JComponent;

public class ItalianFlagComponent extends JComponent
{

     public void paintComponent(Graphics g) 
     {
          Graphics2D g2 = (Graphics2D) g;
          ItalianFlag flag = new ItalianFlag(100, 100, 90);
          flag.draw(g2);

          g.drawLine(130, 100, 160, 100);
          g.drawLine(130, 160, 160, 160);
     }
}
