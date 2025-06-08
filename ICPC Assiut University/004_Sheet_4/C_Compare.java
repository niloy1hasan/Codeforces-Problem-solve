
import java.util.Scanner;

public class C_Compare {
    public static void main(String[] args){
        String s1, s2;
        Scanner in = new Scanner(System.in);

        s1 = in.nextLine();
        s2 = in.nextLine();
        in.close();

        if(s1.compareTo(s2)<=0){
            System.out.println(s1);
        } else {
            System.out.println(s2);
        }
    }
}