import java.awt.Graphics;
import java.awt.Graphics2D;
import javax.swing.JComponent;

public class CarComponent extends JComponent
{
     public void paintComponent(Graphics g)
     {
          Graphics2D g2 = (Graphics2D) g;
          Car car1 = new Car(0, 0);
          int x = getWidth() - 60;
          int y = getHeight() - 30;
          Car car2 = new Car(x, y);
          Car car3 = new Car(0, y);
          Car car4 = new Car(x, 0);
          car1.draw(g2);
          car2.draw(g2);
          car3.draw(g2);
          car4.draw(g2);
     }
}
