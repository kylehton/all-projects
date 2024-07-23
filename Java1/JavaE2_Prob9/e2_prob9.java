import java.awt.Color;
import java.awt.geom.Ellipse2D;
import java.awt.Graphics;
import java.awt.Graphics2D;
import javax.swing.JComponent;
import javax.swing.JFrame;
public class e2_prob9 extends JComponent
{
     public void paintComponent(Graphics g)
     {
          Graphics2D g1 = (Graphics2D) g;
          g1.setColor(Color.RED);
          Ellipse2D.Double myCircle = new Ellipse2D.Double(10, 10, 50, 50);
          g1.fill(myCircle);
     }

     public static void main(String[] args) {
        JFrame frame = new JFrame();
        e2_prob9 component = new e2_prob9();
        frame.add(component);
        frame.setSize(100, 100);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
