import java.awt.Graphics2D;
import java.awt.Graphics;
import javax.swing.JFrame;
import java.awt.Color;
import java.awt.Font;
import javax.swing.JComponent;

public class e2_prob10 extends JComponent{

     public void paintComponent (Graphics g)
     {
          Graphics2D g2 = (Graphics2D) g;
          Font font = new Font("Verdana", Font.BOLD, 18);
          g2.setFont(font);
          g2.setColor(Color.RED);
          g2.drawString("Kyle Ton", 50, 50);
     }

     public static void main(String[] args) {
          JFrame frame = new JFrame();
          e2_prob10 component = new e2_prob10();
          frame.add(component);
          frame.setSize(100, 100);
          frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
          frame.setVisible(true);

     }
}