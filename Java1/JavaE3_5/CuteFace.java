import javax.swing.JComponent;
import javax.swing.JPanel;
import javax.swing.JFrame;
import java.awt.*;
public class CuteFace extends JComponent
{
     public void paint(Graphics g)
     {
          super.paint(g);
          g.setColor(new Color(255,200,150));

          g.fillOval(30,30,300,300);

          g.setColor(new Color(255,255,255));

          g.fillOval(60,100,50,50);
          g.fillOval(240,100,50,50);

          g.setColor(new Color(0,0,0));

          g.fillOval(70,120,20,20);
          g.fillOval(250,120,20,20);

          g.drawArc(140,130,80,80,0,-180);
          g.drawArc(50,170,270,100,0,-180);
     }
}