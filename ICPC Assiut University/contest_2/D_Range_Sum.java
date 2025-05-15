import java.util.Scanner;

public class D_Range_Sum{
    public static void main(String[] args){
        long t;
        Scanner input = new Scanner(System.in);

        t = input.nextLong();

        while(t!=0){
            long l, r;
            l = input.nextLong();
            r = input.nextLong();
            long sum = ((r*(r+1))/2) - ((l-1)*(l)/2);
            System.out.println(sum);

            t--;
        }
        
    }
}